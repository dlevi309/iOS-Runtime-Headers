/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class NSString, NSArray, MTMediaTimeTracker;

@interface MTPAFActivity : NSObject {

	BOOL _stopped;
	long long _activityType;
	unsigned long long _startPosition;
	unsigned long long _lastPosition;
	NSString* _startTriggerType;
	NSString* _startReason;
	NSArray* _startEventData;
	NSString* _stopTriggerType;
	NSString* _stopReason;
	NSArray* _stopEventData;
	NSArray* _itemActivities;
	MTMediaTimeTracker* _timeTracker;

}

@property (assign,nonatomic) long long activityType;                        //@synthesize activityType=_activityType - In the implementation block
@property (assign,nonatomic) unsigned long long startPosition;              //@synthesize startPosition=_startPosition - In the implementation block
@property (assign,nonatomic) unsigned long long lastPosition;               //@synthesize lastPosition=_lastPosition - In the implementation block
@property (assign,nonatomic) BOOL stopped;                                  //@synthesize stopped=_stopped - In the implementation block
@property (nonatomic,retain) NSString * startTriggerType;                   //@synthesize startTriggerType=_startTriggerType - In the implementation block
@property (nonatomic,retain) NSString * startReason;                        //@synthesize startReason=_startReason - In the implementation block
@property (nonatomic,retain) NSArray * startEventData;                      //@synthesize startEventData=_startEventData - In the implementation block
@property (nonatomic,retain) NSString * stopTriggerType;                    //@synthesize stopTriggerType=_stopTriggerType - In the implementation block
@property (nonatomic,retain) NSString * stopReason;                         //@synthesize stopReason=_stopReason - In the implementation block
@property (nonatomic,retain) NSArray * stopEventData;                       //@synthesize stopEventData=_stopEventData - In the implementation block
@property (nonatomic,copy) NSArray * itemActivities;                        //@synthesize itemActivities=_itemActivities - In the implementation block
@property (nonatomic,retain) MTMediaTimeTracker * timeTracker;              //@synthesize timeTracker=_timeTracker - In the implementation block
-(void)setActivityType:(long long)arg1 ;
-(long long)activityType;
-(BOOL)stopped;
-(void)setStopped:(BOOL)arg1 ;
-(unsigned long long)startPosition;
-(void)setStartPosition:(unsigned long long)arg1 ;
-(unsigned long long)lastPosition;
-(void)setLastPosition:(unsigned long long)arg1 ;
-(void)setStartTriggerType:(NSString *)arg1 ;
-(void)setStartReason:(NSString *)arg1 ;
-(void)setStartEventData:(NSArray *)arg1 ;
-(void)setTimeTracker:(MTMediaTimeTracker *)arg1 ;
-(NSArray *)itemActivities;
-(void)setItemActivities:(NSArray *)arg1 ;
-(void)updateItemActivities:(id)arg1 ;
-(MTMediaTimeTracker *)timeTracker;
-(void)setStopTriggerType:(NSString *)arg1 ;
-(void)setStopReason:(NSString *)arg1 ;
-(void)setStopEventData:(NSArray *)arg1 ;
-(NSString *)startTriggerType;
-(NSString *)startReason;
-(NSArray *)startEventData;
-(NSString *)stopTriggerType;
-(NSString *)stopReason;
-(NSArray *)stopEventData;
-(void)startItemActivityIfPossible:(id)arg1 ;
-(void)stopItemActivityIfPossible:(id)arg1 ;
-(id)initWithType:(long long)arg1 playbackRate:(float)arg2 atMilliseconds:(unsigned long long)arg3 triggerType:(id)arg4 reason:(id)arg5 eventData:(id)arg6 ;
-(void)addItemsFromPlaylist:(id)arg1 pafKit:(id)arg2 ;
-(void)synchronizeAtMilliseconds:(unsigned long long)arg1 ;
-(void)stoppedAtMilliseconds:(unsigned long long)arg1 triggerType:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
@end
