/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSArray *)samples;
-(void)setSamples:(NSArray *)arg1 ;
-(NSArray *)thresholds;
-(void)setThresholds:(NSArray *)arg1 ;
-(unsigned long long)_thresholdAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_indexOfThresholdGreaterThanOrEqualToEstimate:(unsigned long long)arg1 ;
-(void)didCalculateTimeEstimate:(unsigned long long)arg1 atDate:(id)arg2 associatedObject:(id)arg3 ;
-(void)estimatesDidResolveAtDate:(id)arg1 block:(/*^block*/id)arg2 ;
@end

