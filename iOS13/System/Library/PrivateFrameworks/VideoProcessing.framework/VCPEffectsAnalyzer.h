/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@interface VCPEffectsAnalyzer : NSObject {

	BOOL _hasFace;

}
+(BOOL)isAutoLoopFramworkAvailable;
+(BOOL)usePHAssetScene;
+(id)gatingResultKeyToIndex;
+(id)getResultIndex:(id)arg1 ;
+(id)gatingTypeKeys;
-(int)enumerateMatchingScenesOfAsset:(id)arg1 forLongExposureUsingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)generateStatsToBeCollectedFrom:(id)arg1 ;
-(BOOL)reportLivePhotoEffectAnalysisResults:(id)arg1 ;
-(id)performanSceneClassificationOfImageFileAtURL:(id)arg1 ;
-(id)matchingNodeForSceneClassification:(id)arg1 inSceneNames:(id)arg2 ;
-(id)initWithAnalysisResults:(id)arg1 ;
-(id)initWithFlagHasFace:(BOOL)arg1 ;
-(int)analyzeAsset:(id)arg1 onDemand:(BOOL)arg2 cancel:(/*^block*/id)arg3 statsFlags:(unsigned long long*)arg4 results:(id*)arg5 ;
@end

