/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/


@protocol OS_dispatch_queue;
@class BRQueryItem, NSObject, NSProgress;

@interface BRQueryItemProgressObserver : NSObject {

	BRQueryItem* _item;
	NSObject*<OS_dispatch_queue> _queue;
	id _subscriber;
	NSProgress* _progress;
	BOOL _started;
	BOOL _isUpload;
	/*^block*/id _progressHandler;

}

@property (nonatomic,copy) id progressHandler;                  //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,readonly) BRQueryItem * item;              //@synthesize item=_item - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setQueue:(id)arg1 ;
-(void)stop;
-(BRQueryItem *)item;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(void)_stopObserving;
-(void)_subscribe;
@end

