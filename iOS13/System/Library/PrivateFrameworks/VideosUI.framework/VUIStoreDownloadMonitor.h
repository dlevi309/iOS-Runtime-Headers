/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/SSDownloadManagerObserver.h>

@class SSDownloadManager, SSDownload, TVPStateMachine, NSMutableArray, NSString;

@interface VUIStoreDownloadMonitor : NSObject <SSDownloadManagerObserver> {

	SSDownloadManager* _downloadManager;
	SSDownload* _download;
	TVPStateMachine* _stateMachine;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,retain) SSDownloadManager * downloadManager;              //@synthesize downloadManager=_downloadManager - In the implementation block
@property (nonatomic,retain) SSDownload * download;                            //@synthesize download=_download - In the implementation block
@property (nonatomic,retain) TVPStateMachine * stateMachine;                   //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(SSDownload *)download;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(NSMutableArray *)completionHandlers;
-(TVPStateMachine *)stateMachine;
-(void)setStateMachine:(TVPStateMachine *)arg1 ;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(void)setDownload:(SSDownload *)arg1 ;
-(SSDownloadManager *)downloadManager;
-(void)setDownloadManager:(SSDownloadManager *)arg1 ;
-(void)_registerStateMachineHandlers;
-(id)initWithDownload:(id)arg1 downloadManager:(id)arg2 ;
-(void)waitForDownloadToBecomePlayableWithCompletion:(/*^block*/id)arg1 ;
@end

