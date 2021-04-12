/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPRequestCancellationToken, OS_dispatch_source, MPRequestResponseControllerDelegate, OS_dispatch_queue;
@class NSObject, NSError;

@interface MPRequestResponseController : NSObject {

	long long _numberOfObservers;
	long long _requestRevision;
	BOOL _shouldAutomaticallyLoad;
	BOOL _needsReload;
	id<MPRequestCancellationToken> _cancelToken;
	double _retryInterval;
	NSObject*<OS_dispatch_source> _retryTimer;
	NSError* _lastError;
	id _pendingResponse;
	unsigned long long _stateHandle;
	id _request;
	id _response;
	id<MPRequestResponseControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue;                          //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,retain) id response;                                                          //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) id request;                                                           //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<MPRequestResponseControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)reloadIfNeeded;
-(id)init;
-(void)setRequest:(id)arg1 ;
-(id<MPRequestResponseControllerDelegate>)delegate;
-(void)setNeedsReload;
-(void)beginAutomaticResponseLoading;
-(id)request;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)setDelegate:(id<MPRequestResponseControllerDelegate>)arg1 ;
-(void)setNeedsReloadForSignificantRequestChange;
-(id)response;
-(void)_onQueue_scheduleRetryAfterInterval:(double)arg1 ;
-(void)setResponse:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)endAutomaticResponseLoading;
-(void)_responseDidInvalidate:(id)arg1 ;
-(void)dealloc;
-(void)_onQueue_reloadIfNeeded;
@end

