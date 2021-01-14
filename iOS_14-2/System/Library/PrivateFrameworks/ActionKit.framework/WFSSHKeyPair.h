/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString, NSData;

@interface WFSSHKeyPair : NSObject <NSSecureCoding> {

	NSNumber* _keySize;
	NSString* _comment;
	NSData* _privateKeyData;
	NSData* _publicKeyData;
	Class _format;

}

@property (nonatomic,readonly) NSData * privateKeyData;                      //@synthesize privateKeyData=_privateKeyData - In the implementation block
@property (nonatomic,readonly) NSData * publicKeyData;                       //@synthesize publicKeyData=_publicKeyData - In the implementation block
@property (nonatomic,retain) Class format;                                   //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) NSNumber * keySize;                           //@synthesize keySize=_keySize - In the implementation block
@property (nonatomic,readonly) NSString * comment;                           //@synthesize comment=_comment - In the implementation block
@property (nonatomic,readonly) NSString * localizedType; 
@property (nonatomic,readonly) NSString * localizedDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPairFromPrivateKey:(id)arg1 comment:(id)arg2 error:(id*)arg3 ;
+(id)keyFormats;
+(id)sharedKeyPair;
+(void)setSharedKeyPair:(id)arg1 ;
+(id)knownHostFileURL;
+(id)defaultKeyComment;
+(BOOL)parsePublicKey:(id)arg1 type:(id*)arg2 data:(id*)arg3 comment:(id*)arg4 ;
-(void)setFormat:(Class)arg1 ;
-(NSString *)comment;
-(id)publicKey;
-(Class)format;
-(NSNumber *)keySize;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)localizedDescription;
-(NSString *)localizedType;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)publicKeyData;
-(id)initWithFormat:(Class)arg1 privateKeyData:(id)arg2 publicKeyData:(id)arg3 keySize:(id)arg4 comment:(id)arg5 ;
-(id)privateKeyPEM;
-(id)publicKeyFingerprintWithType:(unsigned long long)arg1 ;
-(NSData *)privateKeyData;
@end

