/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <FrontBoard/FBApplicationUpdateScenesTransaction.h>

@class SBApplicationSceneEntity, SBWorkspaceTransitionRequest, SBWorkspaceApplicationSceneTransitionContext, NSString, FBSMutableSceneParameters, UIApplicationSceneTransitionContext, UIApplicationSceneSettings;

@interface SBApplicationSceneUpdateTransaction : FBApplicationUpdateScenesTransaction {

	SBApplicationSceneEntity* _applicationSceneEntity;
	SBWorkspaceTransitionRequest* _request;
	SBWorkspaceApplicationSceneTransitionContext* _transitionContext;
	NSString* _sceneIdentifier;
	FBSMutableSceneParameters* _sceneParameters;
	UIApplicationSceneTransitionContext* _sceneTransitionContext;
	BOOL _suspendedActivation;
	BOOL _shouldSendActivationResult;

}

@property (nonatomic,readonly) SBApplicationSceneEntity * applicationSceneEntity;              //@synthesize applicationSceneEntity=_applicationSceneEntity - In the implementation block
@property (nonatomic,readonly) NSString * sceneIdentifier;                                     //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (nonatomic,readonly) UIApplicationSceneSettings * sceneSettings; 
@property (assign,nonatomic) BOOL shouldSendActivationResult;                                  //@synthesize shouldSendActivationResult=_shouldSendActivationResult - In the implementation block
-(BOOL)shouldSendActivationResult;
-(UIApplicationSceneSettings *)sceneSettings;
-(NSString *)sceneIdentifier;
-(id)initWithApplicationSceneEntity:(id)arg1 transitionRequest:(id)arg2 ;
-(void)_didComplete;
-(id)_customizedDescriptionProperties;
-(SBApplicationSceneEntity *)applicationSceneEntity;
-(void)setShouldSendActivationResult:(BOOL)arg1 ;
-(void)_sendActivationResultWithError:(id)arg1 ;
-(void)_performSynchronizedCommit:(id)arg1 ;
@end

