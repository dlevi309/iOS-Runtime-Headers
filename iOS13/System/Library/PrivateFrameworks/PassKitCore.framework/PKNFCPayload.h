/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface PKNFCPayload : NSObject <NSSecureCoding, NSCopying> {

	BOOL _requiresAuthentication;
	NSString* _message;
	NSData* _encryptionPublicKeyData;

}

@property (nonatomic,copy) NSString * message;                            //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSData * encryptionPublicKeyData;              //@synthesize encryptionPublicKeyData=_encryptionPublicKeyData - In the implementation block
@property (assign,nonatomic) BOOL requiresAuthentication;                 //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(BOOL)requiresAuthentication;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(NSData *)encryptionPublicKeyData;
-(BOOL)isEqualToPKNFCPayload:(id)arg1 ;
-(id)initWithNFCDictionary:(id)arg1 ;
-(void)setEncryptionPublicKeyData:(NSData *)arg1 ;
@end

