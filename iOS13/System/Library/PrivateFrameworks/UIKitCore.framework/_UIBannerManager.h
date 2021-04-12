/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneComponentProviding.h>

@class UIWindowScene, _UIBannerWindow, _UIBannerContainerView, NSString, UIScene;

@interface _UIBannerManager : NSObject <_UISceneComponentProviding> {

	UIWindowScene* _windowScene;
	_UIBannerWindow* _window;
	_UIBannerContainerView* _containerView;

}

@property (nonatomic,retain) UIWindowScene * windowScene;                                          //@synthesize windowScene=_windowScene - In the implementation block
@property (nonatomic,retain) _UIBannerWindow * window;                                             //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) _UIBannerContainerView * containerView;                               //@synthesize containerView=_containerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene; 
-(_UIBannerWindow *)window;
-(_UIBannerContainerView *)containerView;
-(void)setContainerView:(_UIBannerContainerView *)arg1 ;
-(void)setWindowScene:(UIWindowScene *)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(UIScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(UIWindowScene *)windowScene;
-(void)setWindow:(_UIBannerWindow *)arg1 ;
-(id)bannerWithContent:(id)arg1 ;
-(void)_createWindowIfNeeded;
@end

