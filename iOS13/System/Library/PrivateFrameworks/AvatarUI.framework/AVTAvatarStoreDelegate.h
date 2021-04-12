/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTAvatarStoreDelegate <NSObject>
@optional
-(void)store:(id)arg1 didSaveAvatar:(id)arg2 postCompletionHandler:(/*^block*/id)arg3;
-(void)store:(id)arg1 didDeleteAvatarWithIdentifier:(id)arg2 postCompletionHandler:(/*^block*/id)arg3;
-(void)store:(id)arg1 didCreateDuplicateAvatar:(id)arg2 forOriginal:(id)arg3 postCompletionHandler:(/*^block*/id)arg4;

@end

