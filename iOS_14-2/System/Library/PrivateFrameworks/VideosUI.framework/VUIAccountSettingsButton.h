/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIButton.h>

@class AAUIProfilePictureStore;

@interface VUIAccountSettingsButton : VUIButton {

	AAUIProfilePictureStore* _profilePictureStore;

}

@property (nonatomic,retain) AAUIProfilePictureStore * profilePictureStore;              //@synthesize profilePictureStore=_profilePictureStore - In the implementation block
-(void)_setup;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)setProfilePictureStore:(AAUIProfilePictureStore *)arg1 ;
-(AAUIProfilePictureStore *)profilePictureStore;
-(void)_setupAccountImageView;
-(void)_updateAccountImage;
-(void)_updateAccountButtonVisibility:(BOOL)arg1 ;
-(id)initWithButtonLayout:(id)arg1 interfaceStyle:(long long)arg2 ;
@end

