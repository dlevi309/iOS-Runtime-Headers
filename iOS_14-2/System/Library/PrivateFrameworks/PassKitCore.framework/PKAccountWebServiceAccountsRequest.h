/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSURL;

@interface PKAccountWebServiceAccountsRequest : PKAccountWebServiceRequest {

	NSURL* _accountServicesURL;

}

@property (nonatomic,retain) NSURL * accountServicesURL;              //@synthesize accountServicesURL=_accountServicesURL - In the implementation block
-(NSURL *)accountServicesURL;
-(void)setAccountServicesURL:(NSURL *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 AppleAccountInformation:(id)arg2 ;
@end

