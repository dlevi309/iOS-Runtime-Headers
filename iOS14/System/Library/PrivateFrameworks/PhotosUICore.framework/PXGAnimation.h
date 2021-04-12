/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXGAnimationDelegate;
@class NSDictionary, PXGLayout, PXGTransition, CASpringAnimation;

@interface PXGAnimation : NSObject {

	BOOL _supportsSpriteTransfer;
	BOOL _isDoubleSided;
	BOOL _supportsPresentationAdjustment;
	float _dampingRatio;
	float _springAnimationInitialProgress;
	float _springAnimationProgressMultiplier;
	double _duration;
	long long _curve;
	long long _numberOfOscillations;
	double _maximumDistance;
	long long _scope;
	id<PXGAnimationDelegate> _delegate;
	NSDictionary* _userData;
	PXGLayout* _layout;
	PXGTransition* _transition;
	CASpringAnimation* _springAnimation;

}

@property (nonatomic,__weak,readonly) PXGLayout * layout;                            //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) double effectiveDuration; 
@property (assign,nonatomic,__weak) PXGTransition * transition;                      //@synthesize transition=_transition - In the implementation block
@property (nonatomic,retain) CASpringAnimation * springAnimation;                    //@synthesize springAnimation=_springAnimation - In the implementation block
@property (assign,nonatomic) float springAnimationInitialProgress;                   //@synthesize springAnimationInitialProgress=_springAnimationInitialProgress - In the implementation block
@property (assign,nonatomic) float springAnimationProgressMultiplier;                //@synthesize springAnimationProgressMultiplier=_springAnimationProgressMultiplier - In the implementation block
@property (assign,nonatomic) double duration;                                        //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long curve;                                        //@synthesize curve=_curve - In the implementation block
@property (assign,nonatomic) float dampingRatio;                                     //@synthesize dampingRatio=_dampingRatio - In the implementation block
@property (assign,nonatomic) long long numberOfOscillations;                         //@synthesize numberOfOscillations=_numberOfOscillations - In the implementation block
@property (assign,nonatomic) double maximumDistance;                                 //@synthesize maximumDistance=_maximumDistance - In the implementation block
@property (assign,nonatomic) BOOL supportsSpriteTransfer;                            //@synthesize supportsSpriteTransfer=_supportsSpriteTransfer - In the implementation block
@property (assign,setter=setDoubleSided:,nonatomic) BOOL isDoubleSided;              //@synthesize isDoubleSided=_isDoubleSided - In the implementation block
@property (assign,nonatomic) BOOL supportsPresentationAdjustment;                    //@synthesize supportsPresentationAdjustment=_supportsPresentationAdjustment - In the implementation block
@property (assign,nonatomic) long long scope;                                        //@synthesize scope=_scope - In the implementation block
@property (nonatomic,retain) id<PXGAnimationDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * userData;                                //@synthesize userData=_userData - In the implementation block
-(long long)curve;
-(id)initWithLayout:(id)arg1 ;
-(void)setScope:(long long)arg1 ;
-(long long)scope;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(id<PXGAnimationDelegate>)delegate;
-(BOOL)supportsSpriteTransfer;
-(void)setMaximumDistance:(double)arg1 ;
-(float)springAnimationInitialProgress;
-(NSDictionary *)userData;
-(long long)numberOfOscillations;
-(BOOL)supportsPresentationAdjustment;
-(void)setDelegate:(id<PXGAnimationDelegate>)arg1 ;
-(id)description;
-(double)effectiveDuration;
-(double)maximumDistance;
-(BOOL)isDoubleSided;
-(void)setTransition:(PXGTransition *)arg1 ;
-(void)setSpringAnimationProgressMultiplier:(float)arg1 ;
-(float)dampingRatio;
-(void)setSupportsSpriteTransfer:(BOOL)arg1 ;
-(void)setUserData:(NSDictionary *)arg1 ;
-(void)setSpringAnimation:(CASpringAnimation *)arg1 ;
-(void)noteDidComplete;
-(void)setSupportsPresentationAdjustment:(BOOL)arg1 ;
-(double)duration;
-(void)setCurve:(long long)arg1 ;
-(float)springAnimationProgressMultiplier;
-(PXGTransition *)transition;
-(void)setSpringAnimationInitialProgress:(float)arg1 ;
-(void)setDoubleSided:(BOOL)arg1 ;
-(CASpringAnimation *)springAnimation;
-(void)setNumberOfOscillations:(long long)arg1 ;
-(void)setDampingRatio:(float)arg1 ;
-(PXGLayout *)layout;
@end

