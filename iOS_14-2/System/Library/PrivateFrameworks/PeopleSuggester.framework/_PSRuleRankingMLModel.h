/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@class MLModel, NSDictionary, MLModelConfiguration, NSString;

@interface _PSRuleRankingMLModel : NSObject {

	BOOL _isAdaptedModel;
	BOOL _isAdaptedMLModelOK;
	double _scoreThreshold;
	MLModel* _mlModel;
	NSDictionary* _metadata;
	NSDictionary* _psConfigForAdaptableModel;
	MLModelConfiguration* _adaptableModelConfiguration;
	NSString* _adaptedModelRecipeVersion;

}

@property (retain) MLModel * mlModel;                                                         //@synthesize mlModel=_mlModel - In the implementation block
@property (retain) NSDictionary * metadata;                                                   //@synthesize metadata=_metadata - In the implementation block
@property (assign) BOOL isAdaptedModel;                                                       //@synthesize isAdaptedModel=_isAdaptedModel - In the implementation block
@property (retain) NSDictionary * psConfigForAdaptableModel;                                  //@synthesize psConfigForAdaptableModel=_psConfigForAdaptableModel - In the implementation block
@property (nonatomic,retain) MLModelConfiguration * adaptableModelConfiguration;              //@synthesize adaptableModelConfiguration=_adaptableModelConfiguration - In the implementation block
@property (assign,nonatomic) BOOL isAdaptedMLModelOK;                                         //@synthesize isAdaptedMLModelOK=_isAdaptedMLModelOK - In the implementation block
@property (retain) NSString * adaptedModelRecipeVersion;                                      //@synthesize adaptedModelRecipeVersion=_adaptedModelRecipeVersion - In the implementation block
@property (assign) double scoreThreshold;                                                     //@synthesize scoreThreshold=_scoreThreshold - In the implementation block
-(BOOL)isAdaptedModel;
-(void)setAdaptedModelRecipeVersion:(NSString *)arg1 ;
-(id)giveModelDescription;
-(void)setPsConfigForAdaptableModel:(NSDictionary *)arg1 ;
-(void)loadDefaultRuleMinerMLModel;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setScoreThreshold:(double)arg1 ;
-(NSDictionary *)psConfigForAdaptableModel;
-(void)setAdaptableModelConfiguration:(MLModelConfiguration *)arg1 ;
-(void)setMlModel:(MLModel *)arg1 ;
-(double)scoreThreshold;
-(id)extractAdaptedModelRecipeID;
-(id)initWithAdaptableModelConfig:(id)arg1 isAdaptedMLModelOK:(BOOL)arg2 scoreThreshold:(double)arg3 ;
-(id)getAdaptedModelVersion;
-(void)setIsAdaptedMLModelOK:(BOOL)arg1 ;
-(BOOL)isAdaptedModelCreated;
-(id)initWithMLModel:(id)arg1 scoreThreshold:(double)arg2 isAdaptedModel:(BOOL)arg3 psConfigForAdaptableModel:(id)arg4 isAdaptedMLModelOK:(BOOL)arg5 ;
-(MLModelConfiguration *)adaptableModelConfiguration;
-(NSString *)adaptedModelRecipeVersion;
-(MLModel *)mlModel;
-(id)rankRules:(id)arg1 contextItems:(id)arg2 ;
-(NSDictionary *)metadata;
-(void)setIsAdaptedModel:(BOOL)arg1 ;
-(BOOL)isAdaptedModelUsed;
-(BOOL)isAdaptedMLModelOK;
@end

