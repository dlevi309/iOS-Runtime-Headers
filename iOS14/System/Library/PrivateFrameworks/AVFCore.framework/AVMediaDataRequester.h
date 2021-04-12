/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol AVMediaDataRequesterConsumer, OS_dispatch_queue;
@class NSObject;

@interface AVMediaDataRequester : NSObject {

	id<AVMediaDataRequesterConsumer> _mediaDataConsumer;
	NSObject*<OS_dispatch_queue> _requestQueue;
	/*^block*/id _requestBlock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,readonly) id requestBlock;                                        //@synthesize requestBlock=_requestBlock - In the implementation block
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(id)init;
-(void)startRequestingMediaData;
-(id)initWithMediaDataConsumer:(id)arg1 requestQueue:(id)arg2 requestBlock:(/*^block*/id)arg3 ;
-(id)requestBlock;
-(void)_requestMediaDataIfReady;
-(void)invalidate;
-(void)dealloc;
@end

