/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)properties;
+(id)animation;
+(id)defaultValueForKey:(id)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(BOOL)CA_encodesPropertyConditionally:(unsigned)arg1 type:(int)arg2 ;
-(void)dealloc;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<CAAnimationDelegate>)delegate;
-(void)setDelegate:(id<CAAnimationDelegate>)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(double)duration;
-(BOOL)isEnabled;
-(void)setDuration:(double)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(double)frameInterval;
-(void)setFrameInterval:(double)arg1 ;
-(float)speed;
-(void)setSpeed:(float)arg1 ;
-(double)beginTime;
-(void)setBeginTime:(double)arg1 ;
-(NSString *)beginTimeMode;
-(void)setBeginTimeMode:(NSString *)arg1 ;
-(void)setFillMode:(NSString *)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(void)setAutoreverses:(BOOL)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(double)timeOffset;
-(void)setRemovedOnCompletion:(BOOL)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(BOOL)autoreverses;
-(void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3 ;
-(float)repeatCount;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(BOOL)CAMLTypeSupportedForKey:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(long long)preferredFramesPerSecond;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(double)repeatDuration;
-(NSString *)fillMode;
-(void)setRepeatDuration:(double)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(BOOL)isRemovedOnCompletion;
-(void)setDefaultDuration:(double)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(BOOL)removedOnCompletion;
-(BOOL)discretizesTime;
-(void)setDiscretizesTime:(BOOL)arg1 ;
@end

