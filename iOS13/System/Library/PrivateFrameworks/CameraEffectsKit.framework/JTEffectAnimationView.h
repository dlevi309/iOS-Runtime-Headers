/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class JTEffectFrame, PCMatrix44Double, NSString;

@interface JTEffectAnimationView : UIView <CAAnimationDelegate> {

	BOOL _animationDidBegin;
	BOOL _animationDidEnd;
	JTEffectFrame* _effectFrame;
	JTEffectFrame* _toEffectFrame;
	PCMatrix44Double* _fromTransform;
	PCMatrix44Double* _toTransform;
	JTEffectFrame* _fromEffectFrame;
	/*^block*/id _animationCompletedBlock;

}

@property (assign,nonatomic) BOOL animationDidBegin;                         //@synthesize animationDidBegin=_animationDidBegin - In the implementation block
@property (assign,nonatomic) BOOL animationDidEnd;                           //@synthesize animationDidEnd=_animationDidEnd - In the implementation block
@property (nonatomic,retain) JTEffectFrame * fromEffectFrame;                //@synthesize fromEffectFrame=_fromEffectFrame - In the implementation block
@property (nonatomic,retain) JTEffectFrame * toEffectFrame;                  //@synthesize toEffectFrame=_toEffectFrame - In the implementation block
@property (nonatomic,retain) PCMatrix44Double * fromTransform;               //@synthesize fromTransform=_fromTransform - In the implementation block
@property (nonatomic,retain) PCMatrix44Double * toTransform;                 //@synthesize toTransform=_toTransform - In the implementation block
@property (nonatomic,copy) id animationCompletedBlock;                       //@synthesize animationCompletedBlock=_animationCompletedBlock - In the implementation block
@property (nonatomic,readonly) JTEffectFrame * effectFrame;                  //@synthesize effectFrame=_effectFrame - In the implementation block
@property (nonatomic,readonly) CATransform3D animatedTransform; 
@property (nonatomic,readonly) double fractionComplete; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)fractionComplete;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(PCMatrix44Double *)fromTransform;
-(PCMatrix44Double *)toTransform;
-(void)setFromTransform:(PCMatrix44Double *)arg1 ;
-(void)setToTransform:(PCMatrix44Double *)arg1 ;
-(void)setFromEffectFrame:(JTEffectFrame *)arg1 ;
-(void)setToEffectFrame:(JTEffectFrame *)arg1 ;
-(void)setAnimationDidBegin:(BOOL)arg1 ;
-(void)setAnimationCompletedBlock:(id)arg1 ;
-(void)setAnimationDidEnd:(BOOL)arg1 ;
-(id)animationCompletedBlock;
-(id)initWithEffectFrame:(id)arg1 toEffectFrame:(id)arg2 fromTransform:(id)arg3 toTransform:(id)arg4 ;
-(void)animateTransform:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CATransform3D)animatedTransform;
-(JTEffectFrame *)effectFrame;
-(JTEffectFrame *)toEffectFrame;
-(BOOL)animationDidBegin;
-(BOOL)animationDidEnd;
-(JTEffectFrame *)fromEffectFrame;
@end

