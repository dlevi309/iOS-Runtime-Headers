/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@interface AVTStickerRecentsPresetsProvider : NSObject
+(void)filteredAndPaddedStickerRecordsWithRecents:(id)arg1 paddingMemojiIdentifier:(id)arg2 avatarStore:(id)arg3 numberOfStickers:(long long)arg4 resultBlock:(/*^block*/id)arg5 ;
+(id)presetsGivenOneMemojiWithIdentifier:(id)arg1 ;
+(id)paddedStickerRecordsWithRecents:(id)arg1 paddingMemojiIdentifier:(id)arg2 numberOfStickers:(long long)arg3 ;
+(id)filteredRecentStickers:(id)arg1 withAvailableRecordIdentifiersMap:(id)arg2 ;
+(id)presetsGivenNoMemoji;
@end

