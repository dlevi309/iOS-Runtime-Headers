/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <libobjc.A.dylib/_UISceneComponentProviding.h>

@protocol BNBannerSceneComponentProviderDelegate;
@class UIScene, UIWindow, BNBannerClientContainerViewController, NSString;

@interface BNBannerSceneComponentProvider : NSObject <_UISceneComponentProviding> {

	UIWindow* _sceneWindow;
	UIScene* _scene;
	id<BNBannerSceneComponentProviderDelegate> _delegate;
	BNBannerClientContainerViewController* _containerViewController;

}

@property (assign,nonatomic,__weak) id<BNBannerSceneComponentProviderDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIWindow * sceneWindow;                                                       //@synthesize sceneWindow=_sceneWindow - In the implementation block
@property (nonatomic,readonly) BNBannerClientContainerViewController * containerViewController;              //@synthesize containerViewController=_containerViewController - In the implementation block
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;                        //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerDelegate:(id)arg1 forSceneForPresentableWithUniqueIdentifier:(id)arg2 ;
+(id)delegateAssociatedWithSceneForPresentableWithUniqueIdentifier:(id)arg1 ;
+(void)unregisterDelegateForSceneForPresentableWithUniqueIdentifier:(id)arg1 ;
-(UIScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(id)_settingsDiffActionsForScene:(id)arg1 ;
-(BNBannerClientContainerViewController *)containerViewController;
-(id<BNBannerSceneComponentProviderDelegate>)delegate;
-(id)initWithScene:(id)arg1 ;
-(void)setDelegate:(id<BNBannerSceneComponentProviderDelegate>)arg1 ;
-(id)_actionHandlersForScene:(id)arg1 ;
-(void)_sceneWillInvalidate:(id)arg1 ;
-(id)_newSceneWindowWithRootViewController:(id)arg1 ;
-(UIWindow *)sceneWindow;
@end

