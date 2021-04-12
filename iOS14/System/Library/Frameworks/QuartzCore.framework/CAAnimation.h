/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/CAPropertyInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CAMediaTiming.h>
#import <libobjc.A.dylib/CAAction.h>

@class CAStateControllerTransition, NSString, CAMediaTimingFunction;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSSecureCoding, NSCopying, CAMediaTiming, CAAction> {

	void* _attr;
	unsigned _flags;

}

@property (__weak) CAStateControllerTransition * CAStateControllerTransition; 
@property (getter=isEnabled) BOOL enabled; 
@property (copy) NSString * beginTimeMode; 
@property (assign) double frameInterval; 
@property (assign) long long preferredFramesPerSecond; 
@property (assign) BOOL discretizesTime; 
@property (retain) CAMediaTimingFunction * timingFunction; 
@property (retain) id<CAAnimationDelegate> delegate; 
@property (getter=isRemovedOnCompletion) BOOL removedOnCompletion; 
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) BOOL autoreverses; 
@property (copy) NSString * fillMode; 
+(BOOL)supportsSecureCoding;
+(id)properties;
+(id)animation;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(BOOL)CA_encodesPropertyConditionally:(unsigned)arg1 type:(int)arg2 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
-(float)repeatCount;
-(double)repeatDuration;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setSpeed:(float)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)setDefaultDuration:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(BOOL)CAMLTypeSupportedForKey:(id)arg1 ;
-(double)beginTime;
-(void)setRepeatDuration:(double)arg1 ;
-(double)timeOffset;
-(id)CAMLTypeForKey:(id)arg1 ;
-(NSString *)fillMode;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(id<CAAnimationDelegate>)delegate;
-(void)setFillMode:(NSString *)arg1 ;
-(float)speed;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setBeginTime:(double)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setAutoreverses:(BOOL)arg1 ;
-(BOOL)autoreverses;
-(id)valueForKey:(id)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)debugDescription;
-(CAMediaTimingFunction *)timingFunction;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setFrameInterval:(double)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)setDelegate:(id<CAAnimationDelegate>)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(double)frameInterval;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(long long)preferredFramesPerSecond;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(void)setRemovedOnCompletion:(BOOL)arg1 ;
-(NSString *)beginTimeMode;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRemovedOnCompletion;
-(BOOL)removedOnCompletion;
-(BOOL)discretizesTime;
-(void)setDiscretizesTime:(BOOL)arg1 ;
-(void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(BOOL)isEnabled;
-(void)setBeginTimeMode:(NSString *)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

