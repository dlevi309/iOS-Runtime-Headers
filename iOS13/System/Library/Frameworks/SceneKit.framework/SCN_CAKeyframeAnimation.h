/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <QuartzCore/CAKeyframeAnimation.h>

@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation {

	C3DKeyframedAnimationRef _c3dAnimation;
	BOOL _caReady;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setValues:(id)arg1 ;
-(id)values;
-(id)keyPath;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)timingFunction;
-(void)setTimingFunction:(id)arg1 ;
-(float)speed;
-(void)setSpeed:(float)arg1 ;
-(BOOL)isAdditive;
-(void)setFillMode:(id)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(void)setAutoreverses:(BOOL)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(double)timeOffset;
-(void)setKeyPath:(id)arg1 ;
-(void)setRemovedOnCompletion:(BOOL)arg1 ;
-(void)setKeyTimes:(id)arg1 ;
-(void)setAdditive:(BOOL)arg1 ;
-(void)setTimingFunctions:(id)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(id)keyTimes;
-(void)setTensionValues:(id)arg1 ;
-(BOOL)autoreverses;
-(float)repeatCount;
-(double)repeatDuration;
-(id)fillMode;
-(void)setRepeatDuration:(double)arg1 ;
-(BOOL)additive;
-(BOOL)isRemovedOnCompletion;
-(id)timingFunctions;
-(id)tensionValues;
-(id)continuityValues;
-(void)setContinuityValues:(id)arg1 ;
-(id)biasValues;
-(void)setBiasValues:(id)arg1 ;
-(BOOL)isCumulative;
-(void)setCumulative:(BOOL)arg1 ;
-(BOOL)cumulative;
-(void)setUsesSceneTimeBase:(BOOL)arg1 ;
-(BOOL)usesSceneTimeBase;
-(void)setC3dAnimation:(C3DKeyframedAnimationRef)arg1 ;
-(void)_convertToCA;
-(void)_clearC3DCache;
-(void)setCommitsOnCompletion:(BOOL)arg1 ;
-(BOOL)commitsOnCompletion;
-(void)setAnimationEvents:(id)arg1 ;
-(id)animationEvents;
-(C3DKeyframedAnimationRef)c3dAnimation;
@end

