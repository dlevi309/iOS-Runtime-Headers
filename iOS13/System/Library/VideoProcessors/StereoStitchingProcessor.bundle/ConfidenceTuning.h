/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@interface ConfidenceTuning : NSObject {

	float _minRange;
	float _maxRange;
	float _baselineDirectionX;
	float _baselineDirectionY;
	float _absoluteDiffThreshold;
	int _unreliableBorder;
	int _similarityRadius;
	float _similarityLambda;
	float _similarityWeightLuma;
	float _similarityForExtensionThresholdNarrowLuma;
	float _similarityForExtensionThresholdNarrowChroma;
	float _similarityForExtensionThresholdWideLuma;
	float _similarityForExtensionThresholdWideChroma;

}

@property (assign,nonatomic) float minRange;                                                 //@synthesize minRange=_minRange - In the implementation block
@property (assign,nonatomic) float maxRange;                                                 //@synthesize maxRange=_maxRange - In the implementation block
@property (assign,nonatomic) float baselineDirectionX;                                       //@synthesize baselineDirectionX=_baselineDirectionX - In the implementation block
@property (assign,nonatomic) float baselineDirectionY;                                       //@synthesize baselineDirectionY=_baselineDirectionY - In the implementation block
@property (assign,nonatomic) float absoluteDiffThreshold;                                    //@synthesize absoluteDiffThreshold=_absoluteDiffThreshold - In the implementation block
@property (assign,nonatomic) int unreliableBorder;                                           //@synthesize unreliableBorder=_unreliableBorder - In the implementation block
@property (assign,nonatomic) int similarityRadius;                                           //@synthesize similarityRadius=_similarityRadius - In the implementation block
@property (assign,nonatomic) float similarityLambda;                                         //@synthesize similarityLambda=_similarityLambda - In the implementation block
@property (assign,nonatomic) float similarityWeightLuma;                                     //@synthesize similarityWeightLuma=_similarityWeightLuma - In the implementation block
@property (assign,nonatomic) float similarityForExtensionThresholdNarrowLuma;                //@synthesize similarityForExtensionThresholdNarrowLuma=_similarityForExtensionThresholdNarrowLuma - In the implementation block
@property (assign,nonatomic) float similarityForExtensionThresholdNarrowChroma;              //@synthesize similarityForExtensionThresholdNarrowChroma=_similarityForExtensionThresholdNarrowChroma - In the implementation block
@property (assign,nonatomic) float similarityForExtensionThresholdWideLuma;                  //@synthesize similarityForExtensionThresholdWideLuma=_similarityForExtensionThresholdWideLuma - In the implementation block
@property (assign,nonatomic) float similarityForExtensionThresholdWideChroma;                //@synthesize similarityForExtensionThresholdWideChroma=_similarityForExtensionThresholdWideChroma - In the implementation block
-(float)maxRange;
-(void)setMaxRange:(float)arg1 ;
-(float)minRange;
-(void)setMinRange:(float)arg1 ;
-(float)baselineDirectionX;
-(void)setBaselineDirectionX:(float)arg1 ;
-(float)baselineDirectionY;
-(void)setBaselineDirectionY:(float)arg1 ;
-(float)absoluteDiffThreshold;
-(void)setAbsoluteDiffThreshold:(float)arg1 ;
-(int)unreliableBorder;
-(void)setUnreliableBorder:(int)arg1 ;
-(int)similarityRadius;
-(void)setSimilarityRadius:(int)arg1 ;
-(float)similarityLambda;
-(void)setSimilarityLambda:(float)arg1 ;
-(float)similarityWeightLuma;
-(void)setSimilarityWeightLuma:(float)arg1 ;
-(float)similarityForExtensionThresholdNarrowLuma;
-(void)setSimilarityForExtensionThresholdNarrowLuma:(float)arg1 ;
-(float)similarityForExtensionThresholdNarrowChroma;
-(void)setSimilarityForExtensionThresholdNarrowChroma:(float)arg1 ;
-(float)similarityForExtensionThresholdWideLuma;
-(void)setSimilarityForExtensionThresholdWideLuma:(float)arg1 ;
-(float)similarityForExtensionThresholdWideChroma;
-(void)setSimilarityForExtensionThresholdWideChroma:(float)arg1 ;
@end

