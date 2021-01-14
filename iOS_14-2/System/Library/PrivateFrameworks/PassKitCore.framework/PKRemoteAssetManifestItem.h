/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSNumber, NSDictionary;

@interface PKRemoteAssetManifestItem : NSObject <NSSecureCoding> {

	NSURL* _localURL;
	NSURL* _remoteURL;
	NSURL* _passURL;
	NSString* _sha1Hex;
	NSNumber* _size;
	NSDictionary* _manifest;
	NSURL* _encryptedContentsLocalURL;
	NSString* _ephemeralPublicKey;
	NSString* _publicKeyHash;
	NSString* _seid;
	NSString* _encryptionScheme;
	long long _encryptionSource;

}

@property (nonatomic,copy) NSURL * localURL;                                                      //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,copy) NSURL * remoteURL;                                                     //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,copy) NSURL * passURL;                                                       //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,copy) NSString * sha1Hex;                                                    //@synthesize sha1Hex=_sha1Hex - In the implementation block
@property (nonatomic,copy) NSNumber * size;                                                       //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSDictionary * manifest;                                               //@synthesize manifest=_manifest - In the implementation block
@property (nonatomic,copy) NSURL * encryptedContentsLocalURL;                                     //@synthesize encryptedContentsLocalURL=_encryptedContentsLocalURL - In the implementation block
@property (nonatomic,copy) NSString * ephemeralPublicKey;                                         //@synthesize ephemeralPublicKey=_ephemeralPublicKey - In the implementation block
@property (nonatomic,copy) NSString * publicKeyHash;                                              //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (nonatomic,copy) NSString * seid;                                                       //@synthesize seid=_seid - In the implementation block
@property (nonatomic,copy) NSString * encryptionScheme;                                           //@synthesize encryptionScheme=_encryptionScheme - In the implementation block
@property (assign,nonatomic) long long encryptionSource;                                          //@synthesize encryptionSource=_encryptionSource - In the implementation block
@property (nonatomic,readonly) unsigned long long itemType; 
@property (nonatomic,__weak,readonly) NSString * relativeLocalPath; 
@property (nonatomic,__weak,readonly) NSString * relativeEncryptedContentsLocalPath; 
+(BOOL)supportsSecureCoding;
+(id)sharedURLSession;
+(id)itemWithLocalURL:(id)arg1 passURL:(id)arg2 dictionary:(id)arg3 error:(id*)arg4 ;
-(NSString *)seid;
-(NSURL *)remoteURL;
-(BOOL)isZipFile;
-(NSURL *)passURL;
-(void)setEphemeralPublicKey:(NSString *)arg1 ;
-(NSString *)publicKeyHash;
-(NSString *)ephemeralPublicKey;
-(void)setPublicKeyHash:(NSString *)arg1 ;
-(NSNumber *)size;
-(NSString *)relativeLocalPath;
-(NSString *)relativeEncryptedContentsLocalPath;
-(NSURL *)encryptedContentsLocalURL;
-(void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURL *)localURL;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)sha1Hex;
-(void)setSize:(NSNumber *)arg1 ;
-(void)setSeid:(NSString *)arg1 ;
-(unsigned long long)itemType;
-(NSDictionary *)manifest;
-(NSString *)encryptionScheme;
-(void)setPassURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalURL:(NSURL *)arg1 ;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(void)setSha1Hex:(NSString *)arg1 ;
-(void)setManifest:(NSDictionary *)arg1 ;
-(void)setEncryptionScheme:(NSString *)arg1 ;
-(void)setEncryptionSource:(long long)arg1 ;
-(void)setEncryptedContentsLocalURL:(NSURL *)arg1 ;
-(long long)encryptionSource;
-(id)initWithLocalURL:(id)arg1 passURL:(id)arg2 dictionary:(id)arg3 error:(id*)arg4 ;
-(void)downloadAssetWithCompletion:(/*^block*/id)arg1 ;
@end

