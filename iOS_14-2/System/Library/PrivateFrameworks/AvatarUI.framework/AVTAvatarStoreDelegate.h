/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTAvatarStoreDelegate <NSObject>
@optional
-(void)store:(id)arg1 didSaveAvatar:(id)arg2 postCompletionHandler:(/*^block*/id)arg3;
-(void)store:(id)arg1 didDeleteAvatarWithIdentifier:(id)arg2 postCompletionHandler:(/*^block*/id)arg3;
-(void)store:(id)arg1 didCreateDuplicateAvatar:(id)arg2 forOriginal:(id)arg3 postCompletionHandler:(/*^block*/id)arg4;

@end

