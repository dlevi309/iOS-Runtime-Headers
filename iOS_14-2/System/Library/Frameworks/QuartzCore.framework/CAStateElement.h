/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CALayer, NSString;

@interface CAStateElement : NSObject <NSCopying, NSSecureCoding> {

	CALayer* _target;
	CAStateElement* _source;

}

@property (assign,nonatomic,__weak) CALayer * target;                //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) CAStateElement * source;                //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath; 
+(BOOL)supportsSecureCoding;
+(void)CAMLParserStartElement:(id)arg1 ;
-(void)setTarget:(CALayer *)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(BOOL)CAMLTypeSupportedForKey:(id)arg1 ;
-(void)apply:(id)arg1 ;
-(id)save;
-(id)CAMLTypeForKey:(id)arg1 ;
-(BOOL)matches:(id)arg1 ;
-(id)targetName;
-(void)encodeWithCoder:(id)arg1 ;
-(void)foreachLayer:(/*^block*/id)arg1 ;
-(void)setSource:(CAStateElement *)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyPath;
-(CALayer *)target;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(CAStateElement *)source;
@end

