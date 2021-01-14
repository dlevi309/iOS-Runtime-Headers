/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFBackgroundSessionTask.h>
#import <libobjc.A.dylib/AVAssetDownloadDelegate.h>
#import <libobjc.A.dylib/AVAssetDownloadDelegatePrivate.h>

@class AVURLAsset, NSArray, NSString, NSData, NSDictionary, NSURLSession;

@interface __NSCFBackgroundAVAggregateAssetDownloadTask : __NSCFBackgroundSessionTask <AVAssetDownloadDelegate, AVAssetDownloadDelegatePrivate> {

	BOOL _sentWillDownloadToURL;
	BOOL _sentWillBeginDelayedRequest;
	AVURLAsset* _URLAsset;
	unsigned long long _AVAssetDownloadToken;
	NSArray* _mediaSelections;
	NSString* _assetTitle;
	NSData* _assetArtworkData;
	NSDictionary* _options;
	NSString* _childAssetDownloadTasksSessionIdentifier;
	NSURLSession* _childAssetDownloadSession;
	NSArray* _childAssetDownloadTasks;

}

@property (retain) AVURLAsset * URLAsset;                           //@synthesize URLAsset=_URLAsset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 willBeginDelayedRequest:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)currentRequest;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(AVURLAsset *)URLAsset;
-(void)setURLAsset:(AVURLAsset *)arg1 ;
-(void)_onqueue_suspend;
-(id)originalRequest;
-(id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3 ;
-(void)_onqueue_resume;
-(BOOL)_isAVAssetTask;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)_onqueue_cancel;
-(void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3 ;
-(id)response;
-(void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didLoadTimeRange:(SCD_Struct_NS27)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(SCD_Struct_NS27)arg5 ;
-(void)dealloc;
@end

