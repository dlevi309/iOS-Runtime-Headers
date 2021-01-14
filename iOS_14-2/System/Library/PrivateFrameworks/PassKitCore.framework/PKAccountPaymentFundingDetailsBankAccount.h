/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKAccountPaymentFundingDetails.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKAccountPaymentFundingDetailsBankAccount : PKAccountPaymentFundingDetails <NSSecureCoding> {

	NSString* _accountIdentifier;
	NSString* _accountNumber;
	NSString* _routingNumber;
	NSString* _name;

}

@property (nonatomic,copy) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountNumber;                  //@synthesize accountNumber=_accountNumber - In the implementation block
@property (nonatomic,copy) NSString * routingNumber;                  //@synthesize routingNumber=_routingNumber - In the implementation block
@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)routingNumber;
-(void)setRoutingNumber:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountNumber;
-(void)setAccountNumber:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)fundingDetailsUnencryptedDictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

