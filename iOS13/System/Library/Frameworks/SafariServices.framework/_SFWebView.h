/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <WebKit/WKWebView.h>
#import <libobjc.A.dylib/_SFDialogViewPresenting.h>
#import <libobjc.A.dylib/_SFKillWebContentProcessUIActivityDelegate.h>

@protocol _SFWebViewDelegate;
@class _SFDialogView, UIImageView, NSTimer, UIView, NSString;

@interface _SFWebView : WKWebView <_SFDialogViewPresenting, _SFKillWebContentProcessUIActivityDelegate> {

	_SFDialogView* _dialogView;
	UIImageView* _placeholderView;
	NSTimer* _placeholderViewRemovalTimer;
	double _placeholderOffset;
	long long _navigationGesturePolicy;
	id<_SFWebViewDelegate> _delegate;
	UIView* _clippingView;
	UIEdgeInsets _hitTestInsets;

}

@property (nonatomic,copy,readonly) NSString * evOrganizationName; 
@property (assign,nonatomic) UIEdgeInsets hitTestInsets;                          //@synthesize hitTestInsets=_hitTestInsets - In the implementation block
@property (assign,nonatomic) long long navigationGesturePolicy;                   //@synthesize navigationGesturePolicy=_navigationGesturePolicy - In the implementation block
@property (assign,nonatomic,__weak) id<_SFWebViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * clippingView;                        //@synthesize clippingView=_clippingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<_SFWebViewDelegate>)delegate;
-(void)setDelegate:(id<_SFWebViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(void)safeAreaInsetsDidChange;
-(UIEdgeInsets)hitTestInsets;
-(void)setHitTestInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
-(void)setPlaceholderImage:(id)arg1 ;
-(void)_close;
-(void)setAllowsBackForwardNavigationGestures:(BOOL)arg1 ;
-(id)_enclosingViewForExposedRectComputation;
-(void)_setObscuredInsets:(UIEdgeInsets)arg1 ;
-(void)didStartFormControlInteraction;
-(void)didEndFormControlInteraction;
-(void)safariKillWebContentProcessUIActivityKillWebProcess:(id)arg1 ;
-(NSString *)evOrganizationName;
-(int)webProcessIDForDialogController:(id)arg1 ;
-(void)presentDialogView:(id)arg1 withAdditionalAnimations:(/*^block*/id)arg2 forDialogController:(id)arg3 ;
-(void)dismissDialogView:(id)arg1 withAdditionalAnimations:(/*^block*/id)arg2 forDialogController:(id)arg3 ;
-(void)_updateNavigationGesturesAllowed;
-(void)setPlaceholderImage:(id)arg1 offset:(double)arg2 ;
-(void)setNavigationGesturePolicy:(long long)arg1 ;
-(long long)navigationGesturePolicy;
-(UIView *)clippingView;
-(void)setClippingView:(UIView *)arg1 ;
@end

