/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCPlaybackEngineEventConsumer.h>

@protocol MPCPlaybackEngineEventStreamSubscription;
@class NSMutableArray, ICPlayActivityController, NSString;

@interface MPCPlayActivityFeedEventConsumer : NSObject <MPCPlaybackEngineEventConsumer> {

	id<MPCPlaybackEngineEventStreamSubscription> _subscription;
	NSMutableArray* _radioPlayActivityEvents;
	ICPlayActivityController* _playActivityController;

}

@property (nonatomic,readonly) id<MPCPlaybackEngineEventStreamSubscription> subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,readonly) NSMutableArray * radioPlayActivityEvents;                               //@synthesize radioPlayActivityEvents=_radioPlayActivityEvents - In the implementation block
@property (nonatomic,readonly) ICPlayActivityController * playActivityController;                      //@synthesize playActivityController=_playActivityController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(id)init;
-(ICPlayActivityController *)playActivityController;
-(id<MPCPlaybackEngineEventStreamSubscription>)subscription;
-(void)subscribeToEventStream:(id)arg1 ;
-(void)unsubscribeFromEventStream:(id)arg1 ;
-(BOOL)_handleItemResumeEvent:(id)arg1 cursor:(id)arg2 ;
-(BOOL)_handleItemPositionJumpEvent:(id)arg1 cursor:(id)arg2 ;
-(BOOL)_handleItemPauseEvent:(id)arg1 cursor:(id)arg2 ;
-(BOOL)_handleItemEndEvent:(id)arg1 cursor:(id)arg2 ;
-(BOOL)_handleItemMetadataPingEvent:(id)arg1 cursor:(id)arg2 ;
-(void)_updatePAFEvent:(id)arg1 withItemBeginEvent:(id)arg2 containerBeginPayload:(id)arg3 cursor:(id)arg4 ;
-(void)_updatePAFEvent:(id)arg1 withQueueAddEvent:(id)arg2 queueSectionIdentifier:(id)arg3 cursor:(id)arg4 ;
-(void)_updatePAFEvent:(id)arg1 withDeviceInfoFromCursor:(id)arg2 ;
-(double)_getStartTimeForMostRecentPlaybackStart:(id)arg1 withItemBeginEvent:(id)arg2 cursor:(id)arg3 ;
-(void)_clampTimeValuesForPAFEvent:(id)arg1 withDuration:(double)arg2 ;
-(BOOL)_finalizePAFEvents:(id)arg1 ;
-(id)_findRecentPlaybackStartFromTypes:(id)arg1 matchingPayload:(id)arg2 cursor:(id)arg3 ;
-(id)_generateAggregateNoncatalogEndEventForCursor:(id)arg1 ;
-(void)_updatePAFEvent:(id)arg1 withAccountIdentifier:(id)arg2 cursor:(id)arg3 ;
-(NSMutableArray *)radioPlayActivityEvents;
@end

