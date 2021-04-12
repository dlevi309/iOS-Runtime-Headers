/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/FBSceneObserver.h>

@protocol UIScenePresenter;
@class RBSProcessIdentity, FBSSceneIdentity, FBApplicationUpdateScenesTransaction, FBScene, HUDashboardNavigationButton, NSString;

@interface HUSceneHolderViewController : UIViewController <FBSceneObserver> {

	RBSProcessIdentity* _processIdentity;
	FBSSceneIdentity* _sceneIdentity;
	BOOL _visible;
	FBApplicationUpdateScenesTransaction* _transaction;
	FBScene* _scene;
	id<UIScenePresenter> _scenePresenter;
	HUDashboardNavigationButton* _closeButton;
	NSString* _bundleId;

}

@property (nonatomic,retain) HUDashboardNavigationButton * closeButton;              //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                                  //@synthesize bundleId=_bundleId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)sceneDidInvalidate:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)setCloseButton:(HUDashboardNavigationButton *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(NSString *)bundleId;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_updateScene;
-(HUDashboardNavigationButton *)closeButton;
-(void)dealloc;
-(void)close:(id)arg1 ;
-(void)_lookupScene;
@end

