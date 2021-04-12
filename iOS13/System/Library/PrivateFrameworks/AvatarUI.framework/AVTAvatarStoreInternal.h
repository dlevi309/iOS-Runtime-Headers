/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTAvatarStoreInternal <AVTAvatarStore,AVTStickerBackend>
@required
+(unsigned long long)maximumNumberOfFetchableAvatars;
+(unsigned long long)maximumNumberOfSavableAvatars;
-(void)saveAvatarRecord:(id)arg1 thumbnailAvatar:(id)arg2 completionBlock:(/*^block*/id)arg3 thumbnailGenerationCompletionBlock:(/*^block*/id)arg4;
-(void)deleteAvatarWithIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)duplicateAvatar:(id)arg1 completionBlock:(/*^block*/id)arg2;

@end

