/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneComponentProviding.h>

@class UIWindowScene, _UIBannerWindow, _UIBannerContainerView, UIScene, NSString;

@interface _UIBannerManager : NSObject <_UISceneComponentProviding> {

	UIWindowScene* _windowScene;
	_UIBannerWindow* _window;
	_UIBannerContainerView* _containerView;

}

@property (nonatomic,retain) UIWindowScene * windowScene;                                          //@synthesize windowScene=_windowScene - In the implementation block
@property (nonatomic,retain) _UIBannerWindow * window;                                             //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) _UIBannerContainerView * containerView;                               //@synthesize containerView=_containerView - In the implementation block
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScene *)_scene;
-(UIWindowScene *)windowScene;
-(void)_setScene:(id)arg1 ;
-(void)setContainerView:(_UIBannerContainerView *)arg1 ;
-(void)setWindow:(_UIBannerWindow *)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(void)_createWindowIfNeeded;
-(id)bannerWithContent:(id)arg1 ;
-(_UIBannerContainerView *)containerView;
-(_UIBannerWindow *)window;
-(void)setWindowScene:(UIWindowScene *)arg1 ;
@end

