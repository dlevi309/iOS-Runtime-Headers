/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentBackgroundDownloadRecord.h>

@class NSString, NSData;

@interface PKPaymentBackgroundRegisterCredentialRecord : PKPaymentBackgroundDownloadRecord {

	NSString* _credentialIdentifier;
	NSData* _responseData;

}

@property (nonatomic,copy) NSString * credentialIdentifier;              //@synthesize credentialIdentifier=_credentialIdentifier - In the implementation block
@property (nonatomic,copy) NSData * responseData;                        //@synthesize responseData=_responseData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)responseData;
-(void)setResponseData:(NSData *)arg1 ;
-(NSString *)credentialIdentifier;
-(void)setCredentialIdentifier:(NSString *)arg1 ;
-(id)initWithCredentialIdentifier:(id)arg1 ;
@end

