/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol SVVideoImpressionTracking <NSObject>
@property (setter=uponThresholdImpression:,nonatomic,copy) id thresholdImpressionBlock; 
@property (setter=uponQuartileImpression:,nonatomic,copy) id quartileImpressionBlock; 
@property (getter=hasPassedImpressionThreshold,nonatomic,readonly) BOOL passedImpressionThreshold; 
@property (nonatomic,readonly) double impressionThreshold; 
@property (nonatomic,readonly) unsigned long long quartile; 
@required
-(double)impressionThreshold;
-(unsigned long long)quartile;
-(void)uponQuartileImpression:(/*^block*/id)arg1;
-(void)uponThresholdImpression:(/*^block*/id)arg1;
-(BOOL)hasPassedImpressionThreshold;
-(id)thresholdImpressionBlock;
-(id)quartileImpressionBlock;

@end

