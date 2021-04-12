/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)currencyCode;
-(id)value;
-(void)setNumberStyle:(long long)arg1 ;
-(long long)numberStyle;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(id)asDictionary;
@end

