/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class NSString, SSTrialManager, NSMutableDictionary, NSUserDefaults;

@interface PRSModelManager : NSObject {

	BOOL _disablePolicy;
	NSString* _modelVersion;
	SSTrialManager* _trialModelManager;
	NSString* _experimentId;
	NSString* _modelType;
	NSMutableDictionary* _models;
	unsigned long long _activeCount;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,retain) NSString * modelVersion;                         //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,retain) SSTrialManager * trialModelManager;              //@synthesize trialModelManager=_trialModelManager - In the implementation block
@property (nonatomic,retain) NSString * experimentId;                         //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,retain) NSString * modelType;                            //@synthesize modelType=_modelType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * models;                    //@synthesize models=_models - In the implementation block
@property (assign,nonatomic) unsigned long long activeCount;                  //@synthesize activeCount=_activeCount - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                   //@synthesize userDefaults=_userDefaults - In the implementation block
@property (assign,nonatomic) BOOL disablePolicy;                              //@synthesize disablePolicy=_disablePolicy - In the implementation block
+(BOOL)loadModelsWithDirectory:(id)arg1 intoModelDict:(id)arg2 ;
+(id)directivesFromFilePath:(id)arg1 ;
+(void)loadModelWithURL:(id)arg1 type:(unsigned long long)arg2 directivesPath:(id)arg3 intoModelDict:(id)arg4 error:(id*)arg5 ;
+(void)cannedInfoForType:(unsigned long long)arg1 directivesPath:(id*)arg2 modelName:(id*)arg3 ;
+(id)sharedModelManager;
+(void)pathsFor:(unsigned long long)arg1 withParentPath:(id)arg2 modelPath:(id*)arg3 directivesPath:(id*)arg4 ;
-(NSString *)modelType;
-(void)setExperimentId:(NSString *)arg1 ;
-(float*)computeScoresForFeatures:(id)arg1 withBundleFeatures:(id)arg2 serverBundleFeatures:(id)arg3 usingModelContext:(id)arg4 qos:(unsigned)arg5 shouldCancel:(BOOL*)arg6 filterBundle:(id)arg7 ;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSString *)modelVersion;
-(id)init;
-(BOOL)disablePolicy;
-(void)setModelVersion:(NSString *)arg1 ;
-(float*)computeL2ScoresForVectors:(id)arg1 secondVector:(id)arg2 withServerFeatures:(id)arg3 withBundleFeatures:(id)arg4 experimentalWeight1:(double)arg5 experimentalWeight2:(double)arg6 shouldCancel:(BOOL*)arg7 clientBundle:(id)arg8 hasMail:(BOOL)arg9 ;
-(void)setDisablePolicy:(BOOL)arg1 ;
-(BOOL)loadCannedModels;
-(void)setActiveCount:(unsigned long long)arg1 ;
-(void)deactivate;
-(NSUserDefaults *)userDefaults;
-(void)activate;
-(unsigned long long)activeCount;
-(NSMutableDictionary *)models;
-(void)triggerUpdate;
-(BOOL)loadModelsFromTrialWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)experimentId;
-(void)setTrialModelManager:(SSTrialManager *)arg1 ;
-(BOOL)loadModels;
-(double)testL2WithData:(id)arg1 experimental:(BOOL)arg2 ;
-(void)updateModelsAccordingToHierarchy:(id)arg1 updateEnabled:(BOOL)arg2 disablePendingUpdates:(BOOL)arg3 ;
-(id)getL2ModelVersionForClientBundle:(id)arg1 ;
-(void)setModels:(NSMutableDictionary *)arg1 ;
-(SSTrialManager *)trialModelManager;
-(void)setModelType:(NSString *)arg1 ;
-(void)loadCannedModelWithType:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)updateModelsAccordingToHierarchy;
@end

