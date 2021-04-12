/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RKCurrencyAmount : NSObject <NSSecureCoding> {

	NSString* _string;
	NSString* _currency;
	double _value;

}

@property (readonly) NSString * string;                //@synthesize string=_string - In the implementation block
@property (readonly) NSString * currency;              //@synthesize currency=_currency - In the implementation block
@property (readonly) double value;                     //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)currency;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(double)value;
-(id)initWithString:(id)arg1 currency:(id)arg2 value:(double)arg3 ;
@end

