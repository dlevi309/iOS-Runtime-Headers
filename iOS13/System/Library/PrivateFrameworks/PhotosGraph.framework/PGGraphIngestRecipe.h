/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PGManager, NSArray, PGGraphIngestRecipeParameters;

@interface PGGraphIngestRecipe : NSObject {

	PGManager* _manager;
	NSArray* _momentsToIngest;
	NSArray* _highligthsToIngest;
	NSArray* _preProcessors;
	NSArray* _postProcessors;
	PGGraphIngestRecipeParameters* _parameters;

}

@property (nonatomic,readonly) PGGraphIngestRecipeParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) PGManager * manager;                                     //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSArray * momentsToIngest;                               //@synthesize momentsToIngest=_momentsToIngest - In the implementation block
@property (nonatomic,readonly) NSArray * highligthsToIngest;                            //@synthesize highligthsToIngest=_highligthsToIngest - In the implementation block
@property (nonatomic,readonly) NSArray * preProcessors;                                 //@synthesize preProcessors=_preProcessors - In the implementation block
@property (nonatomic,readonly) NSArray * postProcessors;                                //@synthesize postProcessors=_postProcessors - In the implementation block
-(PGManager *)manager;
-(PGGraphIngestRecipeParameters *)parameters;
-(NSArray *)preProcessors;
-(NSArray *)postProcessors;
-(NSArray *)momentsToIngest;
-(NSArray *)highligthsToIngest;
-(id)initWithManager:(id)arg1 parameters:(id)arg2 ;
-(id)_momentsForLibraryAnalysisWithFetchOptions:(id)arg1 ;
-(id)_highlightsForLibraryAnalysisWithFetchOptions:(id)arg1 ;
-(id)defaultPreProcessors;
-(id)defaultPostProcessors;
@end

