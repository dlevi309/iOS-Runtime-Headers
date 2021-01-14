/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)start;
-(BRQueryItem *)item;
-(void)stop;
-(void)_subscribe;
-(id)description;
-(void)_stopObserving;
-(void)setProgressHandler:(id)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(id)progressHandler;
-(void)setQueue:(id)arg1 ;
-(void)dealloc;
@end

