/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKPassField.h>

@class NSString;

@interface PKPassNumberField : PKPassField {

	NSString* _currencyCode;
	long long _numberStyle;

}

@property (assign,nonatomic) long long numberStyle;              //@synthesize numberStyle=_numberStyle - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;              //@synthesize currencyCode=_currencyCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)currencyCode;
-(id)asDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)numberStyle;
-(void)setNumberStyle:(long long)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
@end

