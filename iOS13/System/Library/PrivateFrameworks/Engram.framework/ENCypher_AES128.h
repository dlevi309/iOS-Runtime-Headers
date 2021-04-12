/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
*/

#import <libobjc.A.dylib/ENCypher.h>

@class NSString, NSData;

@interface ENCypher_AES128 : NSObject <ENCypher> {

	NSData* _key;

}

@property (nonatomic,retain) NSData * key;                          //@synthesize key=_key - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
+(BOOL)supportsSecureCoding;
+(id)_randomDataWithLength:(long long)arg1 ;
+(id)_encryptData:(id)arg1 withKey:(id)arg2 ;
+(id)_decryptData:(id)arg1 withKey:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithKey:(id)arg1 ;
-(void)setKey:(NSData *)arg1 ;
-(id)cypherData:(id)arg1 withAccountIdentity:(id)arg2 identifier:(id*)arg3 error:(id*)arg4 ;
-(id)decypherData:(id)arg1 withAccountIdentity:(id)arg2 signingDevicePublicKey:(id)arg3 identifier:(id)arg4 error:(id*)arg5 ;
-(id)initWithRandomKey;
@end

