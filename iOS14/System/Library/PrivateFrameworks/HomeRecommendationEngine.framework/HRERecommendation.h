/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
*/


@class NSMutableDictionary, HMHome, NSDictionary, HRETemplate, NSMutableSet, NSString, HMTrigger, NSSet, HMActionSet;

@interface HRERecommendation : NSObject {

	NSMutableDictionary* _configuration;
	HMHome* _home;
	double _rankingConfidenceScore;
	NSDictionary* _rankingConfig;
	NSDictionary* _adjustedRatings;

}

@property (nonatomic,retain) NSMutableDictionary * configuration;                                                            //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) HRETemplate * template; 
@property (assign,nonatomic,__weak) HMHome * home;                                                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableActions; 
@property (nonatomic,retain) NSDictionary * rankingConfig;                                                                   //@synthesize rankingConfig=_rankingConfig - In the implementation block
@property (nonatomic,retain) NSDictionary * adjustedRatings;                                                                 //@synthesize adjustedRatings=_adjustedRatings - In the implementation block
@property (assign,nonatomic) double rankingConfidenceScore;                                                                  //@synthesize rankingConfidenceScore=_rankingConfidenceScore - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * actionSetName; 
@property (nonatomic,readonly) NSString * actionsSummary; 
@property (nonatomic,readonly) NSString * longDescription; 
@property (nonatomic,readonly) id<HFIconDescriptor> iconDescriptor; 
@property (nonatomic,readonly) long long sortKey; 
@property (nonatomic,readonly) HMTrigger * trigger; 
@property (nonatomic,readonly) NSSet * actions; 
@property (nonatomic,readonly) HMActionSet * existingActionSet; 
@property (nonatomic,readonly) BOOL triggerExistsInHome; 
@property (nonatomic,readonly) BOOL requiresFMFDeviceToRun; 
@property (getter=isDerivedFromExistingConfiguration,nonatomic,readonly) BOOL derivedFromExistingConfiguration; 
+(id)highestRankInRecommendations:(id)arg1 ;
+(id)_identifiersAndValuesForActions:(id)arg1 ignoringTypes:(id)arg2 ;
+(id)_identifiersAndTypesForActions:(id)arg1 ;
-(HMTrigger *)trigger;
-(long long)sortKey;
-(NSSet *)actions;
-(HRETemplate *)template;
-(NSString *)uniqueIdentifier;
-(id)debugDescription;
-(BOOL)triggerExistsInHome;
-(HMActionSet *)existingActionSet;
-(NSString *)longDescription;
-(id)actionSetType;
-(id)description;
-(NSMutableDictionary *)configuration;
-(NSString *)actionSetName;
-(id<HFIconDescriptor>)iconDescriptor;
-(id)initWithHome:(id)arg1 ;
-(BOOL)requiresFMFDeviceToRun;
-(void)safeSetObject:(id)arg1 forKey:(id)arg2 ;
-(void)setHome:(HMHome *)arg1 ;
-(id)analyticsSource;
-(NSString *)title;
-(void)setConfiguration:(NSMutableDictionary *)arg1 ;
-(HMHome *)home;
-(double)rankingConfidenceScore;
-(id)createBuilderItemWithBuilderContext:(id)arg1 ;
-(BOOL)matchesTrigger:(id)arg1 ;
-(id)iconDescriptorWithServiceLikeItems:(id)arg1 ;
-(id)naturalLanguageTitleWithObjectsInContext:(id)arg1 options:(id)arg2 ;
-(NSMutableSet *)mutableActions;
-(void)setMutableActions:(NSMutableSet *)arg1 ;
-(id)servicesInEvents;
-(id)objectsInActions;
-(BOOL)containsMeaningfulChanges;
-(id)initWithConfiguration:(id)arg1 withHome:(id)arg2 ;
-(unsigned long long)recommendationSource;
-(NSDictionary *)rankingConfig;
-(void)setAdjustedRatings:(NSDictionary *)arg1 ;
-(BOOL)matchesTrigger:(id)arg1 allowingPredicateDifference:(BOOL)arg2 allowingVariance:(BOOL)arg3 ;
-(BOOL)actionsOrEventsInvolveObjects:(id)arg1 ;
-(void)calculateAdjustedAttributeRatings:(double)arg1 ;
-(NSString *)actionsSummary;
-(BOOL)isDerivedFromExistingConfiguration;
-(void)setRankingConfidenceScore:(double)arg1 ;
-(void)setRankingConfig:(NSDictionary *)arg1 ;
-(NSDictionary *)adjustedRatings;
@end

