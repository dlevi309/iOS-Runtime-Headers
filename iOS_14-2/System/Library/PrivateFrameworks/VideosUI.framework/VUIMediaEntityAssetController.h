/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

@class VUIMediaEntityType, VUIMediaEntityAssetControllerState;


@protocol VUIMediaEntityAssetController <NSObject>
@property (nonatomic,copy,readonly) NSObject*<VUIMediaEntityIdentifier> mediaEntityIdentifier; 
@property (nonatomic,copy,readonly) VUIMediaEntityType * mediaEntityType; 
@property (assign,nonatomic,__weak) id<VUIMediaEntityAssetControllerDelegate> delegate; 
@property (nonatomic,readonly) BOOL supportsStartingDownload; 
@property (nonatomic,readonly) BOOL supportsRedownloadingContent; 
@property (nonatomic,copy,readonly) VUIMediaEntityAssetControllerState * state; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionDispatchQueue; 
@property (nonatomic,readonly) BOOL contentAllowsCellularDownload; 
@required
-(id<VUIMediaEntityAssetControllerDelegate>)delegate;
-(VUIMediaEntityType *)mediaEntityType;
-(NSObject*<OS_dispatch_queue>)completionDispatchQueue;
-(void)setDelegate:(id)arg1;
-(VUIMediaEntityAssetControllerState *)state;
-(void)invalidate;
-(void)cancelAndRemoveDownload;
-(void)setCompletionDispatchQueue:(id)arg1;
-(void)fetchNewKeysForDownloadedVideo;
-(BOOL)contentAllowsCellularDownload;
-(void)startDownloadAllowingCellular:(BOOL)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(NSObject*<VUIMediaEntityIdentifier>)mediaEntityIdentifier;
-(void)deleteAndRedownloadAllowingCellular:(BOOL)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)pauseDownload;
-(void)resumeDownload;
-(void)cancelKeyFetch;
-(BOOL)supportsStartingDownload;
-(BOOL)supportsRedownloadingContent;

@end

