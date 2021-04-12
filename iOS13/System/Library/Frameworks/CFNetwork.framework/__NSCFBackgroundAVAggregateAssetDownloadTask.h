/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFBackgroundSessionTask.h>
#import <libobjc.A.dylib/AVAssetDownloadDelegate.h>

@class AVURLAsset, NSArray, NSString, NSData, NSDictionary, NSURLSession;

@interface __NSCFBackgroundAVAggregateAssetDownloadTask : __NSCFBackgroundSessionTask <AVAssetDownloadDelegate> {

	BOOL _sentWillDownloadToURL;
	BOOL _sentWillBeginDelayedRequest;
	unsigned long long _AVAssetDownloadToken;
	AVURLAsset* _URLAsset;
	NSArray* _mediaSelections;
	NSString* _assetTitle;
	NSData* _assetArtworkData;
	NSDictionary* _options;
	NSString* _childAssetDownloadTasksSessionIdentifier;
	NSURLSession* _childAssetDownloadSession;
	NSArray* _childAssetDownloadTasks;

}

@property (assign) unsigned long long AVAssetDownloadToken;                            //@synthesize AVAssetDownloadToken=_AVAssetDownloadToken - In the implementation block
@property (retain) AVURLAsset * URLAsset;                                              //@synthesize URLAsset=_URLAsset - In the implementation block
@property (retain) NSArray * mediaSelections;                                          //@synthesize mediaSelections=_mediaSelections - In the implementation block
@property (copy) NSString * assetTitle;                                                //@synthesize assetTitle=_assetTitle - In the implementation block
@property (copy) NSData * assetArtworkData;                                            //@synthesize assetArtworkData=_assetArtworkData - In the implementation block
@property (copy) NSDictionary * options;                                               //@synthesize options=_options - In the implementation block
@property (readonly) NSString * childAssetDownloadTasksSessionIdentifier;              //@synthesize childAssetDownloadTasksSessionIdentifier=_childAssetDownloadTasksSessionIdentifier - In the implementation block
@property (readonly) NSURLSession * childAssetDownloadSession;                         //@synthesize childAssetDownloadSession=_childAssetDownloadSession - In the implementation block
@property (readonly) NSArray * childAssetDownloadTasks;                                //@synthesize childAssetDownloadTasks=_childAssetDownloadTasks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)childSessionConfigurationWithClientConfiguration:(id)arg1 identifier:(id)arg2 ;
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)response;
-(id)originalRequest;
-(void)URLSession:(id)arg1 task:(id)arg2 willBeginDelayedRequest:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)currentRequest;
-(void)_onqueue_cancel;
-(void)_onqueue_suspend;
-(void)_onqueue_resume;
-(unsigned long long)AVAssetDownloadToken;
-(void)setAVAssetDownloadToken:(unsigned long long)arg1 ;
-(NSString *)childAssetDownloadTasksSessionIdentifier;
-(id)initWithTaskGroup:(id)arg1 URLAsset:(id)arg2 mediaSelections:(id)arg3 assetTitle:(id)arg4 assetArtworkData:(id)arg5 options:(id)arg6 ident:(unsigned long long)arg7 ;
-(BOOL)_isAVAssetTask;
-(id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3 ;
-(NSString *)assetTitle;
-(void)setAssetTitle:(NSString *)arg1 ;
-(NSData *)assetArtworkData;
-(void)setAssetArtworkData:(NSData *)arg1 ;
-(AVURLAsset *)URLAsset;
-(void)setURLAsset:(AVURLAsset *)arg1 ;
-(void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didLoadTimeRange:(SCD_Struct_NS47)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(SCD_Struct_NS47)arg5 ;
-(void)_onqueue_childTask:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)_onqueue_childTask:(id)arg1 willBeginDelayedRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_onqueue_childTask:(id)arg1 willDownloadToURL:(id)arg2 ;
-(void)_onqueue_childTask:(id)arg1 didLoadTimeRange:(SCD_Struct_NS47)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(SCD_Struct_NS47)arg4 ;
-(void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3 ;
-(NSArray *)mediaSelections;
-(void)setMediaSelections:(NSArray *)arg1 ;
-(NSURLSession *)childAssetDownloadSession;
-(NSArray *)childAssetDownloadTasks;
@end

