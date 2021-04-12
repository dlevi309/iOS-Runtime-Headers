/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIButton.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _SFNavigationBarURLButtonDelegate;
@class UIVibrancyEffect, UIVisualEffectView, UIView, UIGestureRecognizer, _SFNavigationBarTheme, NSString;

@interface _SFNavigationBarURLButton : UIButton <UIGestureRecognizerDelegate> {

	UIVibrancyEffect* _highlightedVibrancyEffect;
	UIVibrancyEffect* _vibrancyEffect;
	UIVisualEffectView* _effectView;
	UIView* _effectMask;
	UIGestureRecognizer* _longPressGestureRecognizer;
	double _backgroundAlphaFactor;
	_SFNavigationBarTheme* _theme;
	id<_SFNavigationBarURLButtonDelegate> _delegate;
	double _urlOutlineCornerRadius;

}

@property (assign,nonatomic) double backgroundAlphaFactor;                                                 //@synthesize backgroundAlphaFactor=_backgroundAlphaFactor - In the implementation block
@property (nonatomic,retain) _SFNavigationBarTheme * theme;                                                //@synthesize theme=_theme - In the implementation block
@property (assign,nonatomic,__weak) id<_SFNavigationBarURLButtonDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=setURLOutlineCornerRadius:,nonatomic) double urlOutlineCornerRadius;              //@synthesize urlOutlineCornerRadius=_urlOutlineCornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<_SFNavigationBarURLButtonDelegate>)delegate;
-(void)setDelegate:(id<_SFNavigationBarURLButtonDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)copy:(id)arg1 ;
-(void)_handleLongPress:(id)arg1 ;
-(_SFNavigationBarTheme *)theme;
-(void)setTheme:(_SFNavigationBarTheme *)arg1 ;
-(id)_accessibilityQuickSpeakContent;
-(void)_hover:(id)arg1 ;
-(void)_dismissMenu:(id)arg1 ;
-(void)_updateEffectView;
-(void)_updateBackgroundImageAnimated:(BOOL)arg1 ;
-(void)pasteAndNavigate:(id)arg1 ;
-(void)setURLOutlineCornerRadius:(double)arg1 ;
-(void)setBackgroundAlphaFactor:(double)arg1 ;
-(double)backgroundAlphaFactor;
-(double)urlOutlineCornerRadius;
@end

