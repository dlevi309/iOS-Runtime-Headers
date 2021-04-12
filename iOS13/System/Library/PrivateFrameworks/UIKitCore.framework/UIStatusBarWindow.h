/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindow.h>

@class UIStatusBar;

@interface UIStatusBarWindow : UIWindow {

	UIStatusBar* _statusBar;
	long long _orientation;

}
+(BOOL)_isSystemWindow;
+(CGRect)_defaultStatusBarSceneReferenceBoundsForOrientation:(long long)arg1 ;
+(CGRect)_defaultStatusBarSceneReferenceBounds;
+(CGRect)_convertRect:(CGRect)arg1 fromSceneReferenceSpaceToSceneSpaceWithOrientation:(long long)arg2 ;
+(CGRect)_defaultStatusBarSceneBounds;
+(CGRect)statusBarWindowFrame;
-(long long)orientation;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_isStatusBarWindow;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg1 ;
-(void)setStatusBar:(id)arg1 ;
-(void)setOrientation:(long long)arg1 animationParameters:(id)arg2 ;
-(BOOL)_disableGroupOpacity;
-(BOOL)_shouldAdjustSizeClassesAndResizeWindow;
-(void)_didMoveFromScene:(id)arg1 toScene:(id)arg2 ;
-(BOOL)_shouldForceTraitPropagationThroughHierarchy;
-(CGRect)_defaultStatusBarSceneBoundsForOrientation:(long long)arg1 ;
-(void)_rotate;
-(CGRect)statusBarWindowFrame;
-(CGRect)_statusBarFrameForOrientation:(long long)arg1 ;
@end

