/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)logCategory;
+(id)sharedInstance;
-(HMFTimer *)tick;
-(void)timerDidFire:(id)arg1 ;
-(MovingAverage *)average;
-(id)init;
-(void)start;
-(void)stop;
-(void)setHighWaterMark:(long long)arg1 ;
-(long long)highWaterMark;
@end

