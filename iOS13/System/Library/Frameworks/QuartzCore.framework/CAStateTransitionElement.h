/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTarget:(CALayer *)arg1 ;
-(CALayer *)target;
-(void)setKey:(NSString *)arg1 ;
-(double)duration;
-(BOOL)isEnabled;
-(void)setDuration:(double)arg1 ;
-(CAAnimation *)animation;
-(double)beginTime;
-(void)setBeginTime:(double)arg1 ;
-(void)setAnimation:(CAAnimation *)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
@end

