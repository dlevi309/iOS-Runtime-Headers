/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <libobjc.A.dylib/FBSceneObserver.h>
#import <libobjc.A.dylib/FBApplicationUpdateScenesTransactionObserver.h>

@protocol AFUISceneControllerDelegate;
@class FBScene, FBApplicationUpdateScenesTransaction, BKSProcessAssertion, AFUISceneConfiguration, NSString;

@interface AFUISceneController : NSObject <FBSceneObserver, FBApplicationUpdateScenesTransactionObserver> {

	FBScene* _scene;
	FBApplicationUpdateScenesTransaction* _createTransaction;
	BKSProcessAssertion* _backgroundRunningAssertion;
	AFUISceneConfiguration* _pendingConfigurationToApply;
	BOOL _sceneForeground;
	unsigned long long _invalidationReason;
	id<AFUISceneControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AFUISceneControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneContentStateDidChange:(id)arg1 ;
-(void)sceneDidInvalidate:(id)arg1 ;
-(id<AFUISceneControllerDelegate>)delegate;
-(void)setDelegate:(id<AFUISceneControllerDelegate>)arg1 ;
-(NSString *)description;
-(id)_currentConfiguration;
-(void)transaction:(id)arg1 didLaunchProcess:(id)arg2 ;
-(void)dealloc;
-(void)requestSceneViewWithConfiguration:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)invalidateSceneForReason:(unsigned long long)arg1 explanation:(id)arg2 ;
-(void)updateSceneViewWithConfiguration:(id)arg1 ;
-(void)cancelSceneLoadingTimeOut;
-(void)_recordSceneCreateBegin;
-(void)startSceneLoadingTimeOutTimerWithDuration:(double)arg1 ;
-(void)_recordSceneCreateEnd;
-(void)sceneLoadingTimeOutDidOccur;
@end

