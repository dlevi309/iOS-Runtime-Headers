/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue, __NSCFURLSessionConnectionDelegate, OS_dispatch_data;
@class NSURLSessionTask, NSObject, NSURLResponse;

@interface __NSCFURLSessionConnection : NSObject <NSCopying> {

	NSURLSessionTask* _task;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<__NSCFURLSessionConnectionDelegate> _delegate;
	NSURLResponse* _cacheResponse;
	NSObject*<OS_dispatch_data> _cacheData;
	unsigned long long _cacheDataMax;
	long long _maxCacheEntrySize;

}
-(id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)suspend;
-(void)setPriorityHint:(float)arg1 incremental:(BOOL)arg2 ;
-(void)setPoolPriority:(long long)arg1 ;
-(void)expectedProgressTargetChanged;
-(void)setBytesPerSecondLimit:(long long)arg1 ;
-(void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)setIsDownload:(BOOL)arg1 ;
-(void)cancel;
-(void)resume;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

