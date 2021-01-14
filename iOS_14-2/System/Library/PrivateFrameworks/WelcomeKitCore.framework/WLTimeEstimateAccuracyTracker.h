/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@class NSArray;

@interface WLTimeEstimateAccuracyTracker : NSObject {

	unsigned long long _thresholdBelowLastSample;
	NSArray* _thresholds;
	NSArray* _samples;

}

@property (nonatomic,retain) NSArray * thresholds;              //@synthesize thresholds=_thresholds - In the implementation block
@property (nonatomic,retain) NSArray * samples;                 //@synthesize samples=_samples - In the implementation block
-(NSArray *)samples;
-(void)setSamples:(NSArray *)arg1 ;
-(id)init;
-(NSArray *)thresholds;
-(void)setThresholds:(NSArray *)arg1 ;
-(unsigned long long)_thresholdAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_indexOfThresholdGreaterThanOrEqualToEstimate:(unsigned long long)arg1 ;
-(void)didCalculateTimeEstimate:(unsigned long long)arg1 atDate:(id)arg2 associatedObject:(id)arg3 ;
-(void)estimatesDidResolveAtDate:(id)arg1 block:(/*^block*/id)arg2 ;
@end

