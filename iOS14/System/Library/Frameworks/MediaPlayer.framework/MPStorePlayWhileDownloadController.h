/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>
#import <libobjc.A.dylib/SSDownloadHandlerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, SSDownloadHandler, NSMapTable, NSMutableArray, NSString;

@interface MPStorePlayWhileDownloadController : NSObject <MPStoreDownloadManagerObserver, SSDownloadHandlerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	SSDownloadHandler* _downloadHandler;
	NSMapTable* _downloadToActiveSessions;
	NSMapTable* _downloadToDownloadTokenPendingCompletionHandlers;
	NSMapTable* _downloadToProcessingDownloadHandlerSessions;
	NSMapTable* _downloadToObservationTransactionCount;
	NSMapTable* _downloadToValidStatePendingCompletionHandlers;
	NSMutableArray* _pausedDownloads;
	NSMutableArray* _prioritizedDownloads;

}

@property (nonatomic,readonly) long long downloadHandlerIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(id)init;
-(void)downloadHandler:(id)arg1 handleSession:(id)arg2 ;
-(void)downloadHandler:(id)arg1 cancelSession:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(long long)downloadHandlerIdentifier;
-(void)_endPrioritizingDownload:(id)arg1 ;
-(void)acquirePlayWhileDownloadSessionForDownload:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)endPrioritizingDownloadSession:(id)arg1 ;
-(void)beginPrioritizingDownloadSession:(id)arg1 ;
-(void)releasePlayWhileDownloadSession:(id)arg1 ;
-(void)_beginPrioritizingDownload:(id)arg1 ;
-(void)_beginDownloadObservationForDownload:(id)arg1 ;
-(void)_beginPrioritizingDownloadSession:(id)arg1 ;
-(void)_endDownloadObservationForDownload:(id)arg1 ;
-(void)_endPrioritizingDownloadSession:(id)arg1 ;
-(void)_handleDownloadPrioritization;
-(void)_getDownloadPropertiesForStoreDownload:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_updateActiveSessionsForDownload:(id)arg1 ;
-(void)_getDownloadTokenForStoreDownload:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isStoreDownloadValidForPlayWhileDownload:(id)arg1 ;
-(void)_postActiveSessionsDidFinishForStoreDownload:(id)arg1 ;
-(void)_suspendUntilValidDownloadStateForStoreDownload:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_updateForDownloadStateRefreshWithDownload:(id)arg1 ;
-(void)_updateForDownloadTokenRefreshWithDownload:(id)arg1 ;
-(void)dealloc;
@end

