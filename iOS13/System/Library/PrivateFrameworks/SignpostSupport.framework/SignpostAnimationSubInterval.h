/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostSupportTimeInterval.h>

@class NSString;

@interface SignpostAnimationSubInterval : NSObject <SignpostSupportTimeInterval> {

	unsigned long long _startMachContinuousTime;
	unsigned long long _endMachContinuousTime;
	double _timebaseRatio;

}

@property (nonatomic,readonly) double timebaseRatio;                                    //@synthesize timebaseRatio=_timebaseRatio - In the implementation block
@property (nonatomic,readonly) unsigned long long startMachContinuousTime;              //@synthesize startMachContinuousTime=_startMachContinuousTime - In the implementation block
@property (nonatomic,readonly) unsigned long long endMachContinuousTime;                //@synthesize endMachContinuousTime=_endMachContinuousTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)durationSeconds;
-(double)durationMs;
-(unsigned long long)durationMachContinuousTime;
-(double)timebaseRatio;
-(unsigned long long)startMachContinuousTime;
-(unsigned long long)endMachContinuousTime;
-(unsigned long long)durationNanoseconds;
-(unsigned long long)startNanoseconds;
-(unsigned long long)endNanoseconds;
-(double)startSeconds;
-(double)endSeconds;
-(double)startMs;
-(double)endMs;
-(id)initWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2 timebaseRatio:(double)arg3 ;
-(id)initWithInterval:(id)arg1 ;
@end

