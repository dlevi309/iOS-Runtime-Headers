/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKCurrencyAmount;

@interface PKPaymentTransactionFeeItem : NSObject <NSSecureCoding> {

	NSString* _identifier;
	unsigned long long _type;
	PKCurrencyAmount* _currencyAmount;
	NSString* _localizedDisplayName;

}

@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) PKCurrencyAmount * currencyAmount;              //@synthesize currencyAmount=_currencyAmount - In the implementation block
@property (nonatomic,copy) NSString * localizedDisplayName;                //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToFeeItem:(id)arg1 ;
-(void)_initWithFeeDictionary:(id)arg1 ;
-(id)initWithFeeDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(id)description;
-(NSString *)localizedDisplayName;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)jsonDictionaryRepresentation;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

