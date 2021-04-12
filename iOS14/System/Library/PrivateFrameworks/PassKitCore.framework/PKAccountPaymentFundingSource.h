/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKAccountPaymentFundingDetails;

@interface PKAccountPaymentFundingSource : NSObject <NSSecureCoding> {

	NSString* _identifier;
	long long _type;
	NSString* _accountSuffix;
	PKAccountPaymentFundingDetails* _fundingDetails;

}

@property (nonatomic,copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * accountSuffix;                                     //@synthesize accountSuffix=_accountSuffix - In the implementation block
@property (nonatomic,copy) PKAccountPaymentFundingDetails * fundingDetails;              //@synthesize fundingDetails=_fundingDetails - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)fundingDetailsClassForFundingSourceType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)displayDescription;
-(void)setType:(long long)arg1 ;
-(id)bankAccountRepresentation;
-(void)setAccountSuffix:(NSString *)arg1 ;
-(PKAccountPaymentFundingDetails *)fundingDetails;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonString;
-(id)description;
-(id)hashComponentWithCertificatesResponse:(id)arg1 ;
-(id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1 ;
-(NSString *)accountSuffix;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)jsonDictionaryRepresentation;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setFundingDetails:(PKAccountPaymentFundingDetails *)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
@end

