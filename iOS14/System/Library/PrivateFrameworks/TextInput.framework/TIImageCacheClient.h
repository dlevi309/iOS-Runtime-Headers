/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> storeImageQueue; 
@property (nonatomic,readonly) int cacheVersion; 
@property (assign,nonatomic) BOOL lockOnRead;                                             //@synthesize lockOnRead=_lockOnRead - In the implementation block
@property (assign,nonatomic) unsigned long long cacheItemLimit; 
-(id)initWithLocalAccess:(BOOL)arg1 ;
-(void)_localStoreImageForKey:(id)arg1 inGroup:(id)arg2 withItem:(id)arg3 ;
-(void)idleAfter:(double)arg1 ;
-(BOOL)lockOnRead;
-(unsigned long long)cacheItemLimit;
-(void*)openAndMmap:(id)arg1 withInfo:(img*)arg2 ;
-(void)_remoteStoreImageForKey:(id)arg1 inGroup:(id)arg2 withItem:(id)arg3 ;
-(void)removeImagesInGroups:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)cacheVersion;
-(int)_cacheVersion;
-(id)_versionPath;
-(void)_createConnectionIfNecessary;
-(void)setCacheItemLimit:(unsigned long long)arg1 ;
-(id)imagePath;
-(void)setIdleWhenDone;
-(BOOL)imageExistsForKey:(id)arg1 inGroup:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)storeImageQueue;
-(void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 item:(id)arg3 ;
-(unsigned long long)imageCount;
-(CGImageRef)copyImageForKey:(id)arg1 inGroup:(id)arg2 ;
-(void)_idleIfNecessary:(BOOL)arg1 ;
-(img)_imgForItem:(id)arg1 ;
-(void)purge;
-(void)setLockOnRead:(BOOL)arg1 ;
-(void)dealloc;
-(void)_setCacheVersion:(int)arg1 ;
@end

