/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUApplier.h>

@class HUAnimationSettings, CADisplayLink, NSMutableSet;

@interface HUAnimationApplier : HUApplier {

	BOOL _applyDynamically;
	HUAnimationSettings* _animationSettings;
	CADisplayLink* _displayLink;
	double _startTime;
	NSMutableSet* _relativeAnimations;
	NSMutableSet* _effectiveProgressObservers;

}

@property (nonatomic,copy) HUAnimationSettings * animationSettings;                    //@synthesize animationSettings=_animationSettings - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                              //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double startTime;                                         //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSMutableSet * relativeAnimations;                      //@synthesize relativeAnimations=_relativeAnimations - In the implementation block
@property (nonatomic,readonly) NSMutableSet * effectiveProgressObservers;              //@synthesize effectiveProgressObservers=_effectiveProgressObservers - In the implementation block
@property (assign,nonatomic) BOOL applyDynamically;                                    //@synthesize applyDynamically=_applyDynamically - In the implementation block
@property (nonatomic,readonly) double effectiveProgress; 
+(id)dynamicApplierWithAnimationSettings:(id)arg1 ;
+(id)staticApplierWithAnimationSettings:(id)arg1 ;
+(id)applyAnimationSettings:(id)arg1 withStaticApplier:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_applyAnimationSettings:(id)arg1 withApplier:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 applyDynamically:(BOOL)arg4 ;
+(id)_applierWithAnimationSettings:(id)arg1 applyDynamically:(BOOL)arg2 ;
+(id)applyAnimationSettings:(id)arg1 withDynamicApplier:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(HUAnimationSettings *)animationSettings;
-(id)init;
-(void)setAnimationSettings:(HUAnimationSettings *)arg1 ;
-(BOOL)start;
-(void)setStartTime:(double)arg1 ;
-(BOOL)complete:(BOOL)arg1 ;
-(BOOL)cancel;
-(double)startTime;
-(double)_effectiveDuration;
-(id)initWithAnimationSettings:(id)arg1 ;
-(void)setApplyDynamically:(BOOL)arg1 ;
-(NSMutableSet *)relativeAnimations;
-(double)effectiveProgress;
-(NSMutableSet *)effectiveProgressObservers;
-(void)_startEffectiveProgressTimerForObserver:(id)arg1 ;
-(double)_remainingTimeIntervalForEffectiveProgress:(double)arg1 ;
-(BOOL)applyDynamically;
-(void)_updateDynamicProgress:(double)arg1 ;
-(void)_displayLinkTick;
-(void)_invalidateDisplayLinkIfNecessary;
-(BOOL)addAlongsideAnimationApplier:(id)arg1 relativeStart:(double)arg2 relativeDuration:(double)arg3 ;
-(BOOL)notifyUponEffectiveProgress:(double)arg1 withBlock:(/*^block*/id)arg2 ;
@end

