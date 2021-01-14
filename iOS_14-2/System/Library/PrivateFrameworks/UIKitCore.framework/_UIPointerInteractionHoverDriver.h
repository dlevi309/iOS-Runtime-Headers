/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	struct {
		BOOL invalid;
		BOOL receivedUpdateWhilePointerDisabled;
		BOOL observing;
	}  _flags;
	UIView* _view;

}

@property (assign,nonatomic,__weak) UIView * view;                  //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateHover:(id)arg1 forced:(BOOL)arg2 ;
-(void)_pointerStateDidChange:(id)arg1 ;
-(void)_handlePressGesture:(id)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(id)initWithSink:(id)arg1 ;
-(void)_handleHoverGesture:(id)arg1 ;
-(UIView *)view;
-(void)_installToView:(id)arg1 ;
-(void)_uninstallFromView:(id)arg1 ;
-(void)invalidate;
@end

