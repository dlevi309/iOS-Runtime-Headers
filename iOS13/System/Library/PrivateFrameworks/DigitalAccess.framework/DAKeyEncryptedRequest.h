/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)version;
-(id)encodeWithError:(id*)arg1 ;
-(NSData *)publicKeyHash;
-(NSData *)ephemeralPublicKey;
-(NSData *)encryptedRequest;
-(id)initWithVersion:(id)arg1 ephemeralPublicKey:(id)arg2 publicKeyHash:(id)arg3 encryptedRequest:(id)arg4 ;
@end

