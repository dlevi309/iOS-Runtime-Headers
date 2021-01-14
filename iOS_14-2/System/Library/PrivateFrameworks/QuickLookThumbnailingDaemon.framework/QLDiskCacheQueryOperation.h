/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, _QLCacheThread, NSObject;

@interface QLDiskCacheQueryOperation : NSOperation {

	NSMutableDictionary* _thumbnailRequestBatch;
	long long _thumbnailRequestCount;
	_QLCacheThread* _cacheThread;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSMutableDictionary * thumbnailRequestBatch;              //@synthesize thumbnailRequestBatch=_thumbnailRequestBatch - In the implementation block
@property (assign) long long thumbnailRequestCount;                          //@synthesize thumbnailRequestCount=_thumbnailRequestCount - In the implementation block
@property (retain) _QLCacheThread * cacheThread;                             //@synthesize cacheThread=_cacheThread - In the implementation block
-(void)main;
-(void)cancel;
-(void)dealloc;
-(id)initWithCacheThread:(id)arg1 ;
-(_QLCacheThread *)cacheThread;
-(void)setCacheThread:(_QLCacheThread *)arg1 ;
-(NSMutableDictionary *)thumbnailRequestBatch;
-(long long)thumbnailRequestCount;
-(void)setThumbnailRequestCount:(long long)arg1 ;
-(void)setThumbnailRequestBatch:(NSMutableDictionary *)arg1 ;
-(BOOL)appendThumbnailRequest:(id)arg1 ;
@end

