/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSDecimalNumber, NSURL;

@interface PKAccountWebServiceInstallmentBindRequest : PKAccountWebServiceRequest {

	NSString* _accountIdentifier;
	NSString* _applicationIdentifier;
	NSDecimalNumber* _bindingAmount;
	NSString* _merchantIdentifier;
	NSURL* _baseURL;

}

@property (nonatomic,copy) NSString * accountIdentifier;                   //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;               //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * bindingAmount;              //@synthesize bindingAmount=_bindingAmount - In the implementation block
@property (nonatomic,copy) NSString * merchantIdentifier;                  //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                              //@synthesize baseURL=_baseURL - In the implementation block
-(NSURL *)baseURL;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(NSString *)merchantIdentifier;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(NSDecimalNumber *)bindingAmount;
-(void)setBindingAmount:(NSDecimalNumber *)arg1 ;
@end

