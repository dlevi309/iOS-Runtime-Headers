/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MPCReportingController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, SSVPlayActivityController;

@interface MPCJinglePlayActivityReportingController : MPCReportingController {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	double _nonCatalogAggregatePlayDuration;
	double _nonCatalogAggregateStartTime;
	NSString* _nonCatalogDeviceName;
	BOOL _nonCatalogOffline;
	BOOL _nonCatalogSBEnabled;
	unsigned long long _nonCatalogStoreAccountID;
	NSString* _nonCatalogBuildVersion;
	NSString* _nonCatalogStoreFrontID;
	unsigned long long _nonCatalogSourceType;
	BOOL _shouldReportAggregateTimePlayActivityEvents;
	BOOL _shouldReportPlayActivityEvents;
	SSVPlayActivityController* _playActivityController;

}

@property (nonatomic,readonly) SSVPlayActivityController * playActivityController;              //@synthesize playActivityController=_playActivityController - In the implementation block
@property (assign,nonatomic) BOOL shouldReportAggregateTimePlayActivityEvents;                  //@synthesize shouldReportAggregateTimePlayActivityEvents=_shouldReportAggregateTimePlayActivityEvents - In the implementation block
@property (assign,nonatomic) BOOL shouldReportPlayActivityEvents;                               //@synthesize shouldReportPlayActivityEvents=_shouldReportPlayActivityEvents - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithWritingStyle:(unsigned long long)arg1 ;
-(void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(SSVPlayActivityController *)playActivityController;
-(void)setShouldReportPlayActivityEvents:(BOOL)arg1 ;
-(void)_recordReportingEvents:(id)arg1 ;
-(void)_applicationWillTerminateNotification:(id)arg1 ;
-(id)_captureNonCatalogAggregatePlayActivityEventWithNonCatalogAggregateEndTime:(double)arg1 ;
-(void)_clearNonCatalogAggregatePlayActivityEventData;
-(void)acquirePendingPlayActivityEventsForStoreAccountID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldReportAggregateTimePlayActivityEvents;
-(void)setShouldReportAggregateTimePlayActivityEvents:(BOOL)arg1 ;
-(BOOL)shouldReportPlayActivityEvents;
@end

