/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

