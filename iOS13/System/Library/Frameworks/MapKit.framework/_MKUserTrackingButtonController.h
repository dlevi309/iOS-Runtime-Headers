/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol MKUserTrackingButtonTarget, MKUserTrackingView;
@class UIImageView, _MKUserTrackingButton, UIActivityIndicatorView, NSString;

@interface _MKUserTrackingButtonController : NSObject <CAAnimationDelegate> {

	id<MKUserTrackingButtonTarget> _target;
	id<MKUserTrackingView> _userTrackingView;
	long long _state;
	UIImageView* _imageView;
	_MKUserTrackingButton* _button;
	UIActivityIndicatorView* _activityIndicatorView;
	unsigned long long _buttonBehavior;

}

@property (assign,nonatomic,__weak) id<MKUserTrackingView> userTrackingView;              //@synthesize userTrackingView=_userTrackingView - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                   //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) long long state;                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long buttonBehavior;                           //@synthesize buttonBehavior=_buttonBehavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(UIImageView *)imageView;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)_updateState;
-(id)_activityIndicatorView;
-(void)_goToNextMode:(id)arg1 ;
-(id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(id<MKUserTrackingView>)userTrackingView;
-(void)setUserTrackingView:(id<MKUserTrackingView>)arg1 ;
-(void)_authorizationStatusChanged:(id)arg1 ;
-(void)_updatePreferredSymbolConfiguration;
-(BOOL)_shouldAnimateFromState:(long long)arg1 toState:(long long)arg2 ;
-(id)_shrinkAnimation;
-(id)_contentAnimation;
-(void)_reloadState;
-(void)_updateLoading;
-(unsigned long long)buttonBehavior;
-(id)_expandAnimation;
-(id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4 ;
-(void)setButtonBehavior:(unsigned long long)arg1 ;
@end

