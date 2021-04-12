/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemBuilder.h>

@protocol HFTriggerBuilderContextProviding;
@class NSString, HFTriggerActionSetsBuilder, HFConditionCollection, HFMutableSetDiff, HMTrigger, NSArray, HFDurationEventBuilder;

@interface HFTriggerBuilder : HFItemBuilder {

	BOOL _enabled;
	NSString* _name;
	NSString* _displayName;
	HFTriggerActionSetsBuilder* _triggerActionSets;
	id<HFTriggerBuilderContextProviding> _context;
	HFConditionCollection* _conditionCollection;
	HFMutableSetDiff* _endEventBuildersDiff;

}

@property (nonatomic,retain) HFTriggerActionSetsBuilder * triggerActionSets;                                      //@synthesize triggerActionSets=_triggerActionSets - In the implementation block
@property (nonatomic,retain) HFMutableSetDiff * endEventBuildersDiff;                                             //@synthesize endEventBuildersDiff=_endEventBuildersDiff - In the implementation block
@property (nonatomic,retain) id<HFTriggerBuilderContextProviding> context;                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) HFConditionCollection * conditionCollection;                                         //@synthesize conditionCollection=_conditionCollection - In the implementation block
@property (nonatomic,readonly) BOOL supportsConditions; 
@property (nonatomic,readonly) BOOL supportsEndEvents; 
@property (nonatomic,readonly) HMTrigger * trigger; 
@property (nonatomic,copy) NSString * name;                                                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                                //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                                        //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSArray * endEventBuilders; 
@property (nonatomic,readonly) BOOL requiresConfirmationToRun; 
@property (nonatomic,readonly) BOOL secureActionsRequireConfirmationToRun; 
@property (nonatomic,readonly) BOOL requiresLocationServicesAuthorization; 
@property (nonatomic,readonly) BOOL requiresHomeHub; 
@property (nonatomic,readonly) BOOL requiresUpdatedHomeHub; 
@property (nonatomic,readonly) BOOL requiresFMFDeviceToRun; 
@property (getter=areActionsAffectedByEndEvents,nonatomic,readonly) BOOL actionsAffectedByEndEvents; 
@property (nonatomic,readonly) BOOL isShortcutOwned; 
@property (nonatomic,readonly) HFDurationEventBuilder * designatedDurationEventBuilder; 
+(Class)homeKitRepresentationClass;
+(id)triggerBuilderForTrigger:(id)arg1 inHome:(id)arg2 context:(id)arg3 ;
-(NSString *)name;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id<HFTriggerBuilderContextProviding>)context;
-(NSString *)displayName;
-(void)setContext:(id<HFTriggerBuilderContextProviding>)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(HMTrigger *)trigger;
-(void)setTrigger:(HMTrigger *)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id)_updateEnabledState;
-(id)_updateName;
-(void)setEndEvent:(id)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3 ;
-(id)_performValidation;
-(id)commitItem;
-(BOOL)markTriggerAsHomeAppCreated;
-(BOOL)supportsConditions;
-(BOOL)supportsEndEvents;
-(id)commitCreateTrigger;
-(id)commitEditTrigger;
-(id)naturalLanguageNameOfType:(unsigned long long)arg1 ;
-(id)deleteTrigger;
-(void)setMarkTriggerAsHomeAppCreated:(BOOL)arg1 ;
-(BOOL)isShortcutOwned;
-(BOOL)areActionsAffectedByEndEvents;
-(id)replaceCurrentTriggerWithTrigger:(id)arg1 ;
-(NSArray *)endEventBuilders;
-(HFConditionCollection *)conditionCollection;
-(HFTriggerActionSetsBuilder *)triggerActionSets;
-(BOOL)requiresConfirmationToRun;
-(BOOL)secureActionsRequireConfirmationToRun;
-(BOOL)requiresLocationServicesAuthorization;
-(BOOL)requiresFMFDeviceToRun;
-(id)initWithHome:(id)arg1 context:(id)arg2 ;
-(void)setTriggerActionSets:(HFTriggerActionSetsBuilder *)arg1 ;
-(void)setConditionCollection:(HFConditionCollection *)arg1 ;
-(void)setEndEventBuildersDiff:(HFMutableSetDiff *)arg1 ;
-(HFMutableSetDiff *)endEventBuildersDiff;
-(void)removeEndEventBuilder:(id)arg1 ;
-(void)removeAllEndEventBuilders;
-(void)addEndEventBuilder:(id)arg1 ;
-(id)_deleteTrigger:(id)arg1 fromHome:(id)arg2 ;
-(id)_commitAddTriggerToHome:(id)arg1 ;
-(id)_updateAnonymousActionSet;
-(id)_updateActionSets;
-(id)_updateConditions;
-(id)_updateEndEvents;
-(id)_uniquelyRenameTrigger:(id)arg1 pendingReplaceByNewTrigger:(id)arg2 ;
-(void)_didReplaceBackingTrigger;
-(void)updateEndEventBuilder:(id)arg1 ;
-(BOOL)requiresHomeHub;
-(BOOL)requiresUpdatedHomeHub;
-(HFDurationEventBuilder *)designatedDurationEventBuilder;
@end

