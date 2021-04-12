/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWorkspaceTransitionContext.h>
#import <libobjc.A.dylib/SBDisplayLayoutContext.h>

@protocol SBWorkspaceApplicationSceneTransitionContextDelegate;
@class SBLayoutState, NSMutableDictionary, SBWorkspaceEntity, NSString, SBApplicationSceneEntityDestructionIntent, SBMainWorkspaceTransitionRequest, NSSet, SBApplicationSceneEntity, FBSDisplayIdentity;

@interface SBWorkspaceApplicationSceneTransitionContext : SBWorkspaceTransitionContext <SBDisplayLayoutContext> {

	/*^block*/id _resultBlock;
	BOOL _background;
	BOOL _fencesAnimations;
	BOOL _alwaysRunsWatchdog;
	BOOL _waitsForSceneUpdates;
	BOOL _sentActivationResult;
	SBLayoutState* _layoutState;
	SBLayoutState* _previousLayoutState;
	NSMutableDictionary* _requestedWorkspaceEntityForLayoutRoleMutableDictionary;
	BOOL _suspendsInlineAppExposeCancellation;
	BOOL _prefersTouchCancellationDisabled;
	BOOL __alreadyPopulatedRequestedWorkspaceEntities;
	id<SBWorkspaceApplicationSceneTransitionContextDelegate> _delegate;
	long long _interfaceOrientation;
	long long _preferredInterfaceOrientation;
	SBWorkspaceEntity* _deactivatingEntity;
	long long _requestedSpaceConfiguration;
	long long _requestedFloatingConfiguration;
	long long _requestedUnlockedEnvironmentMode;
	long long _requestedFloatingSwitcherVisible;
	NSString* _requestedAppExposeBundleID;
	SBApplicationSceneEntityDestructionIntent* _intentForEntityRemoval;

}

@property (setter=_setRequestedActivatingWorkspaceEntity:,nonatomic,retain) SBWorkspaceEntity * requestedActivatingWorkspaceEntity; 
@property (assign,setter=_setAlreadyPopulatedRequestedWorkspaceEntities:,nonatomic) BOOL _alreadyPopulatedRequestedWorkspaceEntities;              //@synthesize _alreadyPopulatedRequestedWorkspaceEntities=__alreadyPopulatedRequestedWorkspaceEntities - In the implementation block
@property (nonatomic,__weak,readonly) SBMainWorkspaceTransitionRequest * request; 
@property (assign,getter=isBackground,nonatomic) BOOL background;                                                                                  //@synthesize background=_background - In the implementation block
@property (assign,nonatomic) BOOL fencesAnimations;                                                                                                //@synthesize fencesAnimations=_fencesAnimations - In the implementation block
@property (assign,nonatomic) BOOL alwaysRunsWatchdog;                                                                                              //@synthesize alwaysRunsWatchdog=_alwaysRunsWatchdog - In the implementation block
@property (assign,nonatomic) BOOL waitsForSceneUpdates;                                                                                            //@synthesize waitsForSceneUpdates=_waitsForSceneUpdates - In the implementation block
@property (assign,nonatomic) BOOL suspendsInlineAppExposeCancellation;                                                                             //@synthesize suspendsInlineAppExposeCancellation=_suspendsInlineAppExposeCancellation - In the implementation block
@property (nonatomic,copy) id resultBlock;                                                                                                         //@synthesize resultBlock=_resultBlock - In the implementation block
@property (nonatomic,copy,readonly) NSSet * applicationSceneEntities; 
@property (nonatomic,copy,readonly) NSSet * previousApplicationSceneEntities; 
@property (nonatomic,readonly) double watchdogScaleFactor; 
@property (nonatomic,readonly) SBLayoutState * previousLayoutState; 
@property (assign,nonatomic,__weak) id<SBWorkspaceApplicationSceneTransitionContextDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                                                                                       //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL prefersTouchCancellationDisabled;                                                                                //@synthesize prefersTouchCancellationDisabled=_prefersTouchCancellationDisabled - In the implementation block
@property (assign,nonatomic) long long preferredInterfaceOrientation;                                                                              //@synthesize preferredInterfaceOrientation=_preferredInterfaceOrientation - In the implementation block
@property (nonatomic,retain) SBWorkspaceEntity * activatingEntity; 
@property (nonatomic,retain) SBWorkspaceEntity * deactivatingEntity;                                                                               //@synthesize deactivatingEntity=_deactivatingEntity - In the implementation block
@property (assign,nonatomic) long long requestedSpaceConfiguration;                                                                                //@synthesize requestedSpaceConfiguration=_requestedSpaceConfiguration - In the implementation block
@property (assign,nonatomic) long long requestedFloatingConfiguration;                                                                             //@synthesize requestedFloatingConfiguration=_requestedFloatingConfiguration - In the implementation block
@property (assign,nonatomic) long long requestedUnlockedEnvironmentMode;                                                                           //@synthesize requestedUnlockedEnvironmentMode=_requestedUnlockedEnvironmentMode - In the implementation block
@property (assign,nonatomic) long long requestedFloatingSwitcherVisible;                                                                           //@synthesize requestedFloatingSwitcherVisible=_requestedFloatingSwitcherVisible - In the implementation block
@property (nonatomic,copy) NSString * requestedAppExposeBundleID;                                                                                  //@synthesize requestedAppExposeBundleID=_requestedAppExposeBundleID - In the implementation block
@property (nonatomic,retain) SBApplicationSceneEntityDestructionIntent * intentForEntityRemoval;                                                   //@synthesize intentForEntityRemoval=_intentForEntityRemoval - In the implementation block
@property (nonatomic,readonly) SBApplicationSceneEntity * resolvedActivatingApplicationSceneEntity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBSDisplayIdentity * displayIdentity; 
@property (nonatomic,readonly) SBLayoutState * layoutState; 
-(id)init;
-(void)dealloc;
-(void)finalize;
-(id<SBWorkspaceApplicationSceneTransitionContextDelegate>)delegate;
-(void)setDelegate:(id<SBWorkspaceApplicationSceneTransitionContextDelegate>)arg1 ;
-(id)succinctDescriptionBuilder;
-(long long)interfaceOrientation;
-(void)setBackground:(BOOL)arg1 ;
-(SBLayoutState *)previousLayoutState;
-(SBLayoutState *)layoutState;
-(FBSDisplayIdentity *)displayIdentity;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(id)_displayConfiguration;
-(BOOL)isBackground;
-(long long)preferredInterfaceOrientation;
-(void)setPreferredInterfaceOrientation:(long long)arg1 ;
-(double)watchdogScaleFactor;
-(id)resultBlock;
-(void)setResultBlock:(id)arg1 ;
-(id)applicationSceneEntityForLayoutRole:(long long)arg1 ;
-(id)previousApplicationSceneEntityForLayoutRole:(long long)arg1 ;
-(void)setEntity:(id)arg1 forLayoutRole:(long long)arg2 ;
-(void)setRequestedSpaceConfiguration:(long long)arg1 ;
-(void)setRequestedFloatingConfiguration:(long long)arg1 ;
-(void)setRequestedFloatingSwitcherVisible:(long long)arg1 ;
-(void)setWaitsForSceneUpdates:(BOOL)arg1 ;
-(void)setActivatingEntity:(SBWorkspaceEntity *)arg1 ;
-(long long)requestedUnlockedEnvironmentMode;
-(NSSet *)applicationSceneEntities;
-(void)sendActivationResultErrorCode:(long long)arg1 reason:(id)arg2 ;
-(void)setRequestedUnlockedEnvironmentMode:(long long)arg1 ;
-(SBApplicationSceneEntity *)resolvedActivatingApplicationSceneEntity;
-(id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBApplicationSceneEntityDestructionIntent *)intentForEntityRemoval;
-(void)setIntentForEntityRemoval:(SBApplicationSceneEntityDestructionIntent *)arg1 ;
-(id)previousEntityForLayoutRole:(long long)arg1 ;
-(id)previousApplicationSceneEntityForBundleID:(id)arg1 ;
-(id)entityForLayoutRole:(long long)arg1 ;
-(long long)requestedSpaceConfiguration;
-(long long)requestedFloatingSwitcherVisible;
-(BOOL)suspendsInlineAppExposeCancellation;
-(void)setSuspendsInlineAppExposeCancellation:(BOOL)arg1 ;
-(BOOL)waitsForSceneUpdates;
-(BOOL)hasSentActivationResult;
-(NSSet *)previousApplicationSceneEntities;
-(void)setRequestedAppExposeBundleID:(NSString *)arg1 ;
-(SBWorkspaceEntity *)activatingEntity;
-(long long)_lockedInterfaceOrientation;
-(NSString *)requestedAppExposeBundleID;
-(void)setPreviousEntity:(id)arg1 forLayoutRole:(long long)arg2 ;
-(id)applicationSceneEntityForBundleID:(id)arg1 ;
-(SBWorkspaceEntity *)requestedActivatingWorkspaceEntity;
-(void)_setRequestedActivatingWorkspaceEntity:(id)arg1 ;
-(id)requestedWorkspaceEntityForLayoutRole:(long long)arg1 ;
-(void)_setRequestedWorkspaceEntity:(id)arg1 forLayoutRole:(long long)arg2 ;
-(long long)interfaceOrientationOrPreferredOrientation;
-(CGRect)frameForApplicationSceneEntity:(id)arg1 ;
-(BOOL)fencesAnimations;
-(void)setFencesAnimations:(BOOL)arg1 ;
-(BOOL)alwaysRunsWatchdog;
-(void)setAlwaysRunsWatchdog:(BOOL)arg1 ;
-(BOOL)prefersTouchCancellationDisabled;
-(void)setPrefersTouchCancellationDisabled:(BOOL)arg1 ;
-(SBWorkspaceEntity *)deactivatingEntity;
-(void)setDeactivatingEntity:(SBWorkspaceEntity *)arg1 ;
-(long long)requestedFloatingConfiguration;
-(BOOL)_alreadyPopulatedRequestedWorkspaceEntities;
-(void)_setAlreadyPopulatedRequestedWorkspaceEntities:(BOOL)arg1 ;
@end

