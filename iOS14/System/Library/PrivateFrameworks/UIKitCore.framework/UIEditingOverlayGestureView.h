/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_isTransparentFocusRegion;
-(int)textEffectsVisibilityLevel;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_gestureRecognizersForEvent:(id)arg1 ;
-(void)didMoveToWindow;
-(void)setPreviousWindow:(UIWindow *)arg1 ;
-(UIWindow *)previousWindow;
@end

