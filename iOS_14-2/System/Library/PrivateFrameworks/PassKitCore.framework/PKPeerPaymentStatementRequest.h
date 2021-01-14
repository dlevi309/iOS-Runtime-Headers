/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentStatementRequest : PKPeerPaymentWebServiceRequest {

	NSString* _emailAddress;
	NSString* _accountIdentifier;

}

@property (nonatomic,copy) NSString * emailAddress;                   //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
@end

