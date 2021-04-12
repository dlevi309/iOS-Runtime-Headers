/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue, SessionConnectionDelegate, OS_dispatch_data;
@class NSURLSessionTask, NSObject, NSURLResponse;

@interface __NSCFURLSessionConnection : NSObject <NSCopying> {

	NSURLSessionTask* _task;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<SessionConnectionDelegate> _delegate;
	NSURLResponse* _cacheResponse;
	NSObject*<OS_dispatch_data> _cacheData;
	unsigned long long _cacheDataMax;
	long long _maxCacheEntrySize;

}

@property (copy) NSURLSessionTask * task;                               //@synthesize task=_task - In the implementation block
@property (retain) id<SessionConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SessionConnectionDelegate>)delegate;
-(void)setDelegate:(id<SessionConnectionDelegate>)arg1 ;
-(void)cancel;
-(void)resume;
-(void)suspend;
-(NSURLSessionTask *)task;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)expectedProgressTargetChanged;
-(void)setBytesPerSecondLimit:(long long)arg1 ;
-(void)setPriorityHint:(float)arg1 ;
-(void)setPoolPriority:(long long)arg1 ;
-(void)setIsDownload:(BOOL)arg1 ;
-(id)_cachedResponse;
-(void)withWorkQueueAsync:(/*^block*/id)arg1 ;
-(void)_setupForCache:(BOOL)arg1 expectedLength:(long long)arg2 response:(id)arg3 ;
-(void)_appendDataToCache:(id)arg1 ;
-(void)_tossCache;
-(void)_storeCachedResponse:(id)arg1 ;
@end

