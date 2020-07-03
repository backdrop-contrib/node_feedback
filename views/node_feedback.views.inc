<?php

/**
 * @file
 * Using hooks_views_data to contruct view dynamically.
 */

/**
 * Implements hook_views_data().
 */
function node_feedback_views_data() {
  $data['node_feedback'] = [
    'table' => [
      'group' => 'Node Feedback',
      'base' => [
        'field' => 'nfid',
        'title' => 'Node Feedback Table',
        'help' => 'All the feedbacks are saved in this table',
      ],
    ],
    'nfid' => [
      'title' => t('NF Id'),
      'help' => t('ID field'),
      'field' => [
        'click sortable' => TRUE,
      ],
      'filter' => [
        'handler' => 'views_handler_filter_numeric',
      ],
      'sort' => [
        'handler' => 'views_handler_sort',
      ],
    ],
    'nid' => [
      'title' => t('Node Id'),
      'help' => t('Node Id'),
      'field' => [
        'click sortable' => TRUE,
      ],
      'filter' => [
        'handler' => 'views_handler_filter_numeric',
      ],
      'sort' => [
        'handler' => 'views_handler_sort',
      ],
      'relationship' => [
        'handler' => 'views_handler_relationship',
        'base' => 'node',
        'base field' => 'nid',
        'title' => t('Flagged Content'),
        'label' => t('Flagged node content.'),
      ],
    ],
    'name' => [
      'title' => t('Username'),
      'help' => t('Username of the feedback author.'),
      'field' => [
        'click sortable' => TRUE,
      ],
      'filter' => [
        'handler' => 'views_handler_filter_string',
      ],
    ],
    'response_text_feedback' => [
      'title' => t('Feedback'),
      'help' => t('Flaging feedback'),
      'field' => [
        'click sortable' => TRUE,
      ],
      'sort' => [
        'handler' => 'views_handler_sort',
      ],
      'filter' => [
        'handler' => 'views_handler_filter_string',
      ],
    ],
    'timestamp' => [
      'title' => t('Updated Date'),
      'help' => t('Updated timestamp of the flag'),
      'field' => [
        'click sortable' => TRUE,
        'handler' => 'views_handler_field_date',
      ],
      'filter' => [
        'handler' => 'views_handler_filter_date',
      ],
      'sort' => [
        'handler' => 'views_handler_sort',
      ],
    ],
  ];

  return $data;
}
