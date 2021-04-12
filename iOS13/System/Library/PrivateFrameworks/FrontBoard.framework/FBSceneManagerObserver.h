/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBSceneManagerInternalObserver.h>
#import <libobjc.A.dylib/FBSceneManagerDelegate_Private.h>

@protocol FBSceneManagerObserver;
@class NSString;

@interface FBSceneManagerObserver : NSObject <BSDescriptionProviding, FBSceneManagerInternalObserver, FBSceneManagerDelegate_Private> {

	id<FBSceneManagerObserver> _observer;
	unsigned long long _observerAddress;
	Class _observerClass;
	BOOL _isDelegate;
	BOOL _internalObserver;
	BOOL _privateDelegate;
	BOOL _didCreate;
	BOOL _willDestroy;
	BOOL _didDestroy;
	BOOL _updatePreparedDEPRECATED;
	BOOL _updateAppliedDEPRECATED;
	BOOL _updateCompletedDEPRECATED;
	BOOL _didCreateSceneDEPRECATED;
	BOOL _willUpdateSceneDEPRECATED;
	BOOL _willCommitDEPRECATED;
	BOOL _didCommitDEPRECATED;
	BOOL _didCommitDEPRECATED2;
	BOOL _didReceiveActionsDEPRECATED;
	BOOL _willSynchronize;
	BOOL _didSynchronize;
	BOOL _interceptSceneUpdatesForDeactivationManager;
	BOOL _didUpdateClientSettings;
	BOOL _interceptSceneUpdates;
	BOOL _hostingPolicyForDisplay;
	BOOL _hostingPolicyForScene;
	BOOL _createDefaultTransitionContext;

}

@property (nonatomic,__weak,readonly) id<FBSceneManagerObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,__weak,readonly) id<FBSceneManagerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observerWithObserver:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id<FBSceneManagerObserver>)observer;
-(id)initWithObject:(id)arg1 ;
-(id<FBSceneManagerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_privateDelegate;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 updateForScene:(id)arg2 preparedWithContext:(id)arg3 ;
-(void)sceneManager:(id)arg1 updateForScene:(id)arg2 appliedWithContext:(id)arg3 ;
-(void)sceneManager:(id)arg1 updateForScene:(id)arg2 completedWithContext:(id)arg3 error:(id)arg4 ;
-(id)_initWithObserver:(id)arg1 ;
-(id)initWithObserver:(id)arg1 ;
-(void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1 ;
-(void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1 ;
-(void)sceneManager:(id)arg1 interceptUpdateForSceneDeactivationManager:(id)arg2 withNewSettings:(id)arg3 ;
-(BOOL)isDelegate;
-(id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2 ;
-(long long)sceneManager:(id)arg1 hostingPolicyForDisplay:(id)arg2 ;
-(long long)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5 ;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3 ;
-(void)sceneManager:(id)arg1 interceptUpdateForScene:(id)arg2 withNewSettings:(id)arg3 ;
-(id)_internalObserver;
-(BOOL)isInternalObserver;
@end

