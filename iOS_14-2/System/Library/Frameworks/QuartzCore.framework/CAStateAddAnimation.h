/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAStateElement.h>

@class NSString, CAAnimation;

@interface CAStateAddAnimation : CAStateElement {

	NSString* _key;
	CAAnimation* _animation;

}

@property (nonatomic,copy) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) CAAnimation * animation;              //@synthesize animation=_animation - In the implementation block
+(BOOL)supportsSecureCoding;
-(CAAnimation *)animation;
-(void)apply:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(BOOL)matches:(id)arg1 ;
-(void)setAnimation:(CAAnimation *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(NSString *)key;
-(id)initWithCoder:(id)arg1 ;
-(id)keyPath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)dealloc;
@end

