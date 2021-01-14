/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <SEService/SEEndPointPrivacyEncryptResponse.h>

@protocol SEEndPointPrivacyEncryptResponse
@required
+(id)responseWithCipherText:(id)arg1 epehemeralPublicKeydata:(id)arg2 receiverPublicKeyHash:(id)arg3;

@end


@class NSString, NSData;

@interface SEEndPointPrivacyEncryptResponse : NSObject <NSSecureCoding, SEEndPointPrivacyEncryptResponse> {

	NSString* _version;
	NSData* _cipherText;
	NSData* _ephemeralPublicKeydata;
	NSData* _receiverPublicKeyHash;

}

@property (nonatomic,retain) NSString * version;                           //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSData * cipherText;                          //@synthesize cipherText=_cipherText - In the implementation block
@property (nonatomic,retain) NSData * ephemeralPublicKeydata;              //@synthesize ephemeralPublicKeydata=_ephemeralPublicKeydata - In the implementation block
@property (nonatomic,retain) NSData * receiverPublicKeyHash;               //@synthesize receiverPublicKeyHash=_receiverPublicKeyHash - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)responseWithCipherText:(id)arg1 epehemeralPublicKeydata:(id)arg2 receiverPublicKeyHash:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(NSData *)cipherText;
-(void)setCipherText:(NSData *)arg1 ;
-(NSData *)ephemeralPublicKeydata;
-(NSData *)receiverPublicKeyHash;
-(void)setEphemeralPublicKeydata:(NSData *)arg1 ;
-(void)setReceiverPublicKeyHash:(NSData *)arg1 ;
@end

