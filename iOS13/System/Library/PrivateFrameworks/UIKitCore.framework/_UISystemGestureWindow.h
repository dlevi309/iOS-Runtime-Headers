/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRootWindow.h>

@class UISystemGestureView;

@interface _UISystemGestureWindow : _UIRootWindow {

	UISystemGestureView* _systemGestureView;

}
+(BOOL)_isSecure;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_extendsScreenSceneLifetime;
-(id)_focusResponder;
-(id)initWithScreen:(id)arg1 ;
-(id)initWithDisplay:(id)arg1 ;
-(id)initWithDisplayConfiguration:(id)arg1 ;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)_appearsInLoupe;
-(BOOL)_shouldPrepareScreenForWindow;
-(BOOL)_canBecomeKeyWindow;
-(id)_systemGestureView;
@end

