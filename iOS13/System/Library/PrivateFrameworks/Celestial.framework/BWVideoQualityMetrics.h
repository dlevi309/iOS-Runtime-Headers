/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@interface BWVideoQualityMetrics : NSObject {

	long long _totalLux;
	int _frames;

}

@property (nonatomic,readonly) unsigned qualityScoringVersion; 
+(void)initialize;
+(id)filterMetadata:(id)arg1 ;
+(double)_luxThreshold;
+(double)_luxTransition;
-(void)reset;
-(void)processMetadata:(id)arg1 ;
-(double)computeQualityScore;
-(unsigned)qualityScoringVersion;
-(double)_computeLuxScore;
@end

