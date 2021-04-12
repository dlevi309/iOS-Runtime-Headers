/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CAStateTransition : NSObject <NSCopying, NSSecureCoding> {

	NSString* _fromState;
	NSString* _toState;
	NSArray* _elements;

}

@property (nonatomic,copy) NSString * fromState;              //@synthesize fromState=_fromState - In the implementation block
@property (nonatomic,copy) NSString * toState;                //@synthesize toState=_toState - In the implementation block
@property (nonatomic,copy) NSArray * elements;                //@synthesize elements=_elements - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)CAMLParserStartElement:(id)arg1 ;
-(NSString *)toState;
-(void)setElements:(NSArray *)arg1 ;
-(NSArray *)elements;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)setFromState:(NSString *)arg1 ;
-(id)init;
-(id)CAMLTypeForKey:(id)arg1 ;
-(NSString *)fromState;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setToState:(NSString *)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

