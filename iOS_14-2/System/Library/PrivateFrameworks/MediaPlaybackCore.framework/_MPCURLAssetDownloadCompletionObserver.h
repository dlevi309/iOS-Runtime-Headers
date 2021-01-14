/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class AVURLAsset;

@interface _MPCURLAssetDownloadCompletionObserver : NSObject {

	AVURLAsset* _asset;
	/*^block*/id _completionHandler;

}

@property (nonatomic,__weak,readonly) AVURLAsset * asset;              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) id completionHandler;                       //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(AVURLAsset *)asset;
-(id)completionHandler;
-(id)initWithAsset:(id)arg1 ;
-(void)dealloc;
-(void)_downloadCompleteSuccessNotification:(id)arg1 ;
-(void)_downloadCompleteFailedNotification:(id)arg1 ;
-(void)_notifyCompletionHandlerWithSuccess:(BOOL)arg1 error:(id)arg2 ;
@end

