/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol OS_dispatch_queue, OS_dispatch_source, CPLFileWatcherDelegate;
@class NSObject, NSURL;

@interface CPLFileWatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _nodeSource;
	NSObject*<OS_dispatch_source> _parentSource;
	unsigned long long _nodeInode;
	NSURL* _fileURL;
	id<CPLFileWatcherDelegate> _delegate;

}

@property (nonatomic,copy) NSURL * fileURL;                                           //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic,__weak) id<CPLFileWatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CPLFileWatcherDelegate>)delegate;
-(void)setDelegate:(id<CPLFileWatcherDelegate>)arg1 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(id)initWithFileURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)_forceRefreshWatchingNode;
-(void)_startWatchingNode;
-(void)_stopWatchingNode;
-(void)_updateWatchingNode;
-(void)_startWatchingParent;
-(void)_stopWatchingParent;
-(void)startWatching;
-(void)stopWatching;
@end

