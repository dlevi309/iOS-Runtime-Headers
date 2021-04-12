/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BorealisServerSpeakerStateHysteresisNotifier : NSObject {

	BOOL _speakerStateListeningEnabled;
	BOOL _lastStateSent;
	float _hysteresisDurationSeconds;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _notificationBlock;
	long long _generation;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) float hysteresisDurationSeconds;                 //@synthesize hysteresisDurationSeconds=_hysteresisDurationSeconds - In the implementation block
@property (assign,nonatomic) BOOL speakerStateListeningEnabled;               //@synthesize speakerStateListeningEnabled=_speakerStateListeningEnabled - In the implementation block
@property (nonatomic,copy) id notificationBlock;                              //@synthesize notificationBlock=_notificationBlock - In the implementation block
@property (assign,nonatomic) BOOL lastStateSent;                              //@synthesize lastStateSent=_lastStateSent - In the implementation block
@property (assign,nonatomic) long long generation;                            //@synthesize generation=_generation - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(long long)generation;
-(void)setGeneration:(long long)arg1 ;
-(id)initWithSerialQueue:(id)arg1 hysteresisDurationSeconds:(float)arg2 notificationBlock:(/*^block*/id)arg3 ;
-(void)callNotificationBlock:(BOOL)arg1 ;
-(void)stateChanged:(BOOL)arg1 ;
-(void)sendState;
-(float)hysteresisDurationSeconds;
-(void)setHysteresisDurationSeconds:(float)arg1 ;
-(BOOL)speakerStateListeningEnabled;
-(void)setSpeakerStateListeningEnabled:(BOOL)arg1 ;
-(id)notificationBlock;
-(void)setNotificationBlock:(id)arg1 ;
-(BOOL)lastStateSent;
-(void)setLastStateSent:(BOOL)arg1 ;
@end

