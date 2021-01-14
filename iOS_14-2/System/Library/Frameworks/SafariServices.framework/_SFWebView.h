/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	UIView* _contentObscuringView;
	BOOL _obscuringContents;
	BOOL _hasBeenInWindow;
	long long _navigationGesturePolicy;
	id<_SFWebViewDelegate> _delegate;
	UIView* _clippingView;
	UIEdgeInsets _hitTestInsets;

}

@property (nonatomic,copy,readonly) NSString * evOrganizationName; 
@property (assign,nonatomic) UIEdgeInsets hitTestInsets;                                     //@synthesize hitTestInsets=_hitTestInsets - In the implementation block
@property (assign,nonatomic) long long navigationGesturePolicy;                              //@synthesize navigationGesturePolicy=_navigationGesturePolicy - In the implementation block
@property (assign,nonatomic,__weak) id<_SFWebViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * clippingView;                                   //@synthesize clippingView=_clippingView - In the implementation block
@property (assign,getter=isObscuringContents,nonatomic) BOOL obscuringContents;              //@synthesize obscuringContents=_obscuringContents - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenInWindow;                                         //@synthesize hasBeenInWindow=_hasBeenInWindow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_close;
-(BOOL)becomeFirstResponder;
-(id<_SFWebViewDelegate>)delegate;
-(int)webProcessIDForDialogController:(id)arg1 ;
-(void)didStartFormControlInteraction;
-(void)presentDialogView:(id)arg1 withAdditionalAnimations:(/*^block*/id)arg2 forDialogController:(id)arg3 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setSuggestedFilenameForCurrentBackForwardListItem:(id)arg1 ;
-(BOOL)isObscuringContents;
-(UIEdgeInsets)hitTestInsets;
-(void)_updateNavigationGesturesAllowed;
-(void)safariKillWebContentProcessUIActivityKillWebProcess:(id)arg1 ;
-(UIView *)clippingView;
-(void)setDelegate:(id<_SFWebViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
-(BOOL)hasBeenInWindow;
-(void)didMoveToWindow;
-(NSString *)evOrganizationName;
-(long long)navigationGesturePolicy;
-(void)dismissDialogView:(id)arg1 withAdditionalAnimations:(/*^block*/id)arg2 forDialogController:(id)arg3 ;
-(void)safeAreaInsetsDidChange;
-(void)didEndFormControlInteraction;
-(void)setObscuringContents:(BOOL)arg1 ;
-(void)setHitTestInsets:(UIEdgeInsets)arg1 ;
-(BOOL)webui_canPromptForAccountSecurityRecommendation;
-(void)setPlaceholderImage:(id)arg1 ;
-(void)setAllowsBackForwardNavigationGestures:(BOOL)arg1 ;
-(void)setNavigationGesturePolicy:(long long)arg1 ;
-(id)_enclosingViewForExposedRectComputation;
-(void)setClippingView:(UIView *)arg1 ;
-(void)setPlaceholderImage:(id)arg1 offset:(double)arg2 ;
-(void)dealloc;
-(void)_setObscuredInsets:(UIEdgeInsets)arg1 ;
@end

