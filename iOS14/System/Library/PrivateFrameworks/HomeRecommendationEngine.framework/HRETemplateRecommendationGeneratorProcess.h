/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
*/

#import <HomeRecommendationEngine/HREStandardAsyncRecommendationGenerationProcess.h>

@class NSArray, NSSet;

@interface HRETemplateRecommendationGeneratorProcess : HREStandardAsyncRecommendationGenerationProcess {

	NSArray* _rooms;
	NSSet* _homeActionObjects;
	NSArray* _activeTemplates;

}

@property (nonatomic,retain) NSArray * rooms;                        //@synthesize rooms=_rooms - In the implementation block
@property (nonatomic,retain) NSSet * homeActionObjects;              //@synthesize homeActionObjects=_homeActionObjects - In the implementation block
@property (nonatomic,retain) NSArray * activeTemplates;              //@synthesize activeTemplates=_activeTemplates - In the implementation block
-(NSArray *)rooms;
-(void)setRooms:(NSArray *)arg1 ;
-(BOOL)shouldGenerateRecommendations;
-(id)generateRecommendations;
-(void)setHomeActionObjects:(NSSet *)arg1 ;
-(void)setActiveTemplates:(NSArray *)arg1 ;
-(NSArray *)activeTemplates;
-(id)recommendationsWithTemplate:(id)arg1 ;
-(NSSet *)homeActionObjects;
-(id)_initialRecommendationsForTemplate:(id)arg1 ;
-(BOOL)_actionObjects:(id)arg1 meetTypeCountRequirementInTemplate:(id)arg2 ;
-(id)_triggerForRecommendation:(id)arg1 fromTemplate:(id)arg2 withActionableObjects:(id)arg3 ;
-(id)_triggerInHome:(id)arg1 withSameConfigurationAsTrigger:(id)arg2 ;
-(id)_filterToAllowedObjects:(id)arg1 withSourceObjects:(id)arg2 withTrigger:(id)arg3 template:(id)arg4 ;
-(id)_existingActionSetInHome:(id)arg1 forRecommendation:(id)arg2 ;
-(id)_defineActionsForRecommendation:(id)arg1 withActionMap:(id)arg2 withActionableObjects:(id)arg3 ;
-(id)_filterRecommendations:(id)arg1 fromTemplate:(id)arg2 ;
-(id)_createInitialRecommendations:(id)arg1 withBaseConfiguration:(id)arg2 ;
-(id)characteristicActionsForObject:(id)arg1 actionMap:(id)arg2 ;
-(id)_defineProfileActionsForActionableObjects:(id)arg1 withActionMap:(id)arg2 ;
-(id)_filterSplitRecommendations:(id)arg1 characteristicTypePriority:(id)arg2 ;
-(id)definiteActionsForCharacteristicActionMap:(id)arg1 object:(id)arg2 ;
@end

