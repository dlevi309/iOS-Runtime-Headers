/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <QuartzCore/CAKeyframeAnimation.h>

@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation {

	C3DKeyframedAnimationRef _c3dAnimation;
	BOOL _caReady;

}
+(BOOL)supportsSecureCoding;
-(float)repeatCount;
-(double)repeatDuration;
-(void)setSpeed:(float)arg1 ;
-(BOOL)additive;
-(void)setDuration:(double)arg1 ;
-(void)setRepeatDuration:(double)arg1 ;
-(double)timeOffset;
-(id)fillMode;
-(void)setFillMode:(id)arg1 ;
-(float)speed;
-(void)setTimingFunction:(id)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(id)values;
-(void)setAutoreverses:(BOOL)arg1 ;
-(BOOL)autoreverses;
-(void)setTimeOffset:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)fadeOutDuration;
-(void)setTensionValues:(id)arg1 ;
-(void)setAdditive:(BOOL)arg1 ;
-(id)timingFunction;
-(id)keyTimes;
-(void)setValues:(id)arg1 ;
-(void)setTimingFunctions:(id)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(id)description;
-(void)setRemovedOnCompletion:(BOOL)arg1 ;
-(void)setKeyPath:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRemovedOnCompletion;
-(id)keyPath;
-(id)tensionValues;
-(id)timingFunctions;
-(id)continuityValues;
-(void)setContinuityValues:(id)arg1 ;
-(void)setBiasValues:(id)arg1 ;
-(BOOL)isCumulative;
-(void)setCumulative:(BOOL)arg1 ;
-(BOOL)isAdditive;
-(void)setKeyTimes:(id)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(id)biasValues;
-(BOOL)cumulative;
-(double)fadeInDuration;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
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

