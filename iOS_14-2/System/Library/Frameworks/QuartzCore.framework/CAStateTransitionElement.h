/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CALayer, CAAnimation, NSString;

@interface CAStateTransitionElement : NSObject <NSCopying, NSSecureCoding> {

	CALayer* _target;
	CAAnimation* _animation;
	NSString* _key;
	BOOL _enabled;

}

@property (getter=isEnabled) BOOL enabled;                         //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) CALayer * target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) CAAnimation * animation;              //@synthesize animation=_animation - In the implementation block
@property (nonatomic,copy) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double beginTime; 
@property (assign,nonatomic) double duration; 
+(BOOL)supportsSecureCoding;
+(void)CAMLParserStartElement:(id)arg1 ;
-(void)setTarget:(CALayer *)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(CAAnimation *)animation;
-(void)setDuration:(double)arg1 ;
-(double)beginTime;
-(id)init;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)setBeginTime:(double)arg1 ;
-(void)setAnimation:(CAAnimation *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(NSString *)key;
-(id)initWithCoder:(id)arg1 ;
-(CALayer *)target;
-(BOOL)isEnabled;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)dealloc;
@end

