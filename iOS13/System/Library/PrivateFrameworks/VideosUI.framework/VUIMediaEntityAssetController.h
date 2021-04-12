/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

@class VUIMediaEntityType, VUIMediaEntityAssetControllerState;


@protocol VUIMediaEntityAssetController <NSObject>
@property (nonatomic,copy,readonly) NSObject*<VUIMediaEntityIdentifier> mediaEntityIdentifier; 
@property (nonatomic,copy,readonly) VUIMediaEntityType * mediaEntityType; 
@property (assign,nonatomic,__weak) id<VUIMediaEntityAssetControllerDelegate> delegate; 
@property (nonatomic,readonly) BOOL supportsStartingDownload; 
@property (nonatomic,copy,readonly) VUIMediaEntityAssetControllerState * state; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionDispatchQueue; 
@required
-(void)invalidate;
-(id<VUIMediaEntityAssetControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(VUIMediaEntityAssetControllerState *)state;
-(VUIMediaEntityType *)mediaEntityType;
-(NSObject*<OS_dispatch_queue>)completionDispatchQueue;
-(void)resumeDownload;
-(void)cancelAndRemoveDownload;
-(void)setCompletionDispatchQueue:(id)arg1;
-(NSObject*<VUIMediaEntityIdentifier>)mediaEntityIdentifier;
-(void)startDownloadAllowingCellular:(BOOL)arg1 quality:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)pauseDownload;
-(BOOL)supportsStartingDownload;

@end

