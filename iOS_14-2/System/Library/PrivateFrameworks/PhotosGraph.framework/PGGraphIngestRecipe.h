/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PGGraphIngestRecipeParameters *)parameters;
-(NSArray *)momentsToIngest;
-(NSArray *)postProcessors;
-(NSArray *)highligthsToIngest;
-(id)defaultPostProcessors;
-(id)_momentsForLibraryAnalysisWithFetchOptions:(id)arg1 ;
-(NSArray *)preProcessors;
-(id)initWithManager:(id)arg1 parameters:(id)arg2 ;
-(id)defaultPreProcessors;
-(PGManager *)manager;
-(id)_highlightsForLibraryAnalysisWithFetchOptions:(id)arg1 ;
@end

