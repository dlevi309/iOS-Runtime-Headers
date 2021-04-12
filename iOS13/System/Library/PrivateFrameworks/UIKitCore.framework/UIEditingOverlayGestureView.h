/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIEventObserver.h>

@class UIWindow, NSString;

@interface UIEditingOverlayGestureView : UIView <_UIEventObserver> {

	UIWindow* _previousWindow;

}

@property (assign,nonatomic,__weak) UIWindow * previousWindow;              //@synthesize previousWindow=_previousWindow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(BOOL)_isTransparentFocusRegion;
-(int)textEffectsVisibilityLevel;
-(id)_gestureRecognizersForEvent:(id)arg1 ;
-(UIWindow *)previousWindow;
-(void)setPreviousWindow:(UIWindow *)arg1 ;
@end

