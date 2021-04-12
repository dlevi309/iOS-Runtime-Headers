/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UISlidingBarStateRequest, UIViewPropertyAnimator;

@interface _UIPanelAnimationState : NSObject {

	UISlidingBarStateRequest* _fromRequest;
	UISlidingBarStateRequest* _toRequest;
	double _progress;
	long long _affectedSides;
	UIViewPropertyAnimator* _animator;

}

@property (nonatomic,copy) UISlidingBarStateRequest * fromRequest;                   //@synthesize fromRequest=_fromRequest - In the implementation block
@property (nonatomic,copy) UISlidingBarStateRequest * toRequest;                     //@synthesize toRequest=_toRequest - In the implementation block
@property (assign,nonatomic) double progress;                                        //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long affectedSides;                                //@synthesize affectedSides=_affectedSides - In the implementation block
@property (nonatomic,readonly) UISlidingBarStateRequest * stateRequest; 
@property (nonatomic,retain) UIViewPropertyAnimator * animator;                      //@synthesize animator=_animator - In the implementation block
+(id)timingCurveProvider;
+(double)defaultDuration;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UISlidingBarStateRequest *)fromRequest;
-(UISlidingBarStateRequest *)toRequest;
-(UISlidingBarStateRequest *)stateRequest;
-(void)setFromRequest:(UISlidingBarStateRequest *)arg1 ;
-(void)setToRequest:(UISlidingBarStateRequest *)arg1 ;
-(long long)affectedSides;
-(void)setAffectedSides:(long long)arg1 ;
-(UIViewPropertyAnimator *)animator;
@end

