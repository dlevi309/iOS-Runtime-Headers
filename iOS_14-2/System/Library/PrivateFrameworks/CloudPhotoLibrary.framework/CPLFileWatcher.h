/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFileURL:(NSURL *)arg1 ;
-(void)startWatching;
-(id<CPLFileWatcherDelegate>)delegate;
-(NSURL *)fileURL;
-(void)setDelegate:(id<CPLFileWatcherDelegate>)arg1 ;
-(id)initWithFileURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)_forceRefreshWatchingNode;
-(void)_startWatchingNode;
-(void)_stopWatchingNode;
-(void)_updateWatchingNode;
-(void)_startWatchingParent;
-(void)_stopWatchingParent;
-(void)stopWatching;
@end

