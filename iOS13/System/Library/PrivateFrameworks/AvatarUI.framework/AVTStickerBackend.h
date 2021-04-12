/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTStickerBackend <NSObject>
@property (assign,nonatomic,__weak) id<AVTStickerBackendDelegate> stickerBackendDelegate; 
@optional
-(id<AVTStickerBackendDelegate>)stickerBackendDelegate;
-(void)setStickerBackendDelegate:(id)arg1;

@required
-(id)recentStickersForFetchRequest:(id)arg1 error:(id*)arg2;
-(void)didUseStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)deleteRecentStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)deleteRecentStickersForChangeTracker:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

