/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@protocol OS_dispatch_queue;
#import <TextInput/TextInput-Structs.h>
@class NSString, NSCache, NSObject, NSXPCConnection;

@interface TIImageCacheClient : NSObject {

	NSString* _path;
	NSString* _imagePath;
	BOOL _hasLocalAccess;
	int _remoteQueryCount;
	BOOL _shouldIdleWhenDone;
	NSCache* _cache;
	NSString* _versionPath;
	NSObject*<OS_dispatch_queue> _serialQueueRemoveImagesBackground;
	NSObject*<OS_dispatch_queue> _serialQueueRemoveImagesDefault;
	NSObject*<OS_dispatch_queue> _storeImageQueue;
	NSObject*<OS_dispatch_queue> _requestQueue;
	NSXPCConnection* _connection;
	BOOL _lockOnRead;

}

@property (nonatomic,readonly) int cacheVersion; 
@property (assign,nonatomic) BOOL lockOnRead;                                //@synthesize lockOnRead=_lockOnRead - In the implementation block
@property (assign,nonatomic) unsigned long long cacheItemLimit; 
-(void)dealloc;
-(void)purge;
-(id)imagePath;
-(void*)openAndMmap:(id)arg1 withInfo:(img*)arg2 ;
-(BOOL)lockOnRead;
-(void)removeImagesInGroups:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_versionPath;
-(unsigned long long)cacheItemLimit;
-(void)setCacheItemLimit:(unsigned long long)arg1 ;
-(CGImageRef)copyImageForKey:(id)arg1 inGroup:(id)arg2 ;
-(unsigned long long)imageCount;
-(void)setLockOnRead:(BOOL)arg1 ;
-(id)initWithLocalAccess:(BOOL)arg1 ;
-(void)idleAfter:(double)arg1 ;
-(void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 item:(id)arg3 ;
-(void)setIdleWhenDone;
-(int)cacheVersion;
-(id)cacheNumberForKey:(id)arg1 inGroup:(id)arg2 ;
-(BOOL)imageExistsForKey:(id)arg1 inGroup:(id)arg2 ;
-(void)_createStorageQueueIfNecessary;
-(void)_localStoreImageForKey:(id)arg1 inGroup:(id)arg2 withItem:(id)arg3 ;
-(void)_remoteStoreImageForKey:(id)arg1 inGroup:(id)arg2 withItem:(id)arg3 ;
-(img)_imgForItem:(id)arg1 ;
-(void)_createConnectionIfNecessary;
-(void)_idleIfNecessary:(BOOL)arg1 ;
-(int)_cacheVersion;
-(void)_setCacheVersion:(int)arg1 ;
@end

