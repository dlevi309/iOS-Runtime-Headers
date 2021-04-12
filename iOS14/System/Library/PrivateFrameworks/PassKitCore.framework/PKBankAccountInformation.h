/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKBankAccountInformation : NSObject <NSSecureCoding, NSCopying> {

	NSString* _accountNumber;
	NSString* _routingNumber;
	NSString* _bankName;
	NSString* _identifier;
	long long _type;

}

@property (assign,nonatomic) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * accountNumber;              //@synthesize accountNumber=_accountNumber - In the implementation block
@property (nonatomic,copy) NSString * routingNumber;              //@synthesize routingNumber=_routingNumber - In the implementation block
@property (nonatomic,copy) NSString * bankName;                   //@synthesize bankName=_bankName - In the implementation block
@property (nonatomic,copy) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)_classForType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bankName;
-(void)setType:(long long)arg1 ;
-(NSString *)routingNumber;
-(void)setRoutingNumber:(NSString *)arg1 ;
-(void)setBankName:(NSString *)arg1 ;
-(id)description;
-(BOOL)isValid;
-(void)updateToLatestKeychainData;
-(void)deleteAllBankInformation;
-(void)deleteAllLocalBankInformation;
-(void)_commonDeleteAllBankInformation;
-(id)accountSuffix;
-(id)maskedAccountNumber;
-(long long)type;
-(NSString *)accountNumber;
-(void)setAccountNumber:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

