/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@interface SNMLModelFactory : NSObject
+(id)sharedLockedVGGishFeatureExtractor;
+(id)sharedLockedVGGishNeuralNetDetectorHeadWithSoundIdentifier:(id)arg1 ;
+(id)sharedLockedSoundPrint100kFeatureExtractor;
+(id)sharedLockedSoundPrint100kNeuralNetDetectorHeadWithSoundIdentifier:(id)arg1 ;
+(id)sharedLockedModelWithKey:(id)arg1 orCreateNewModelWithWithFunction:(/*^block*/id)arg2 ;
+(id)createModelOfClass:(Class)arg1 ;
+(Class)vggishFeatureExtractorModelClass;
+(id)sharedLockedModelOfClass:(Class)arg1 ;
+(Class)vggishModelClassForSoundIdentifier:(id)arg1 ;
+(Class)soundPrint100kFeatureExtractorModelClass;
+(Class)soundprint100kModelClassForSoundIdentifier:(id)arg1 ;
+(id)createVGGishFeatureExtractor;
+(id)createVGGishNeuralNetDetectorHeadWithSoundIdentifier:(id)arg1 ;
+(id)createSoundPrint100kFeatureExtractor;
+(id)createSoundPrint100kNeuralNetDetectorHeadWithSoundIdentifier:(id)arg1 ;
@end

