/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/SCNAnimation.h>

@protocol SCNAnimation <NSObject>
@end

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, SCNTimingFunction, NSArray, NSMutableDictionary;

@interface SCNAnimation : NSObject <SCNAnimation, NSCopying, NSSecureCoding> {

	C3DAnimationRef _animationRef;
	NSString* _keyPath;
	double _duration;
	double _repeatCount;
	double _timeOffset;
	double _beginTime;
	BOOL _autoreverses;
	BOOL _removedOnCompletion;
	BOOL _applyOnCompletion;
	BOOL _additive;
	BOOL _cumulative;
	BOOL _usesSceneTimeBase;
	BOOL _fillForward;
	BOOL _fillBackward;
	SCNTimingFunction* _timingFunction;
	NSArray* _animationEvents;
	double _fadeInDuration;
	double _fadeOutDuration;
	/*^block*/id _animationDidStart;
	/*^block*/id _animationDidStop;
	NSMutableDictionary* _userInfo;
	id _caAnimationCache;
	id _userAnimation;
	BOOL _didMutate;

}

@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) NSString * keyPath; 
@property (nonatomic,retain) SCNTimingFunction * timingFunction; 
@property (assign,nonatomic) double blendInDuration; 
@property (assign,nonatomic) double blendOutDuration; 
@property (assign,getter=isRemovedOnCompletion,nonatomic) BOOL removedOnCompletion; 
@property (assign,getter=isAppliedOnCompletion,nonatomic) BOOL appliedOnCompletion; 
@property (assign,nonatomic) double repeatCount; 
@property (assign,nonatomic) BOOL autoreverses; 
@property (assign,nonatomic) double startDelay; 
@property (assign,nonatomic) double timeOffset; 
@property (assign,nonatomic) BOOL fillsForward; 
@property (assign,nonatomic) BOOL fillsBackward; 
@property (assign,nonatomic) BOOL usesSceneTimeBase; 
@property (nonatomic,copy) id animationDidStart; 
@property (nonatomic,copy) id animationDidStop; 
@property (nonatomic,copy) NSArray * animationEvents; 
@property (assign,getter=isAdditive,nonatomic) BOOL additive; 
@property (assign,getter=isCumulative,nonatomic) BOOL cumulative; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)animationWithCAAnimation:(id)arg1 ;
+(id)animationWithMDLTransform:(id)arg1 ;
+(id)animationNamed:(id)arg1 ;
+(id)animationWithC3DAnimation:(C3DAnimationRef)arg1 ;
+(id)animationWithContentsOfURL:(id)arg1 ;
+(id)animationFromScene:(id)arg1 ;
-(double)repeatCount;
-(double)repeatDuration;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setDuration:(double)arg1 ;
-(void)setRepeatDuration:(double)arg1 ;
-(double)timeOffset;
-(void)setTimingFunction:(SCNTimingFunction *)arg1 ;
-(void)setRepeatCount:(double)arg1 ;
-(void)setAutoreverses:(BOOL)arg1 ;
-(BOOL)autoreverses;
-(void)setTimeOffset:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)fadeOutDuration;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setAdditive:(BOOL)arg1 ;
-(SCNTimingFunction *)timingFunction;
-(id)subAnimations;
-(void)setFadeInDuration:(double)arg1 ;
-(NSString *)description;
-(void)_didMutate;
-(void)setRemovedOnCompletion:(BOOL)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(double)startDelay;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRemovedOnCompletion;
-(NSString *)keyPath;
-(BOOL)isCumulative;
-(void)setCumulative:(BOOL)arg1 ;
-(BOOL)isAdditive;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setStartDelay:(double)arg1 ;
-(id)caAnimation;
-(void)setFillsForward:(BOOL)arg1 ;
-(void)setFillsBackward:(BOOL)arg1 ;
-(void)setBlendInDuration:(double)arg1 ;
-(void)setUsesSceneTimeBase:(BOOL)arg1 ;
-(void)_optimizeKeyframesWithTarget:(id)arg1 ;
-(const void*)__CFObject;
-(id)userAnimation;
-(void)prepareWithTarget:(id)arg1 implicitDuration:(double)arg2 ;
-(BOOL)usesSceneTimeBase;
-(void)_syncObjCModel;
-(C3DAnimationRef)animationRef;
-(void)setAnimationEvents:(NSArray *)arg1 ;
-(NSArray *)animationEvents;
-(void)_setAnimationRef:(C3DAnimationRef)arg1 ;
-(id)initWithC3DAnimation:(C3DAnimationRef)arg1 ;
-(BOOL)isAppliedOnCompletion;
-(BOOL)fillsForward;
-(BOOL)fillsBackward;
-(void)setAppliedOnCompletion:(BOOL)arg1 ;
-(id)initWithCAAnimation:(id)arg1 ;
-(void)setBlendOutDuration:(double)arg1 ;
-(id)animationDidStart;
-(void)setAnimationDidStart:(id)arg1 ;
-(id)animationDidStop;
-(void)setAnimationDidStop:(id)arg1 ;
-(double)blendInDuration;
-(double)blendOutDuration;
@end

