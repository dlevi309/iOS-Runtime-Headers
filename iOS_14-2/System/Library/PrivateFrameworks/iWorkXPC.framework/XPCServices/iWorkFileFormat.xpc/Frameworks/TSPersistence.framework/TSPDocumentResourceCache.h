/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSMutableDictionary;

@interface TSPDocumentResourceCache : NSObject {

	NSURL* _cacheURL;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _entries;
	long long _maxCacheSizeInBytes;

}

@property (assign,nonatomic) long long maxCacheSizeInBytes;              //@synthesize maxCacheSizeInBytes=_maxCacheSizeInBytes - In the implementation block
+(id)sharedCache;
+(id)defaultCacheURL;
-(id)init;
-(id)initWithCacheURL:(id)arg1 ;
-(void)clearCache;
-(void)reloadEntries;
-(id)entryForDigestString:(id)arg1 ;
-(void)shrinkCacheWithMaxCacheSizeInBytes:(long long)arg1 ;
-(void)enumerateEntriesFromCacheURLWithHandler:(/*^block*/id)arg1 ;
-(id)URLForDocumentResourceDigestString:(id)arg1 ;
-(BOOL)cacheDocumentResourceDigestString:(id)arg1 extension:(id)arg2 sourceURL:(id)arg3 fileSize:(long long)arg4 wasDownloaded:(BOOL)arg5 ;
-(BOOL)beginDocumentResourceAccessForDigestString:(id)arg1 ;
-(void)endDocumentResourceAccessForDigestString:(id)arg1 ;
-(void)shrinkCache;
-(long long)maxCacheSizeInBytes;
-(void)setMaxCacheSizeInBytes:(long long)arg1 ;
@end

