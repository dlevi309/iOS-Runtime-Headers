/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@interface BWVideoQualityMetrics : NSObject {

	long long _totalLux;
	int _frames;

}

@property (nonatomic,readonly) unsigned qualityScoringVersion; 
+(void)initialize;
+(double)_luxThreshold;
+(double)_luxTransition;
+(id)filterMetadata:(id)arg1 ;
-(double)_computeLuxScore;
-(void)reset;
-(void)processMetadata:(id)arg1 ;
-(double)computeQualityScore;
-(unsigned)qualityScoringVersion;
@end

