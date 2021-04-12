/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MPCReportingController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, ICPlayActivityController;

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
	BOOL _shouldReportPlayActivityEvents;
	ICPlayActivityController* _playActivityController;

}

@property (nonatomic,readonly) ICPlayActivityController * playActivityController;              //@synthesize playActivityController=_playActivityController - In the implementation block
@property (assign,nonatomic) BOOL shouldReportPlayActivityEvents;                              //@synthesize shouldReportPlayActivityEvents=_shouldReportPlayActivityEvents - In the implementation block
-(id)init;
-(id)initWithWritingStyle:(unsigned long long)arg1 ;
-(ICPlayActivityController *)playActivityController;
-(void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)setShouldReportPlayActivityEvents:(BOOL)arg1 ;
-(void)_recordReportingEvents:(id)arg1 ;
-(void)_applicationWillTerminateNotification:(id)arg1 ;
-(id)_captureNonCatalogAggregatePlayActivityEventWithNonCatalogAggregateEndTime:(double)arg1 ;
-(void)_clearNonCatalogAggregatePlayActivityEventData;
-(void)acquirePendingPlayActivityEventsForStoreAccountID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldReportPlayActivityEvents;
@end

