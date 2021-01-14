/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SSDownload *)download;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(void)setStateMachine:(TVPStateMachine *)arg1 ;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(TVPStateMachine *)stateMachine;
-(SSDownloadManager *)downloadManager;
-(NSMutableArray *)completionHandlers;
-(void)setDownloadManager:(SSDownloadManager *)arg1 ;
-(void)dealloc;
-(void)setDownload:(SSDownload *)arg1 ;
-(void)_registerStateMachineHandlers;
-(id)initWithDownload:(id)arg1 downloadManager:(id)arg2 ;
-(void)waitForDownloadToBecomePlayableWithCompletion:(/*^block*/id)arg1 ;
@end

