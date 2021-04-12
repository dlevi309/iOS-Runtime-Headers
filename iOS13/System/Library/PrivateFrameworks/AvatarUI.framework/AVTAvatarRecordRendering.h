/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@interface AVTAvatarRecordRendering : NSObject
+(id)avatarForRecord:(id)arg1 ;
+(id)imageForRecord:(id)arg1 scope:(id)arg2 ;
+(id)configurationForRecord:(id)arg1 coreModel:(id)arg2 ;
+(void)preloadAllAvatarsWithStore:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)memojiForRecord:(id)arg1 ;
+(void)_castRecord:(id)arg1 andDoRecordHandlingBlock:(/*^block*/id)arg2 puppetHandlingBlock:(/*^block*/id)arg3 ;
+(void)preloadAvatarsWithIdentifiers:(id)arg1 store:(id)arg2 environment:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)preloadAllAvatarsWithStore:(id)arg1 environment:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)preloadAvatarsWithFetchRequests:(id)arg1 store:(id)arg2 environment:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)preloadAvatarsWithIdentifiers:(id)arg1 store:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

