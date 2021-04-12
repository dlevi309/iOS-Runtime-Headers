/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)string;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)value;
-(NSString *)currency;
-(id)initWithString:(id)arg1 currency:(id)arg2 value:(double)arg3 ;
@end

