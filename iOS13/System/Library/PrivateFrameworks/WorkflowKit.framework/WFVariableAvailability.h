/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol OS_dispatch_queue;
@class WFWorkflow, NSMapTable, NSCache, NSHashTable, NSObject;

@interface WFVariableAvailability : NSObject {

	BOOL _extensionInputVariableUsed;
	WFWorkflow* _workflow;
	NSMapTable* _providingActionsByVariableName;
	NSMapTable* _variableScopeLevelsByGroupingIdentifier;
	NSMapTable* _variableScopeEndActionsByStartAction;
	NSMapTable* _actionOutputVariableActionsByUUID;
	NSCache* _cachedContentClassesForVariableNameAtIndex;
	NSHashTable* _variableObservers;
	NSObject*<OS_dispatch_queue> _actionOutputWorkQueue;

}

@property (nonatomic,retain) NSMapTable * providingActionsByVariableName;                       //@synthesize providingActionsByVariableName=_providingActionsByVariableName - In the implementation block
@property (nonatomic,retain) NSMapTable * variableScopeLevelsByGroupingIdentifier;              //@synthesize variableScopeLevelsByGroupingIdentifier=_variableScopeLevelsByGroupingIdentifier - In the implementation block
@property (nonatomic,retain) NSMapTable * variableScopeEndActionsByStartAction;                 //@synthesize variableScopeEndActionsByStartAction=_variableScopeEndActionsByStartAction - In the implementation block
@property (nonatomic,retain) NSMapTable * actionOutputVariableActionsByUUID;                    //@synthesize actionOutputVariableActionsByUUID=_actionOutputVariableActionsByUUID - In the implementation block
@property (nonatomic,retain) NSCache * cachedContentClassesForVariableNameAtIndex;              //@synthesize cachedContentClassesForVariableNameAtIndex=_cachedContentClassesForVariableNameAtIndex - In the implementation block
@property (nonatomic,retain) NSHashTable * variableObservers;                                   //@synthesize variableObservers=_variableObservers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> actionOutputWorkQueue;                //@synthesize actionOutputWorkQueue=_actionOutputWorkQueue - In the implementation block
@property (nonatomic,__weak,readonly) WFWorkflow * workflow;                                    //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,readonly) BOOL extensionInputVariableUsed;                                 //@synthesize extensionInputVariableUsed=_extensionInputVariableUsed - In the implementation block
+(BOOL)actionIsEligibleForOutputVariable:(id)arg1 ;
-(void)invalidateCache;
-(WFWorkflow *)workflow;
-(id)initWithWorkflow:(id)arg1 ;
-(void)populateCache;
-(id)actionProvidingVariableWithOutputUUID:(id)arg1 ;
-(void)addVariableObserver:(id)arg1 ;
-(void)removeVariableObserver:(id)arg1 ;
-(id)possibleContentClassesForVariableNamed:(id)arg1 atIndex:(unsigned long long)arg2 context:(id)arg3 excludingAction:(id)arg4 ;
-(id)actionsProvidingVariableName:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)isVariableWithOutputUUIDAvailable:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)isVariableWithName:(id)arg1 availableAtIndex:(unsigned long long)arg2 ;
-(BOOL)areActionOutputVariablesAvailableAtIndex:(unsigned long long)arg1 ;
-(BOOL)areVariablesAvailableAtIndex:(unsigned long long)arg1 ;
-(id)availableOutputActionsAtIndex:(unsigned long long)arg1 ;
-(id)availableVariableNamesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)variableScopeLevelForGroupingIdentifier:(id)arg1 ;
-(BOOL)extensionInputVariableUsed;
-(id)availableVariableNamesExcludingThoseProvidedByAction:(id)arg1 ;
-(void)renameVariable:(id)arg1 to:(id)arg2 fromAction:(id)arg3 ;
-(void)actionsDidMove;
-(void)invalidateActionOutputProviderCache;
-(void)invalidateContentClassCache;
-(NSMapTable *)providingActionsByVariableName;
-(NSMapTable *)variableScopeLevelsByGroupingIdentifier;
-(NSMapTable *)variableScopeEndActionsByStartAction;
-(BOOL)isVariableAvailableAtIndex:(unsigned long long)arg1 withActionTest:(/*^block*/id)arg2 ;
-(void)enumerateActionsInScopeAtIndex:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSMapTable *)actionOutputVariableActionsByUUID;
-(void)populateActionOutputVariableActionsByUUID;
-(id)_possibleContentClassesForVariableNamed:(id)arg1 atIndex:(unsigned long long)arg2 context:(id)arg3 excludingAction:(id)arg4 ;
-(NSHashTable *)variableObservers;
-(void)notifyVariablesChanged;
-(void)notifyContentClassesChanged;
-(void)setProvidingActionsByVariableName:(NSMapTable *)arg1 ;
-(void)setVariableScopeLevelsByGroupingIdentifier:(NSMapTable *)arg1 ;
-(void)setVariableScopeEndActionsByStartAction:(NSMapTable *)arg1 ;
-(void)setActionOutputVariableActionsByUUID:(NSMapTable *)arg1 ;
-(NSCache *)cachedContentClassesForVariableNameAtIndex;
-(void)setCachedContentClassesForVariableNameAtIndex:(NSCache *)arg1 ;
-(void)setVariableObservers:(NSHashTable *)arg1 ;
-(NSObject*<OS_dispatch_queue>)actionOutputWorkQueue;
-(void)setActionOutputWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

