/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(UIImageView *)imageView;
-(void)setButtonBehavior:(unsigned long long)arg1 ;
-(id)_expandAnimation;
-(unsigned long long)buttonBehavior;
-(id)_activityIndicatorView;
-(id)_contentAnimation;
-(void)_updateState;
-(id<MKUserTrackingView>)userTrackingView;
-(void)setUserTrackingView:(id<MKUserTrackingView>)arg1 ;
-(BOOL)_shouldAnimateFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)_updatePreferredSymbolConfiguration;
-(void)_updateLoading;
-(void)_goToNextMode:(id)arg1 ;
-(void)_authorizationStatusChanged:(id)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4 ;
-(void)_reloadState;
-(void)dealloc;
-(id)_shrinkAnimation;
-(id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2 ;
@end

