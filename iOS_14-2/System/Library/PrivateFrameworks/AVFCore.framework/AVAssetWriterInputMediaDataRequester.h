/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue;
@class NSObject, AVWeakReference;

@interface AVAssetWriterInputMediaDataRequester : NSObject {

	NSObject*<OS_dispatch_queue> _requestQueue;
	/*^block*/id _requestBlock;
	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	AVWeakReference* _weakReferenceToDelegate;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> requestQueue;                  //@synthesize requestQueue=_requestQueue - In the implementation block
@property (__weak) id<AVAssetWriterInputMediaDataRequesterDelegate> delegate; 
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(id)init;
-(id<AVAssetWriterInputMediaDataRequesterDelegate>)delegate;
-(void)requestMediaDataIfNecessary;
-(id)initWithRequestQueue:(id)arg1 requestBlock:(/*^block*/id)arg2 ;
-(void)_collectUncollectables_invokedFromDeallocAndFinalize;
-(void)setDelegate:(id<AVAssetWriterInputMediaDataRequesterDelegate>)arg1 ;
-(void)dealloc;
@end

