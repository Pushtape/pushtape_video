<?php
/**
 * @file
 * pushtape_video.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function pushtape_video_field_default_fields() {
  $fields = array();

  // Exported field: 'node-pushtape_video-field_addthis'.
  $fields['node-pushtape_video-field_addthis'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_addthis',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'addthis',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => '0',
      'type' => 'addthis',
    ),
    'field_instance' => array(
      'bundle' => 'pushtape_video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'addthis',
          'settings' => array(),
          'type' => 'addthis_disabled',
          'weight' => 2,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_addthis',
      'label' => 'AddThis',
      'required' => FALSE,
      'settings' => array(
        'mediafront' => array(
          'custom' => '',
          'field_type' => '0',
          'media_type' => 'media',
          'preview' => '0',
          'thumbnail' => '0',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'addthis',
        'settings' => array(),
        'type' => 'addthis_button_widget',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-pushtape_video-field_featured_status'.
  $fields['node-pushtape_video-field_featured_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_featured_status',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'pushtape_video',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 1,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_featured_status',
      'label' => 'Feature content',
      'required' => 0,
      'settings' => array(
        'mediafront' => array(
          'custom' => '',
          'field_type' => '0',
          'media_type' => 'media',
          'preview' => '0',
          'thumbnail' => '0',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-pushtape_video-field_video'.
  $fields['node-pushtape_video-field_video'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_video',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'pushtape_video',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'mediafront',
          'settings' => array(
            'preset' => 'video_playlist',
          ),
          'type' => 'mediafront_player',
          'weight' => '0',
        ),
        'featured' => array(
          'label' => 'hidden',
          'module' => 'file_entity',
          'settings' => array(
            'file_view_mode' => 'teaser',
          ),
          'type' => 'file_rendered',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_video',
      'label' => 'Video',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => '',
        'file_extensions' => 'mov m4v mpeg avi ogg oga ogv wmv',
        'max_filesize' => '',
        'mediafront' => array(
          'custom' => '',
          'field_type' => 'media',
          'media_type' => 'media',
          'preview' => '0',
          'thumbnail' => '0',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'private' => 'private',
            'public' => 'public',
            'soundcloud' => 0,
            'vimeo' => 'vimeo',
            'youtube' => 'youtube',
          ),
          'allowed_types' => array(
            'audio' => 0,
            'document' => 0,
            'image' => 0,
            'video' => 'video',
          ),
          'browser_plugins' => array(
            'media_default--media_browser_1' => 'media_default--media_browser_1',
            'media_default--media_browser_my_files' => 0,
            'media_internet' => 'media_internet',
            'upload' => 0,
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => '1',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('AddThis');
  t('Feature content');
  t('Video');

  return $fields;
}
