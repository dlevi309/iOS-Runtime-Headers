/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSData *)publicKey;
-(void)setSecretKey:(NSData *)arg1 ;
-(void)setPublicKey:(NSData *)arg1 ;
-(void)setAltIRK:(NSData *)arg1 ;
-(NSData *)altIRK;
-(NSData *)secretKey;
@end

