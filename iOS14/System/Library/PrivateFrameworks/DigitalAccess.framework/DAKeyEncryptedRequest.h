/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface DAKeyEncryptedRequest : NSObject <NSSecureCoding> {

	NSString* _version;
	NSData* _ephemeralPublicKey;
	NSData* _publicKeyHash;
	NSData* _encryptedRequest;

}

@property (nonatomic,readonly) NSString * version;                       //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSData * ephemeralPublicKey;              //@synthesize ephemeralPublicKey=_ephemeralPublicKey - In the implementation block
@property (nonatomic,readonly) NSData * publicKeyHash;                   //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (nonatomic,readonly) NSData * encryptedRequest;                //@synthesize encryptedRequest=_encryptedRequest - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)decodeWithData:(id)arg1 error:(id*)arg2 ;
-(NSData *)publicKeyHash;
-(NSData *)ephemeralPublicKey;
-(id)encodeWithError:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)encryptedRequest;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)version;
-(id)initWithVersion:(id)arg1 ephemeralPublicKey:(id)arg2 publicKeyHash:(id)arg3 encryptedRequest:(id)arg4 ;
@end

