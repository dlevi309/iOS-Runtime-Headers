/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UISlidingBarStateRequest, _UIPanelCoordinatingAnimator;

@interface _UIPanelAnimationState : NSObject {

	BOOL _isFinishingAnimation;
	BOOL _shouldAssignOffscreenWidthsToStateRequest;
	BOOL _animatorShouldCoordinate;
	UISlidingBarStateRequest* _fromRequest;
	UISlidingBarStateRequest* _toRequest;
	double _progress;
	long long _affectedSides;
	_UIPanelCoordinatingAnimator* _animator;

}

@property (nonatomic,copy) UISlidingBarStateRequest * fromRequest;                                 //@synthesize fromRequest=_fromRequest - In the implementation block
@property (nonatomic,copy) UISlidingBarStateRequest * toRequest;                                   //@synthesize toRequest=_toRequest - In the implementation block
@property (assign,nonatomic) double progress;                                                      //@synthesize progress=_progress - In the implementation block
@property (assign,setter=setFinishingAnimation:,nonatomic) BOOL isFinishingAnimation;              //@synthesize isFinishingAnimation=_isFinishingAnimation - In the implementation block
@property (assign,nonatomic) long long affectedSides;                                              //@synthesize affectedSides=_affectedSides - In the implementation block
@property (assign,nonatomic) BOOL shouldAssignOffscreenWidthsToStateRequest;                       //@synthesize shouldAssignOffscreenWidthsToStateRequest=_shouldAssignOffscreenWidthsToStateRequest - In the implementation block
@property (nonatomic,readonly) UISlidingBarStateRequest * stateRequest; 
@property (nonatomic,retain) _UIPanelCoordinatingAnimator * animator;                              //@synthesize animator=_animator - In the implementation block
@property (assign,nonatomic) BOOL animatorShouldCoordinate;                                        //@synthesize animatorShouldCoordinate=_animatorShouldCoordinate - In the implementation block
+(id)timingCurveProvider;
+(id)timingCurveProviderWithVelocity:(double)arg1 ;
+(double)defaultDuration;
-(_UIPanelCoordinatingAnimator *)animator;
-(void)setAnimator:(_UIPanelCoordinatingAnimator *)arg1 ;
-(double)progress;
-(UISlidingBarStateRequest *)toRequest;
-(BOOL)isFinishingAnimation;
-(void)setFinishingAnimation:(BOOL)arg1 ;
-(BOOL)animatorShouldCoordinate;
-(BOOL)shouldAssignOffscreenWidthsToStateRequest;
-(void)setShouldAssignOffscreenWidthsToStateRequest:(BOOL)arg1 ;
-(void)setAnimatorShouldCoordinate:(BOOL)arg1 ;
-(id)description;
-(void)setProgress:(double)arg1 ;
-(UISlidingBarStateRequest *)fromRequest;
-(UISlidingBarStateRequest *)stateRequest;
-(void)setToRequest:(UISlidingBarStateRequest *)arg1 ;
-(long long)affectedSides;
-(void)setAffectedSides:(long long)arg1 ;
-(void)setFromRequest:(UISlidingBarStateRequest *)arg1 ;
@end

