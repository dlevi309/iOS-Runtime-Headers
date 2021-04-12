/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class NSNumber, NSMutableDictionary;

@interface PRSModelManager : NSObject {

	BOOL _disablePolicy;
	NSNumber* _modelVersion;
	NSNumber* _shadowVersion;
	NSMutableDictionary* _shadowModels;
	NSMutableDictionary* _models;
	unsigned long long _activeCount;

}

@property (nonatomic,retain) NSNumber * modelVersion;                         //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,retain) NSNumber * shadowVersion;                        //@synthesize shadowVersion=_shadowVersion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shadowModels;              //@synthesize shadowModels=_shadowModels - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * models;                    //@synthesize models=_models - In the implementation block
@property (assign,nonatomic) unsigned long long activeCount;                  //@synthesize activeCount=_activeCount - In the implementation block
@property (assign,nonatomic) BOOL disablePolicy;                              //@synthesize disablePolicy=_disablePolicy - In the implementation block
+(id)sharedModelManager;
+(void)cannedInfoForType:(unsigned long long)arg1 directivesPath:(id*)arg2 modelName:(id*)arg3 ;
+(id)directivesFromFilePath:(id)arg1 ;
+(void)pathsFor:(unsigned long long)arg1 withParentPath:(id)arg2 modelPath:(id*)arg3 directivesPath:(id*)arg4 ;
+(void)loadModelWithURL:(id)arg1 type:(unsigned long long)arg2 directivesPath:(id)arg3 intoModelDict:(id)arg4 error:(id*)arg5 ;
+(BOOL)loadModelsWithDirectory:(id)arg1 intoModelDict:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSMutableDictionary *)models;
-(void)setModels:(NSMutableDictionary *)arg1 ;
-(void)activate;
-(void)deactivate;
-(void)setModelVersion:(NSNumber *)arg1 ;
-(NSNumber *)modelVersion;
-(unsigned long long)activeCount;
-(void)setActiveCount:(unsigned long long)arg1 ;
-(id)getL2ModelVersionForClientBundle:(id)arg1 ;
-(void)setShadowModels:(NSMutableDictionary *)arg1 ;
-(void)updateModelsAccordingToHierarchy:(id)arg1 updateEnabled:(BOOL)arg2 disablePendingUpdates:(BOOL)arg3 ;
-(void)updateModelsAccordingToHierarchy;
-(void)loadCannedModelWithType:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)loadIfNecessaryModelOfResourceType:(unsigned long long)arg1 nowTime:(double)arg2 intoModelDict:(id)arg3 currentVersion:(id)arg4 ;
-(void)setDisablePolicy:(BOOL)arg1 ;
-(NSMutableDictionary *)shadowModels;
-(NSNumber *)shadowVersion;
-(void)setShadowVersion:(NSNumber *)arg1 ;
-(void)loadCannedModels;
-(float*)computeScoresForFeatures:(id)arg1 withBundleFeatures:(id)arg2 serverBundleFeatures:(id)arg3 usingModelContext:(id)arg4 qos:(unsigned)arg5 shouldCancel:(BOOL*)arg6 filterBundle:(id)arg7 ;
-(void)triggerUpdate;
-(float*)computeL2ScoresForVectors:(id)arg1 secondVector:(id)arg2 withServerFeatures:(id)arg3 withBundleFeatures:(id)arg4 experimentalWeight1:(double)arg5 experimentalWeight2:(double)arg6 forShadow:(BOOL)arg7 shouldCancel:(BOOL*)arg8 clientBundle:(id)arg9 hasMail:(BOOL)arg10 ;
-(double)testL2WithData:(id)arg1 experimental:(BOOL)arg2 ;
-(BOOL)disablePolicy;
@end

