/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)elements;
-(double)duration;
-(void)setElements:(NSArray *)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(NSString *)fromState;
-(NSString *)toState;
-(void)setFromState:(NSString *)arg1 ;
-(void)setToState:(NSString *)arg1 ;
@end

