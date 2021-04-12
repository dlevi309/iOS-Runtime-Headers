/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardUI/SBSceneHandle.h>

@class SBApplication, NSString;

@interface SBApplicationSceneHandle : SBSceneHandle {

	SBApplication* _application;
	NSString* _persistenceIdentifier;
	BOOL _isSecure;
	unsigned long long _userLaunchSignpostID;
	double _userLaunchEventTime;
	long long _layoutRole;

}

@property (nonatomic,readonly) SBApplication * application;                   //@synthesize application=_application - In the implementation block
@property (nonatomic,readonly) NSString * persistenceIdentifier;              //@synthesize persistenceIdentifier=_persistenceIdentifier - In the implementation block
@property (getter=isSecure,nonatomic,readonly) BOOL secure;                   //@synthesize isSecure=_isSecure - In the implementation block
@property (assign,nonatomic) long long layoutRole;                            //@synthesize layoutRole=_layoutRole - In the implementation block
+(id)lookupOrCreatePersistenceIDFromApplication:(id)arg1 sceneID:(id)arg2 ;
+(id)sceneSpecificationForDisplayIdentity:(id)arg1 ;
-(void)dealloc;
-(long long)layoutRole;
-(BOOL)isSecure;
-(NSString *)persistenceIdentifier;
-(id)_initWithScene:(id)arg1 ;
-(SBApplication *)application;
-(void)setLayoutRole:(long long)arg1 ;
-(id)_initWithDefinition:(id)arg1 ;
-(id)_persistenceIdentifier;
-(void)_applicationsDidChange:(id)arg1 ;
-(id)_initWithApplication:(id)arg1 sceneIdentity:(id)arg2 displayIdentity:(id)arg3 ;
-(id)_initWithApplication:(id)arg1 scene:(id)arg2 displayIdentity:(id)arg3 ;
-(id)newSceneViewWithReferenceSize:(CGSize)arg1 orientation:(long long)arg2 hostRequester:(id)arg3 ;
-(id)newScenePlaceholderContentContextWithActivationSettings:(id)arg1 ;
-(id)newSceneViewController;
-(id)_createProcessExecutionContextFromContext:(id)arg1 entity:(id)arg2 ;
-(id)_createApplicationSceneTransitionContextFromContext:(id)arg1 entity:(id)arg2 ;
-(id)_createParametersFromTransitionContext:(id)arg1 entity:(id)arg2 ;
-(void)_modifyProcessExecutionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 ;
-(void)_modifyApplicationSceneSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 ;
-(void)_modifyApplicationSceneClientSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 initialSceneSettings:(id)arg4 ;
-(void)_modifyApplicationTransitionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 ;
-(id)_initWithApplication:(id)arg1 definition:(id)arg2 scene:(id)arg3 displayIdentity:(id)arg4 ;
-(id)_createApplicationSceneSettingsFromContext:(id)arg1 entity:(id)arg2 ;
-(id)_createApplicationSceneClientSettingsFromContext:(id)arg1 entity:(id)arg2 initialSceneSettings:(id)arg3 ;
@end

