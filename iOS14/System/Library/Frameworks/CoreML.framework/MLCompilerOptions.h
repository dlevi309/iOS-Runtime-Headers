/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@class NSString, NSNumber, NSData;

@interface MLCompilerOptions : NSObject {

	BOOL _dryRun;
	BOOL _containerIsCloud;
	BOOL _encryptModel;
	BOOL _usesCodeSigningIdentityForEncryption;
	NSString* _platform;
	NSString* _platformVersion;
	NSNumber* _keyInfoVersion;
	NSString* _keyID;
	NSData* _key;
	NSData* _iv;
	NSData* _sinf;
	NSData* _mlsinf;

}

@property (assign) BOOL dryRun;                                            //@synthesize dryRun=_dryRun - In the implementation block
@property (retain) NSString * platform;                                    //@synthesize platform=_platform - In the implementation block
@property (retain) NSString * platformVersion;                             //@synthesize platformVersion=_platformVersion - In the implementation block
@property (assign) BOOL containerIsCloud;                                  //@synthesize containerIsCloud=_containerIsCloud - In the implementation block
@property (assign) BOOL encryptModel;                                      //@synthesize encryptModel=_encryptModel - In the implementation block
@property (copy) NSNumber * keyInfoVersion;                                //@synthesize keyInfoVersion=_keyInfoVersion - In the implementation block
@property (copy) NSString * keyID;                                         //@synthesize keyID=_keyID - In the implementation block
@property (copy) NSData * key;                                             //@synthesize key=_key - In the implementation block
@property (assign) BOOL usesCodeSigningIdentityForEncryption;              //@synthesize usesCodeSigningIdentityForEncryption=_usesCodeSigningIdentityForEncryption - In the implementation block
@property (copy) NSData * iv;                                              //@synthesize iv=_iv - In the implementation block
@property (copy) NSData * sinf;                                            //@synthesize sinf=_sinf - In the implementation block
@property (copy) NSData * mlsinf;                                          //@synthesize mlsinf=_mlsinf - In the implementation block
+(id)defaultOptions;
-(NSData *)iv;
-(void)setDryRun:(BOOL)arg1 ;
-(NSString *)platform;
-(NSData *)sinf;
-(id)init;
-(void)setIv:(NSData *)arg1 ;
-(void)setPlatform:(NSString *)arg1 ;
-(NSString *)keyID;
-(BOOL)containerIsCloud;
-(void)setContainerIsCloud:(BOOL)arg1 ;
-(BOOL)encryptModel;
-(void)setEncryptModel:(BOOL)arg1 ;
-(NSNumber *)keyInfoVersion;
-(void)setKeyInfoVersion:(NSNumber *)arg1 ;
-(void)setKeyID:(NSString *)arg1 ;
-(BOOL)usesCodeSigningIdentityForEncryption;
-(void)setUsesCodeSigningIdentityForEncryption:(BOOL)arg1 ;
-(void)setMlsinf:(NSData *)arg1 ;
-(NSString *)platformVersion;
-(NSData *)mlsinf;
-(NSData *)key;
-(void)setSinf:(NSData *)arg1 ;
-(BOOL)dryRun;
-(void)setPlatformVersion:(NSString *)arg1 ;
-(void)setKey:(NSData *)arg1 ;
@end

