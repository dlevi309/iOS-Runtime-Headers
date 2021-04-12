/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol OS_dispatch_queue;
@class NSObject, TURepeatingActor;

@interface TUSoundPlayer : NSObject {

	unsigned _soundID;
	NSObject*<OS_dispatch_queue> _queue;
	TURepeatingActor* _repeatingActor;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) TURepeatingActor * repeatingActor;               //@synthesize repeatingActor=_repeatingActor - In the implementation block
@property (assign,nonatomic) unsigned soundID;                                  //@synthesize soundID=_soundID - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isPlaying;
-(unsigned)soundID;
-(void)stopPlaying;
-(void)playSound:(unsigned)arg1 ;
-(void)playSound:(unsigned)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 ;
-(void)playSound:(unsigned)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)setSoundID:(unsigned)arg1 ;
-(TURepeatingActor *)repeatingActor;
-(void)playSoundIndefinitely:(unsigned)arg1 pauseDurationBetweenIterations:(double)arg2 ;
@end

