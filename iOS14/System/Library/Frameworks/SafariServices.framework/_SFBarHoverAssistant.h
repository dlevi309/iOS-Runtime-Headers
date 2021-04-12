/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/_SFDynamicBarAnimatorStateObserver.h>

@protocol _SFBarCommon;
@class UIHoverGestureRecognizer, UIView, _SFDynamicBarAnimator, NSString;

@interface _SFBarHoverAssistant : NSObject <_SFDynamicBarAnimatorStateObserver> {

	UIHoverGestureRecognizer* _hoverRecognizer;
	BOOL _didShowBarFromHover;
	UIView*<_SFBarCommon> _bar;
	_SFDynamicBarAnimator* _dynamicBarAnimator;
	UIView* _containerView;

}

@property (nonatomic,__weak,readonly) UIView*<_SFBarCommon> bar;                               //@synthesize bar=_bar - In the implementation block
@property (nonatomic,__weak,readonly) _SFDynamicBarAnimator * dynamicBarAnimator;              //@synthesize dynamicBarAnimator=_dynamicBarAnimator - In the implementation block
@property (nonatomic,__weak,readonly) UIView * containerView;                                  //@synthesize containerView=_containerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)attachToBar:(id)arg1 withAnimator:(id)arg2 inContainerView:(id)arg3 ;
-(UIView*<_SFBarCommon>)bar;
-(void)_hover:(id)arg1 ;
-(_SFDynamicBarAnimator *)dynamicBarAnimator;
-(UIView *)containerView;
-(id)initWithBar:(id)arg1 withAnimator:(id)arg2 inContainerView:(id)arg3 ;
-(void)dynamicBarAnimatorStateDidChange:(id)arg1 ;
-(void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1 ;
-(BOOL)_gestureIsOverBar;
@end

