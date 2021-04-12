/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRootWindow.h>

@class UISystemGestureView;

@interface _UISystemGestureWindow : _UIRootWindow {

	UISystemGestureView* _systemGestureView;

}
+(BOOL)_isSecure;
-(id)initWithDisplayConfiguration:(id)arg1 ;
-(BOOL)_extendsScreenSceneLifetime;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)_canBecomeKeyWindow;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldPrepareScreenForWindow;
-(id)_focusResponder;
-(id)initWithScreen:(id)arg1 ;
-(id)initWithDisplay:(id)arg1 ;
-(id)_systemGestureView;
-(BOOL)_appearsInLoupe;
@end

