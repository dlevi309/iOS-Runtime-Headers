/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCAVAssetKeyCacheType.h>

@class NSString, NFUnfairLock, FCKeyValueStore, NSURL;

@interface FCAVPersistentAssetKeyCache : NSObject <FCAVAssetKeyCacheType> {

	NSString* _cacheDirectory;
	NFUnfairLock* _initializationLock;
	FCKeyValueStore* _keyStore;
	NSURL* _certificateFileURL;

}

@property (nonatomic,copy,readonly) NSString * cacheDirectory;                 //@synthesize cacheDirectory=_cacheDirectory - In the implementation block
@property (nonatomic,readonly) NFUnfairLock * initializationLock;              //@synthesize initializationLock=_initializationLock - In the implementation block
@property (nonatomic,readonly) FCKeyValueStore * keyStore;                     //@synthesize keyStore=_keyStore - In the implementation block
@property (nonatomic,readonly) NSURL * certificateFileURL;                     //@synthesize certificateFileURL=_certificateFileURL - In the implementation block
-(NSString *)cacheDirectory;
-(void)clearKeyServerCertificate;
-(NSURL *)certificateFileURL;
-(id)keyServerCertificate;
-(void)saveAssetKeyData:(id)arg1 creationDate:(id)arg2 expirationDate:(id)arg3 forURI:(id)arg4 ;
-(id)initWithCacheDirectory:(id)arg1 ;
-(NFUnfairLock *)initializationLock;
-(void)saveKeyServerCertificate:(id)arg1 ;
-(void)_initStore;
-(void)_prepareForUse;
-(FCKeyValueStore *)keyStore;
-(id)assetKeyForURI:(id)arg1 ;
-(void)removeAllAssetKeys;
@end

