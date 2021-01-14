/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/

#import <BaseBoardUI/BaseBoardUI-Structs.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BSAnimationSettings, NSString;

@interface BSUIAnimationFactory : NSObject <_UIBasicAnimationFactory, NSCopying> {

	BOOL _allowsAdditiveAnimations;
	BSAnimationSettings* _settings;

}

@property (nonatomic,copy,readonly) BSAnimationSettings * settings;                       //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy,readonly) BSAnimationSettings * effectiveSettings; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double delay; 
@property (assign,nonatomic) BOOL allowsAdditiveAnimations;                               //@synthesize allowsAdditiveAnimations=_allowsAdditiveAnimations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 options:(unsigned long long)arg3 actions:(/*^block*/id)arg4 ;
+(void)animateWithFactory:(id)arg1 actions:(/*^block*/id)arg2 ;
+(id)factoryWithSettings:(id)arg1 timingFunction:(id)arg2 ;
+(id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 ;
+(id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 timingFunction:(id)arg4 ;
+(id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 initialVelocity:(double)arg5 ;
+(id)factoryWithAnimationAttributes:(id)arg1 ;
+(id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 ;
+(void)animateWithFactory:(id)arg1 actions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
+(double)globalSlowDownFactor;
+(id)factoryWithDuration:(double)arg1 timingFunction:(id)arg2 ;
+(id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 timingFunction:(id)arg5 ;
+(void)animateWithSettings:(id)arg1 actions:(/*^block*/id)arg2 ;
+(id)factoryWithDuration:(double)arg1 delay:(double)arg2 ;
+(id)factoryWithDuration:(double)arg1 ;
+(void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 actions:(/*^block*/id)arg3 ;
+(void)animateWithFactory:(id)arg1 options:(unsigned long long)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(void)animateWithSettings:(id)arg1 options:(unsigned long long)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 options:(unsigned long long)arg3 actions:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
+(void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(void)addAlongsideAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
+(void)animateWithSettings:(id)arg1 actions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
+(id)factoryWithSettings:(id)arg1 ;
+(void)animateWithSettings:(id)arg1 options:(unsigned long long)arg2 actions:(/*^block*/id)arg3 ;
+(void)animateWithFactory:(id)arg1 options:(unsigned long long)arg2 actions:(/*^block*/id)arg3 ;
+(id)factoryWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3 ;
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)init;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(BSAnimationSettings *)effectiveSettings;
-(NSString *)description;
-(void)applySettingsToCAAnimation:(id)arg1 ;
-(double)delay;
-(BSAnimationSettings *)settings;
-(BOOL)allowsAdditiveAnimations;
-(id)factoryWithTimingFunction:(id)arg1 ;
-(unsigned long long)hash;
-(double)duration;
-(void)setAllowsAdditiveAnimations:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

