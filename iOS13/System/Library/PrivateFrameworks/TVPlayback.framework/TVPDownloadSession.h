/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <libobjc.A.dylib/AVAssetDownloadDelegate.h>

@protocol TVPDownloadSessionDelegate;
@class AVAssetDownloadURLSession, NSMutableDictionary, NSString;

@interface TVPDownloadSession : NSObject <AVAssetDownloadDelegate> {

	id<TVPDownloadSessionDelegate> _delegate;
	AVAssetDownloadURLSession* _downloadSession;
	NSMutableDictionary* _taskIDsToDownloads;

}

@property (nonatomic,retain) AVAssetDownloadURLSession * downloadSession;                 //@synthesize downloadSession=_downloadSession - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * taskIDsToDownloads;                    //@synthesize taskIDsToDownloads=_taskIDsToDownloads - In the implementation block
@property (assign,nonatomic,__weak) id<TVPDownloadSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id<TVPDownloadSessionDelegate>)delegate;
-(void)setDelegate:(id<TVPDownloadSessionDelegate>)arg1 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didCompleteForMediaSelection:(id)arg3 ;
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didLoadTimeRange:(SCD_Struct_TV2)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(SCD_Struct_TV2)arg5 forMediaSelection:(id)arg6 ;
-(id)aggregateAssetDownloadTaskWithURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 ;
-(id)downloadForMediaItem:(id)arg1 ;
-(void)registerDownloadTask:(id)arg1 forDownload:(id)arg2 ;
-(AVAssetDownloadURLSession *)downloadSession;
-(void)unregisterDownloadTaskForDownload:(id)arg1 ;
-(void)setDownloadSession:(AVAssetDownloadURLSession *)arg1 ;
-(NSMutableDictionary *)taskIDsToDownloads;
-(void)initializeWithDownloadingMediaItems:(id)arg1 ;
-(void)setTaskIDsToDownloads:(NSMutableDictionary *)arg1 ;
@end

