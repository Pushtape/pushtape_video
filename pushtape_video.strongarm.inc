<?php
/**
 * @file
 * pushtape_video.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pushtape_video_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__video';
  $strongarm->value = array(
    'view_modes' => array(
      'media_gallery_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_lightbox' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_detail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_block_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_collection_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'track_player' => array(
        'custom_settings' => FALSE,
      ),
      'album_player' => array(
        'custom_settings' => FALSE,
      ),
      'media_gallery_featured' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_gallery_thumbnail' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'media_gallery_featured' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__pushtape_video';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'mediaplaylist' => array(
        'custom_settings' => FALSE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'email_plain' => array(
        'custom_settings' => FALSE,
      ),
      'email_html' => array(
        'custom_settings' => FALSE,
      ),
      'email_textalt' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'pushtape_video_entity_view_5' => array(
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'pushtape_video_entity_view_1' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'pushtape_video_entity_view_3' => array(
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'pushtape_video_entity_view_2' => array(
          'default' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'pushtape_video_entity_view_4' => array(
          'default' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'featured' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__pushtape_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_pushtape_video';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_pushtape_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_pushtape_video';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_pushtape_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pushtape_video';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_pushtape_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_pushtape_video';
  $strongarm->value = '1';
  $export['node_preview_pushtape_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_pushtape_video';
  $strongarm->value = 0;
  $export['node_submitted_pushtape_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pushtape_video_pattern';
  $strongarm->value = 'video/[node:title]';
  $export['pathauto_node_pushtape_video_pattern'] = $strongarm;

  return $export;
}
