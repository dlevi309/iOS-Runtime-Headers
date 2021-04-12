/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class HFTriggerAnonymousActionSetBuilder, HMHome, HFMutableSetDiff, HMShortcutAction, NSArray, HFSetDiff, WFHomeWorkflow;

@interface HFTriggerActionSetsBuilder : NSObject {

	HFTriggerAnonymousActionSetBuilder* _anonymousActionSetBuilder;
	HMHome* _home;
	HFMutableSetDiff* _actionSetBuilders;
	HMShortcutAction* _shortcutAction;

}

@property (nonatomic,retain) HFTriggerAnonymousActionSetBuilder * anonymousActionSetBuilder;                      //@synthesize anonymousActionSetBuilder=_anonymousActionSetBuilder - In the implementation block
@property (nonatomic,retain) HFMutableSetDiff * actionSetBuilders;                                                //@synthesize actionSetBuilders=_actionSetBuilders - In the implementation block
@property (nonatomic,retain) HMShortcutAction * shortcutAction;                                                   //@synthesize shortcutAction=_shortcutAction - In the implementation block
@property (nonatomic,readonly) NSArray * allActionSets; 
@property (nonatomic,readonly) NSArray * allActionBuilders; 
@property (nonatomic,readonly) NSArray * namedActionSets; 
@property (nonatomic,readonly) NSArray * anonymousActionBuilder; 
@property (nonatomic,readonly) HFSetDiff * namedActionSetsDiff; 
@property (nonatomic,readonly) BOOL hasActions; 
@property (getter=areActionsAffectedByEndEvents,nonatomic,readonly) BOOL actionsAffectedByEndEvents; 
@property (nonatomic,readonly) HMHome * home;                                                                     //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) BOOL isShortcutOwned; 
@property (nonatomic,retain) WFHomeWorkflow * homeWorkflow; 
-(HMHome *)home;
-(BOOL)hasActions;
-(id)actionSetsSummary;
-(NSArray *)allActionSets;
-(id)initWithActionSets:(id)arg1 inHome:(id)arg2 ;
-(id)_generateSummaryInformation;
-(BOOL)isShortcutOwned;
-(id)_generateSummaryInformationForShortcutOwnedTrigger;
-(id)_generateSummaryInformationForStandardTrigger;
-(WFHomeWorkflow *)homeWorkflow;
-(NSArray *)namedActionSets;
-(void)_generateStandaloneServices:(id)arg1 andMediaAccessories:(id)arg2 ;
-(id)_uniqueServiceGroupForServices:(id)arg1 ;
-(HFTriggerAnonymousActionSetBuilder *)anonymousActionSetBuilder;
-(id)mediaAccessoriesForPlaybackAction:(id)arg1 ;
-(id)initWithActionSets:(id)arg1 inHome:(id)arg2 filterEmptyActionSets:(BOOL)arg3 ;
-(id)_removeDuplicateActionSets:(id)arg1 ;
-(id)_removeEmptyActionSets:(id)arg1 ;
-(void)setShortcutAction:(HMShortcutAction *)arg1 ;
-(void)setActionSetBuilders:(HFMutableSetDiff *)arg1 ;
-(void)setAnonymousActionSetBuilder:(HFTriggerAnonymousActionSetBuilder *)arg1 ;
-(HFSetDiff *)namedActionSetsDiff;
-(HFMutableSetDiff *)actionSetBuilders;
-(HMShortcutAction *)shortcutAction;
-(void)removeActionSetBuilder:(id)arg1 ;
-(void)addActionSetBuilder:(id)arg1 ;
-(NSArray *)anonymousActionBuilder;
-(void)setHomeWorkflow:(WFHomeWorkflow *)arg1 ;
-(void)convertToHomeWorkflowActionSetIfNeeded;
-(void)_removeAllNamedActionsSets;
-(void)updateFromTriggerActionSetsBuilder:(id)arg1 ;
-(void)updateActionSetBuilder:(id)arg1 ;
-(void)addAnonymousActionBuilder:(id)arg1 ;
-(void)updateAnonymousActionBuilder:(id)arg1 ;
-(void)removeAnonymousActionBuilder:(id)arg1 ;
-(void)removeAllActionsAndActionSets;
-(BOOL)areActionsAffectedByEndEvents;
-(void)resetAllActionSets;
-(void)resetActionSetBuilders;
-(void)addActionSetIfNotPresent:(id)arg1 ;
-(void)removeActionSetIfPresent:(id)arg1 ;
-(NSArray *)allActionBuilders;
-(void)convertToHomeWorkflowActionSet:(id)arg1 ;
-(void)defaultActionsForShortcut;
@end

