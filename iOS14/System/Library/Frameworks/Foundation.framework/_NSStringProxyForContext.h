/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@protocol NSCopyingNSSecureCodingNSObject;
@class NSString, NSFormatter;

@interface _NSStringProxyForContext : NSString {

	NSString* _string;
	NSFormatter* _formatter;
	id<NSCopying><NSSecureCoding><NSObject> _item;

}

@property (copy) NSString * string;                    //@synthesize string=_string - In the implementation block
@property (copy) NSFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
@property (copy) id item;                              //@synthesize item=_item - In the implementation block
-(id)_dynamicContextEvaluation:(id)arg1 patternString:(id)arg2 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(NSFormatter *)formatter;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)item;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(void)setFormatter:(NSFormatter *)arg1 ;
-(void)_retainFormatter:(id)arg1 ;
-(void)setItem:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

