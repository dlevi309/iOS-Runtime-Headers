/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIPointerInteractionDriver.h>

@protocol _UIPointerInteractionDriverSink;
@class UIView, _UIPointerInteractionHoverGestureRecognizer, _UIPointerInteractionPressGestureRecognizer, NSString;

@interface _UIPointerInteractionHoverDriver : NSObject <_UIPointerInteractionDriver> {

	id<_UIPointerInteractionDriverSink> _sink;
	_UIPointerInteractionHoverGestureRecognizer* _hoverGestureRecognizer;
	_UIPointerInteractionPressGestureRecognizer* _pressGestureRecognizer;
	SCD_Struct_UI46 _flags;
	UIView* _view;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIView * view;                  //@synthesize view=_view - In the implementation block
-(void)invalidate;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)_handlePressGesture:(id)arg1 ;
-(void)_updateHover:(id)arg1 forced:(BOOL)arg2 ;
-(void)_uninstallFromView:(id)arg1 ;
-(void)_installToView:(id)arg1 ;
-(void)_handleHoverGesture:(id)arg1 ;
-(void)_pointerStateDidChange:(id)arg1 ;
-(id)initWithSink:(id)arg1 ;
@end

