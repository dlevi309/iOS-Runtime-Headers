/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, PETScalarEventTracker, NCNotificationListSection, NCNotificationStructuredSectionList;

@interface NCNotificationListStalenessEventTracker : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _lastDisplayedDateByNotificationMetadata;
	PETScalarEventTracker* _stalenessEventTracker;
	NCNotificationListSection* _notificationList;
	NCNotificationStructuredSectionList* _structuredSectionList;

}

@property (assign,nonatomic,__weak) NCNotificationListSection * notificationList;                             //@synthesize notificationList=_notificationList - In the implementation block
@property (assign,nonatomic,__weak) NCNotificationStructuredSectionList * structuredSectionList;              //@synthesize structuredSectionList=_structuredSectionList - In the implementation block
+(id)eventTrackerWithAutomaticCollation;
+(id)_allMetricsSafeBundleIdentifiers;
+(id)_metricsSafeBundleIdentifierForBundleIdentifier:(id)arg1 ;
+(id)_metricsSafeBundleIdentifierByBundleIdentifier;
-(id)init;
-(void)dealloc;
-(void)handleEvent:(unsigned long long)arg1 ;
-(void)setStructuredSectionList:(NCNotificationStructuredSectionList *)arg1 ;
-(void)_startAutocollation;
-(void)_stopAutocollation;
-(void)_handleListPresentedEvent;
-(NCNotificationStructuredSectionList *)structuredSectionList;
-(void)_queue_processRequests:(id)arg1 timestamp:(id)arg2 ;
-(void)_queue_collateAndRecordMetrics;
-(void)collateAndRecordMetrics;
-(NCNotificationListSection *)notificationList;
-(void)setNotificationList:(NCNotificationListSection *)arg1 ;
@end

