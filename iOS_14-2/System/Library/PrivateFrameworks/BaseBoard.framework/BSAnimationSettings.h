/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class CAMediaTimingFunction, NSString;

@interface BSAnimationSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSXPCCoding> {

	os_unfair_lock_s _lock;
	float _lock_speed;
	double _lock_storedDuration;
	double _lock_delay;
	double _lock_frameInterval;
	CAMediaTimingFunction* _lock_timingFunction;
	double _lock_mass;
	double _lock_stiffness;
	double _lock_damping;
	double _lock_epsilon;
	double _lock_initialVelocity;
	BOOL _lock_storedDurationIsDirty;
	BOOL _mutable;
	BOOL _isSpring;

}

@property (nonatomic,readonly) double mass; 
@property (nonatomic,readonly) double stiffness; 
@property (nonatomic,readonly) double damping; 
@property (nonatomic,readonly) double epsilon; 
@property (nonatomic,readonly) double initialVelocity; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double delay; 
@property (nonatomic,readonly) double frameInterval; 
@property (nonatomic,readonly) CAMediaTimingFunction * timingFunction; 
@property (nonatomic,readonly) float speed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)tryAnimatingWithSettings:(id)arg1 actions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)settingsWithDuration:(double)arg1 timingFunction:(id)arg2 ;
+(id)settingsWithDuration:(double)arg1 delay:(double)arg2 ;
+(id)settingsWithDuration:(double)arg1 ;
+(id)settingsWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3 ;
-(double)stiffness;
-(double)initialVelocity;
-(double)mass;
-(id)init;
-(double)damping;
-(float)speed;
-(void)encodeWithCoder:(id)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)frameInterval;
-(NSString *)description;
-(double)delay;
-(BOOL)isSpringAnimation;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)applyToCAAnimation:(id)arg1 ;
-(double)epsilon;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

