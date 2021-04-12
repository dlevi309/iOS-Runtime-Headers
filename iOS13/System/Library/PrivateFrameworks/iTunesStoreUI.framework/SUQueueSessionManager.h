/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface SUQueueSessionManager : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _downloadManagers;
	NSMutableArray* _preorderManagers;

}
-(id)init;
-(void)dealloc;
-(void)endDownloadManagerSessionForManager:(id)arg1 ;
-(id)beginDownloadManagerSessionForDownloadKind:(id)arg1 ;
-(id)beginDownloadManagerSessionWithDownloadKinds:(id)arg1 ;
-(id)beginPreorderManagerSessionWithItemKinds:(id)arg1 ;
-(void)endPreorderManagerSessionWithManager:(id)arg1 ;
-(id)beginDownloadManagerSessionWithManagerOptions:(id)arg1 ;
-(id)_queueSessionWithManagerOptions:(id)arg1 fromArray:(id)arg2 ;
-(id)_queueSessionWithDownloadKinds:(id)arg1 fromArray:(id)arg2 ;
-(id)_queueSessionWithQueue:(id)arg1 fromArray:(id)arg2 ;
-(void)_endQueueSession:(id)arg1 fromArray:(id)arg2 ;
@end

