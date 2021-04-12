/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, PKAccountVirtualCardEncryptionFields;

@interface PKAccountWebServiceCreateVirtualCardRequest : PKAccountWebServiceRequest <NSSecureCoding> {

	NSString* _accountIdentifier;
	NSURL* _baseURL;
	long long _type;
	PKAccountVirtualCardEncryptionFields* _encryptionFields;

}

@property (nonatomic,copy) NSString * accountIdentifier;                                           //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                                      //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) long long type;                                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) PKAccountVirtualCardEncryptionFields * encryptionFields;              //@synthesize encryptionFields=_encryptionFields - In the implementation block
-(NSURL *)baseURL;
-(NSString *)accountIdentifier;
-(void)setType:(long long)arg1 ;
-(PKAccountVirtualCardEncryptionFields *)encryptionFields;
-(void)setEncryptionFields:(PKAccountVirtualCardEncryptionFields *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(long long)type;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

