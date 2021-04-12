/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/PKScribbleInteractionDelegate.h>
#import <libobjc.A.dylib/PKScribbleInteractionElementSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _SFNavigationBarURLButtonDelegate;
@class UIVibrancyEffect, UIVisualEffectView, UIView, UIGestureRecognizer, PKScribbleInteraction, _SFNavigationBarTheme, NSString;

@interface _SFNavigationBarURLButton : UIButton <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, UIGestureRecognizerDelegate> {

	UIVibrancyEffect* _highlightedVibrancyEffect;
	UIVibrancyEffect* _vibrancyEffect;
	UIVisualEffectView* _effectView;
	UIView* _effectMask;
	UIGestureRecognizer* _longPressGestureRecognizer;
	PKScribbleInteraction* _pencilScribbleInteraction;
	double _backgroundAlphaFactor;
	_SFNavigationBarTheme* _theme;
	id<_SFNavigationBarURLButtonDelegate> _delegate;
	double _urlOutlineCornerRadius;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)copy:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)_handleLongPress:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_hover:(id)arg1 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(CGPoint)arg2 ;
-(void)pasteAndNavigate:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)_dismissMenu:(id)arg1 ;
-(void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2 ;
-(void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(CGPoint)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2 ;
-(void)_scribbleInteraction:(id)arg1 requestElementsInRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(void)_scribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2 ;
@end

