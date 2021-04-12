/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyPath;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(SCNTimingFunction *)timingFunction;
-(void)setTimingFunction:(SCNTimingFunction *)arg1 ;
-(BOOL)isAdditive;
-(void)setTimeOffset:(double)arg1 ;
-(void)setAutoreverses:(BOOL)arg1 ;
-(void)setRepeatCount:(double)arg1 ;
-(double)timeOffset;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)setRemovedOnCompletion:(BOOL)arg1 ;
-(void)setAdditive:(BOOL)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(BOOL)autoreverses;
-(double)repeatCount;
-(double)repeatDuration;
-(void)setRepeatDuration:(double)arg1 ;
-(BOOL)isRemovedOnCompletion;
-(BOOL)isCumulative;
-(void)setCumulative:(BOOL)arg1 ;
-(void)_didMutate;
-(void)setStartDelay:(double)arg1 ;
-(double)startDelay;
-(void)setUsesSceneTimeBase:(BOOL)arg1 ;
-(const void*)__CFObject;
-(id)userAnimation;
-(void)prepareWithTarget:(id)arg1 implicitDuration:(double)arg2 ;
-(BOOL)usesSceneTimeBase;
-(void)_syncObjCModel;
-(C3DAnimationRef)animationRef;
-(void)setAnimationEvents:(NSArray *)arg1 ;
-(NSArray *)animationEvents;
-(id)caAnimation;
-(void)_setAnimationRef:(C3DAnimationRef)arg1 ;
-(id)initWithC3DAnimation:(C3DAnimationRef)arg1 ;
-(BOOL)isAppliedOnCompletion;
-(BOOL)fillsForward;
-(BOOL)fillsBackward;
-(void)setAppliedOnCompletion:(BOOL)arg1 ;
-(void)setFillsForward:(BOOL)arg1 ;
-(void)setFillsBackward:(BOOL)arg1 ;
-(id)initWithCAAnimation:(id)arg1 ;
-(void)setBlendInDuration:(double)arg1 ;
-(void)setBlendOutDuration:(double)arg1 ;
-(id)animationDidStart;
-(void)setAnimationDidStart:(id)arg1 ;
-(id)animationDidStop;
-(void)setAnimationDidStop:(id)arg1 ;
-(double)blendInDuration;
-(double)blendOutDuration;
@end

