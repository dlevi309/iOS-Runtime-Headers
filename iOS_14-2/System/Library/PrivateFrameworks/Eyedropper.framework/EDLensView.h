/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Eyedropper.framework/Eyedropper
*/

#import <Eyedropper/Eyedropper-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIDragInteractionDelegate.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@protocol EDLensViewDelegate;
@class UIView, EDGridView, CADisplayLink, EDColorAnalyzer, UIPointerInteraction, NSString;

@interface EDLensView : UIView <UIDragInteractionDelegate, UIPointerInteractionDelegate> {

	UIView* _hoverColorCenterView;
	UIView* _hoverColorRingView;
	EDGridView* _gridView;
	UIView* _screenshotSurfaceView;
	UIView* _ringBorderView;
	long long _lensState;
	CADisplayLink* _displayLink;
	EDColorAnalyzer* _colorAnalyzer;
	BOOL _shouldChangeAlphaWhenDismissing;
	EDColor _hoverColor;
	double _hoverColorBrightness;
	CGPoint _centerOffsetAtTouchDown;
	UIPointerInteraction* _pointerInteraction;
	BOOL _floatingMode;
	long long _interfaceOrientation;
	id<EDLensViewDelegate> _delegate;
	CGPoint _lastPosition;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<EDLensViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                      //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL floatingMode;                                   //@synthesize floatingMode=_floatingMode - In the implementation block
@property (assign,nonatomic) CGPoint lastPosition;                                //@synthesize lastPosition=_lastPosition - In the implementation block
-(id)accessibilityLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(id<EDLensViewDelegate>)delegate;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(unsigned long long)accessibilityTraits;
-(void)setDelegate:(id<EDLensViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)accessibilityValue;
-(long long)interfaceOrientation;
-(long long)_lensPosition;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(void)dismiss;
-(CGPoint)lastPosition;
-(void)_displayLinkFired;
-(void)setFloatingMode:(BOOL)arg1 ;
-(void)updateCenterOffsetAtTouchDown:(CGPoint)arg1 ;
-(void)presentAtLocation:(CGPoint)arg1 ;
-(void)updateLensViewWithEvent:(id)arg1 ;
-(id)dragItemsForInteraction:(id)arg1 ;
-(void)updateLensState:(long long)arg1 ;
-(void)tappedCenter:(id)arg1 ;
-(void)_layoutStaticElements;
-(BOOL)floatingMode;
-(void)_dismissAndRemoveAlpha:(BOOL)arg1 ;
-(CGPoint)_lensViewLocalCenter;
-(BOOL)_isScreenScaleEven;
-(void)setLastPosition:(CGPoint)arg1 ;
@end

