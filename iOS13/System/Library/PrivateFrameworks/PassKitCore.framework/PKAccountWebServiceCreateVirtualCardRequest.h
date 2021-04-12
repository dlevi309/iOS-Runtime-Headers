/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSURL *)baseURL;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(PKAccountVirtualCardEncryptionFields *)encryptionFields;
-(void)setEncryptionFields:(PKAccountVirtualCardEncryptionFields *)arg1 ;
@end

