/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/FBSceneObserver.h>
#import <libobjc.A.dylib/SBLoginAppSceneHoster.h>
@class UIView, NSString, SBApplication;


@protocol SBLoginAppSceneHoster <NSObject>
@property (assign,nonatomic,__weak) id<SBLoginAppSceneHosterDelegate> delegate; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) NSString * hostedAppBundleID; 
@property (nonatomic,readonly) NSString * hostedSceneIdentifier; 
@property (nonatomic,readonly) SBApplication * hostedApp; 
@property (assign,nonatomic) BOOL deferHIDEvents; 
@required
-(id<SBLoginAppSceneHosterDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(UIView *)contentView;
-(void)updateSettingsWithTransitionBlock:(/*^block*/id)arg1;
-(SBApplication *)hostedApp;
-(NSString *)hostedAppBundleID;
-(void)launchLoginAppWithCompletion:(/*^block*/id)arg1;
-(void)killLoginApp;
-(NSString *)hostedSceneIdentifier;
-(BOOL)deferHIDEvents;
-(void)setDeferHIDEvents:(BOOL)arg1;

@end


@protocol UIScenePresenter, SBLoginAppSceneHosterDelegate;
@class UIView, NSString, SBApplication, FBScene, FBApplicationUpdateScenesTransaction, SBSUILoginUISceneClientSettingsDiffInspector, SBDeviceApplicationSceneHandle;

@interface SBLoginAppSceneHoster : NSObject <FBSceneObserver, SBLoginAppSceneHoster> {

	FBScene* _scene;
	id<UIScenePresenter> _scenePresenter;
	FBApplicationUpdateScenesTransaction* _sceneCreateTransaction;
	long long _cachedActivationOrientationForInitialClientSettings;
	SBSUILoginUISceneClientSettingsDiffInspector* _appClientSettingsDiffInspector;
	SBDeviceApplicationSceneHandle* _sceneHandle;
	BOOL _deferHIDEvents;
	BOOL _hidEventDeferralsInstalled;
	id<SBLoginAppSceneHosterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLoginAppSceneHosterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) NSString * hostedAppBundleID; 
@property (nonatomic,readonly) NSString * hostedSceneIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SBApplication * hostedApp; 
@property (assign,nonatomic) BOOL deferHIDEvents;                                            //@synthesize deferHIDEvents=_deferHIDEvents - In the implementation block
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneDidInvalidate:(id)arg1 ;
-(id)init;
-(id<SBLoginAppSceneHosterDelegate>)delegate;
-(void)setDelegate:(id<SBLoginAppSceneHosterDelegate>)arg1 ;
-(UIView *)contentView;
-(id)_appClientSettingsDiffInspector;
-(void)updateSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(SBApplication *)hostedApp;
-(void)_updateHIDEventDeferralsIfNecessary;
-(NSString *)hostedAppBundleID;
-(void)launchLoginAppWithCompletion:(/*^block*/id)arg1 ;
-(void)killLoginApp;
-(NSString *)hostedSceneIdentifier;
-(BOOL)deferHIDEvents;
-(void)setDeferHIDEvents:(BOOL)arg1 ;
@end

