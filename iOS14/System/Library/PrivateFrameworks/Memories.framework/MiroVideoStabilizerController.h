/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories.VideoStabilizerTestable.h>

@class Project;

@interface MiroVideoStabilizerController : NSObject <Memories.VideoStabilizerTestable> {

	Project* _project;

}

@property (nonatomic,retain) Project * project;              //@synthesize project=_project - In the implementation block
+(void)load;
+(id)stabilizerFactory;
+(BOOL)testStabilizationAgainWith:(id)arg1 ;
-(Project *)project;
-(void)setProject:(Project *)arg1 ;
-(BOOL)canGenerateTestMADRecipesForAssets:(id)arg1 ;
-(BOOL)test_inputMADRecipeToPVTimedStabilizationConfigForAssets:(id)arg1 ;
-(BOOL)test_cleanApertureRectBasisMatchesPhotosForAssets:(id)arg1 ;
-(BOOL)test_applyHomographyTransformForAssets:(id)arg1 ;
-(void)writeStabilizationDataMovie:(id)arg1 timedStabConfigs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)computeInertiaCamL1Stabilization;
-(id)requestMediaAnalysisStabilizationService;
-(void)writeStabilizationDataMoviesToFolder:(id)arg1 assetIDMetadataTimedObjects:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)timedMetadataFromFrameInstructions:(id)arg1 withClip:(id)arg2 ;
-(id)requestStablizationFromInertiaCam:(id)arg1 assetFPS:(float)arg2 cropFraction:(float)arg3 clip:(id)arg4 ;
-(id)candidateAssetsforStabilizationFromProject;
-(id)candidateAssetsFromAssetCollection:(id)arg1 ;
-(id)generateTestMADRecipesForAssets:(id)arg1 ;
-(id)proVideoTimedObjectMapFromRecipes:(id)arg1 ;
-(id)fetchAndFormatStabilizationMetadata;
-(BOOL)test_deNormalizedCropRect;
@end

