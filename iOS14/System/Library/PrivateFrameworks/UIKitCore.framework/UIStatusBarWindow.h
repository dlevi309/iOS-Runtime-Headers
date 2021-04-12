/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindow.h>

@class UIStatusBar;

@interface UIStatusBarWindow : UIWindow {

	UIStatusBar* _statusBar;
	long long _orientation;

}
+(CGRect)_defaultStatusBarSceneReferenceBounds;
+(BOOL)_isSystemWindow;
+(CGRect)_defaultStatusBarSceneReferenceBoundsForOrientation:(long long)arg1 ;
+(CGRect)_convertRect:(CGRect)arg1 fromSceneReferenceSpaceToSceneSpaceWithOrientation:(long long)arg2 ;
+(CGRect)statusBarWindowFrame;
-(void)setStatusBar:(id)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_didMoveFromScene:(id)arg1 toScene:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setOrientation:(long long)arg1 animationParameters:(id)arg2 ;
-(CGRect)_statusBarFrameForOrientation:(long long)arg1 ;
-(BOOL)_isStatusBarWindow;
-(CGRect)_defaultStatusBarSceneBoundsForOrientation:(long long)arg1 ;
-(BOOL)_shouldAdjustSizeClassesAndResizeWindow;
-(long long)orientation;
-(BOOL)_disableGroupOpacity;
-(BOOL)_shouldForceTraitPropagationThroughHierarchy;
-(CGRect)statusBarWindowFrame;
-(void)_rotate;
@end

