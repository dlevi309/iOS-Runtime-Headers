/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isPlaying;
-(id)init;
-(void)playSound:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)stopPlaying;
-(TURepeatingActor *)repeatingActor;
-(void)playSound:(unsigned)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 ;
-(void)playSound:(unsigned)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)playSoundIndefinitely:(unsigned)arg1 pauseDurationBetweenIterations:(double)arg2 ;
-(void)setSoundID:(unsigned)arg1 ;
-(unsigned)soundID;
@end

