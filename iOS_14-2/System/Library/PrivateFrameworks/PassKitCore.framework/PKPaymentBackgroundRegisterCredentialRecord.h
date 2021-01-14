/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithCredentialIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setResponseData:(NSData *)arg1 ;
-(NSData *)responseData;
-(NSString *)credentialIdentifier;
-(void)setCredentialIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

