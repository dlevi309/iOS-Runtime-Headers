/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKAccountVirtualCardEncryptionFields, NSString, NSURL;

@interface PKAccountWebServiceVirtualCardManageRequest : PKAccountWebServiceRequest <NSSecureCoding> {

	PKAccountVirtualCardEncryptionFields* _encryptionFields;
	long long _action;
	NSString* _accountIdentifier;
	NSURL* _baseURL;
	NSString* _virtualCardIdentifier;

}

@property (nonatomic,copy) NSString * accountIdentifier;                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                             //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * virtualCardIdentifier;              //@synthesize virtualCardIdentifier=_virtualCardIdentifier - In the implementation block
-(NSURL *)baseURL;
-(NSString *)accountIdentifier;
-(void)setAction:(long long)arg1 withQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)virtualCardIdentifier;
-(void)setVirtualCardIdentifier:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

