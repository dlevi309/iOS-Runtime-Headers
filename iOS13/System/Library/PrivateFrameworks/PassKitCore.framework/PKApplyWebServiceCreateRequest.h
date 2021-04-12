/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSDecimalNumber, NSString;

@interface PKApplyWebServiceCreateRequest : PKApplyWebServiceRequest {

	BOOL _isInstallment;
	unsigned long long _featureIdentifier;
	NSDecimalNumber* _installmentAmount;
	NSString* _installmentCurrencyCode;

}

@property (assign,nonatomic) unsigned long long featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isInstallment;                                //@synthesize isInstallment=_isInstallment - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * installmentAmount;               //@synthesize installmentAmount=_installmentAmount - In the implementation block
@property (nonatomic,copy) NSString * installmentCurrencyCode;                  //@synthesize installmentCurrencyCode=_installmentCurrencyCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)featureIdentifier;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(BOOL)isInstallment;
-(void)setIsInstallment:(BOOL)arg1 ;
-(NSDecimalNumber *)installmentAmount;
-(void)setInstallmentAmount:(NSDecimalNumber *)arg1 ;
-(NSString *)installmentCurrencyCode;
-(void)setInstallmentCurrencyCode:(NSString *)arg1 ;
@end

