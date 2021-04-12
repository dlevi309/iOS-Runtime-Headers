/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
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
-(id)init;
-(void)dealloc;
-(id<AVAssetWriterInputMediaDataRequesterDelegate>)delegate;
-(void)setDelegate:(id<AVAssetWriterInputMediaDataRequesterDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(id)initWithRequestQueue:(id)arg1 requestBlock:(/*^block*/id)arg2 ;
-(void)requestMediaDataIfNecessary;
-(void)_collectUncollectables_invokedFromDeallocAndFinalize;
@end

