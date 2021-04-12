/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
*/

#import <libobjc.A.dylib/_UISceneComponentProviding.h>

@class UIScene, ASOOverlayWindow, ASOOverlayViewController, NSString;

@interface ASOOverlayManager : NSObject <_UISceneComponentProviding> {

	UIScene* _scene;
	ASOOverlayWindow* _window;
	ASOOverlayViewController* _viewController;

}

@property (nonatomic,retain,readonly) ASOOverlayWindow * window;                                   //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) ASOOverlayViewController * viewController;                            //@synthesize viewController=_viewController - In the implementation block
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;              //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(void)setViewController:(ASOOverlayViewController *)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(ASOOverlayViewController *)viewController;
-(ASOOverlayWindow *)window;
-(id)initWithWindowScene:(id)arg1 ;
-(void)presentOverlay:(id)arg1 ;
-(void)dismissOverlay;
-(id)makeViewControllerIfNeeded;
@end

