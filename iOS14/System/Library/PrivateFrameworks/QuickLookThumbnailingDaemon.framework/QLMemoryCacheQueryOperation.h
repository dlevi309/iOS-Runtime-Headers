/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class QLTGeneratorThumbnailRequest, _QLCacheThread, NSObject;

@interface QLMemoryCacheQueryOperation : NSOperation {

	QLTGeneratorThumbnailRequest* _generatorRequest;
	_QLCacheThread* _cacheThread;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) QLTGeneratorThumbnailRequest * generatorRequest;              //@synthesize generatorRequest=_generatorRequest - In the implementation block
-(void)main;
-(void)cancel;
-(QLTGeneratorThumbnailRequest *)generatorRequest;
-(void)setGeneratorRequest:(QLTGeneratorThumbnailRequest *)arg1 ;
-(id)initWithThumbnailRequest:(id)arg1 cacheThread:(id)arg2 ;
@end

