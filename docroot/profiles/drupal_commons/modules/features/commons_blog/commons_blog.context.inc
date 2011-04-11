<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function commons_blog_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_ui-group-group-blog-node';
  $context->description = 'A blog node inside a group';
  $context->tag = 'Group';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        'group' => 'group',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-group_block_blog_latest-block_1' => array(
          'module' => 'views',
          'delta' => 'group_block_blog_latest-block_1',
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'views-f8cb0875780fe573595fe3b2bb97ff69' => array(
          'module' => 'views',
          'delta' => 'f8cb0875780fe573595fe3b2bb97ff69',
          'region' => 'sidebar_last',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('A blog node inside a group');
  t('Group');

  $export['context_ui-group-group-blog-node'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_ui-group-group-home-blogs';
  $context->description = 'Blog posts block for the group home page';
  $context->tag = 'Group';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'group' => 'group',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-group_block_blog_latest-block_1' => array(
          'module' => 'views',
          'delta' => 'group_block_blog_latest-block_1',
          'region' => 'sidebar_last',
          'weight' => 5,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog posts block for the group home page');
  t('Group');

  $export['context_ui-group-group-home-blogs'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_ui-group-group-tab-blogs';
  $context->description = 'The blog tab on a group';
  $context->tag = 'Group';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'group_tab_blogs:page_1' => 'group_tab_blogs:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-group_block_blog_latest_comments-block_1' => array(
          'module' => 'views',
          'delta' => 'group_block_blog_latest_comments-block_1',
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Group');
  t('The blog tab on a group');

  $export['context_ui-group-group-tab-blogs'] = $context;
  return $export;
}