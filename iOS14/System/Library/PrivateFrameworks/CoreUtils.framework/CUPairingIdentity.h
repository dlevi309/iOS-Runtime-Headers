/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSUUID;

@interface CUPairingIdentity : NSObject <NSSecureCoding> {

	NSData* _altIRK;
	NSUUID* _identifier;
	NSData* _publicKey;
	NSData* _secretKey;

}

@property (nonatomic,copy) NSData * altIRK;                  //@synthesize altIRK=_altIRK - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * publicKey;               //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,copy) NSData * secretKey;               //@synthesize secretKey=_secretKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)publicKey;
-(void)setPublicKey:(NSData *)arg1 ;
-(NSData *)altIRK;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setSecretKey:(NSData *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(void)setAltIRK:(NSData *)arg1 ;
-(NSData *)secretKey;
@end

