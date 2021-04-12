/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didCompleteForMediaSelection:(id)arg3 ;
-(id)aggregateAssetDownloadTaskWithURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 ;
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didLoadTimeRange:(SCD_Struct_TV2)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(SCD_Struct_TV2)arg5 forMediaSelection:(id)arg6 ;
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3 ;
-(id)init;
-(id<TVPDownloadSessionDelegate>)delegate;
-(void)setDelegate:(id<TVPDownloadSessionDelegate>)arg1 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(id)downloadForMediaItem:(id)arg1 ;
-(void)initializeWithDownloadingMediaItems:(id)arg1 ;
-(AVAssetDownloadURLSession *)downloadSession;
-(void)registerDownloadTask:(id)arg1 forDownload:(id)arg2 ;
-(void)unregisterDownloadTaskForDownload:(id)arg1 ;
-(void)setDownloadSession:(AVAssetDownloadURLSession *)arg1 ;
-(NSMutableDictionary *)taskIDsToDownloads;
-(void)setTaskIDsToDownloads:(NSMutableDictionary *)arg1 ;
@end

