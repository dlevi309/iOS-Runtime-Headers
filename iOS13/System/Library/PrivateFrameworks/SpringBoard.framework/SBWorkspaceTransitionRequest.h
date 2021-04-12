/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBUIAnimationControllerTransitionContextProvider.h>
#import <libobjc.A.dylib/SBWorkspaceApplicationSceneTransitionContextDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSSet, FBSDisplayConfiguration, SBWorkspace, NSUUID, NSString, SBLayoutStateTransitionCoordinator, SBWorkspaceApplicationSceneTransitionContext, BSProcessHandle, SBWorkspaceTransientOverlayTransitionContext, FBSDisplayIdentity;

@interface SBWorkspaceTransitionRequest : NSObject <SBUIAnimationControllerTransitionContextProvider, SBWorkspaceApplicationSceneTransitionContextDelegate, BSDescriptionProviding> {

	FBSDisplayConfiguration* _displayConfiguration;
	SBWorkspace* _workspace;
	NSUUID* _uniqueID;
	NSString* _eventLabel;
	SBLayoutStateTransitionCoordinator* _layoutStateTransitionCoordinator;
	BOOL _finalized;
	long long _interfaceOrientation;
	SBWorkspaceApplicationSceneTransitionContext* _applicationContext;
	BSProcessHandle* _originatingProcess;
	SBWorkspaceTransientOverlayTransitionContext* _transientOverlayContext;

}

@property (nonatomic,readonly) BOOL isMainWorkspaceTransitionRequest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * toApplicationSceneEntities; 
@property (nonatomic,copy,readonly) NSSet * fromApplicationSceneEntities; 
@property (nonatomic,readonly) SBWorkspace * workspace;                                                           //@synthesize workspace=_workspace - In the implementation block
@property (nonatomic,readonly) FBSDisplayIdentity * displayIdentity; 
@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration;                                    //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (nonatomic,retain) BSProcessHandle * originatingProcess;                                                //@synthesize originatingProcess=_originatingProcess - In the implementation block
@property (nonatomic,copy) NSString * eventLabel;                                                                 //@synthesize eventLabel=_eventLabel - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueID;                                                            //@synthesize uniqueID=_uniqueID - In the implementation block
@property (getter=isFinalized,nonatomic,readonly) BOOL finalized;                                                 //@synthesize finalized=_finalized - In the implementation block
@property (nonatomic,retain) SBWorkspaceApplicationSceneTransitionContext * applicationContext;                   //@synthesize applicationContext=_applicationContext - In the implementation block
@property (nonatomic,retain) SBWorkspaceTransientOverlayTransitionContext * transientOverlayContext;              //@synthesize transientOverlayContext=_transientOverlayContext - In the implementation block
-(id)init;
-(NSString *)description;
-(void)finalize;
-(NSUUID *)uniqueID;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBSDisplayIdentity *)displayIdentity;
-(FBSDisplayConfiguration *)displayConfiguration;
-(void)setOriginatingProcess:(BSProcessHandle *)arg1 ;
-(BSProcessHandle *)originatingProcess;
-(BOOL)isFinalized;
-(SBWorkspace *)workspace;
-(void)setApplicationContext:(SBWorkspaceApplicationSceneTransitionContext *)arg1 ;
-(void)setEventLabel:(NSString *)arg1 ;
-(NSString *)eventLabel;
-(SBWorkspaceApplicationSceneTransitionContext *)applicationContext;
-(void)modifyApplicationContext:(/*^block*/id)arg1 ;
-(SBWorkspaceTransientOverlayTransitionContext *)transientOverlayContext;
-(void)setEventLabelWithFormat:(id)arg1 ;
-(void)modifyTransientOverlayContext:(/*^block*/id)arg1 ;
-(id)compactDescriptionBuilder;
-(void)declineWithReason:(id)arg1 ;
-(BOOL)isMainWorkspaceTransitionRequest;
-(id)_initWithWorkspace:(id)arg1 displayConfiguration:(id)arg2 ;
-(void)setTransientOverlayContext:(SBWorkspaceTransientOverlayTransitionContext *)arg1 ;
-(id)layoutStateForApplicationTransitionContext:(id)arg1 ;
-(id)previousLayoutStateForApplicationTransitionContext:(id)arg1 ;
-(NSSet *)toApplicationSceneEntities;
-(NSSet *)fromApplicationSceneEntities;
@end

