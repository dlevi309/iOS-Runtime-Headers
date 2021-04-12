/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class AVURLAsset;

@interface _MPCURLAssetDownloadCompletionObserver : NSObject {

	AVURLAsset* _asset;
	/*^block*/id _completionHandler;

}

@property (nonatomic,__weak,readonly) AVURLAsset * asset;              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) id completionHandler;                       //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)dealloc;
-(AVURLAsset *)asset;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(void)_downloadCompleteSuccessNotification:(id)arg1 ;
-(void)_downloadCompleteFailedNotification:(id)arg1 ;
-(void)_notifyCompletionHandlerWithSuccess:(BOOL)arg1 error:(id)arg2 ;
@end

