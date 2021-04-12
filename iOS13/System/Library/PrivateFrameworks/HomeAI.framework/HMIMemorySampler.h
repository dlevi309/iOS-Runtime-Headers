/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMFTimer, MovingAverage, NSString;

@interface HMIMemorySampler : HMFObject <HMFTimerDelegate, HMFLogging> {

	long long _highWaterMark;
	HMFTimer* _tick;
	MovingAverage* _average;

}

@property (readonly) HMFTimer * tick;                               //@synthesize tick=_tick - In the implementation block
@property (readonly) MovingAverage * average;                       //@synthesize average=_average - In the implementation block
@property (assign) long long highWaterMark;                         //@synthesize highWaterMark=_highWaterMark - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)logCategory;
-(id)init;
-(void)stop;
-(void)start;
-(void)timerDidFire:(id)arg1 ;
-(MovingAverage *)average;
-(void)setHighWaterMark:(long long)arg1 ;
-(long long)highWaterMark;
-(HMFTimer *)tick;
@end

