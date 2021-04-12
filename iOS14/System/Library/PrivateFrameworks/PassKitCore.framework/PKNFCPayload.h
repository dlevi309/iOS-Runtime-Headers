/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)requiresAuthentication;
-(void)setMessage:(NSString *)arg1 ;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(NSString *)message;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToPKNFCPayload:(id)arg1 ;
-(id)initWithNFCDictionary:(id)arg1 ;
-(void)setEncryptionPublicKeyData:(NSData *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)encryptionPublicKeyData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

