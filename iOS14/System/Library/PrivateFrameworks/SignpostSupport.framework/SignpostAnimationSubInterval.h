/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithInterval:(id)arg1 ;
-(double)durationMs;
-(double)endMs;
-(unsigned long long)durationNanoseconds;
-(float)durationSeconds;
-(double)startMs;
-(unsigned long long)durationMachContinuousTime;
-(unsigned long long)startMachContinuousTime;
-(unsigned long long)endMachContinuousTime;
-(double)timebaseRatio;
-(unsigned long long)startNanoseconds;
-(unsigned long long)endNanoseconds;
-(double)startSeconds;
-(double)endSeconds;
-(id)initWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2 timebaseRatio:(double)arg3 ;
@end

