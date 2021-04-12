/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@interface AVTStickerRecentsPresetsProvider : NSObject
+(void)filteredAndPaddedStickerRecordsWithRecents:(id)arg1 paddingMemojiIdentifier:(id)arg2 avatarStore:(id)arg3 numberOfStickers:(long long)arg4 resultBlock:(/*^block*/id)arg5 ;
+(id)paddedStickerRecordsWithRecents:(id)arg1 paddingMemojiIdentifier:(id)arg2 numberOfStickers:(long long)arg3 ;
+(id)filteredRecentStickers:(id)arg1 withAvailableRecordIdentifiersMap:(id)arg2 ;
+(id)presetsGivenOneMemojiWithIdentifier:(id)arg1 ;
+(id)presetsGivenNoMemoji;
@end

