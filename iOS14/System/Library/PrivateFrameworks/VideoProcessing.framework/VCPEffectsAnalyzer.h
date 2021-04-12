/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@interface VCPEffectsAnalyzer : NSObject {

	BOOL _hasFaceOrPet;

}
+(BOOL)isAutoLoopFramworkAvailable;
+(BOOL)usePHAssetScene;
+(id)gatingResultKeyToIndex;
+(id)getResultIndex:(id)arg1 ;
+(id)gatingTypeKeys;
-(id)initWithFlagHasFaceOrPet:(BOOL)arg1 ;
-(int)analyzeAsset:(id)arg1 onDemand:(BOOL)arg2 cancel:(/*^block*/id)arg3 statsFlags:(unsigned long long*)arg4 results:(id*)arg5 ;
-(id)initWithAnalysisResults:(id)arg1 ;
-(int)enumerateMatchingScenesOfAsset:(id)arg1 forLongExposureUsingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)generateStatsToBeCollectedFrom:(id)arg1 ;
-(BOOL)reportLivePhotoEffectAnalysisResults:(id)arg1 ;
-(id)performanSceneClassificationOfImageFileAtURL:(id)arg1 ;
-(id)matchingNodeForSceneClassification:(id)arg1 inSceneNames:(id)arg2 ;
@end

