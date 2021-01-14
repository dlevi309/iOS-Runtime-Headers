/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMControlDrawerMenuButton.h>

@interface CAMDrawerLivePhotoButton : CAMControlDrawerMenuButton {

	long long _livePhotoMode;

}

@property (assign,nonatomic) long long livePhotoMode;              //@synthesize livePhotoMode=_livePhotoMode - In the implementation block
-(long long)livePhotoMode;
-(void)setLivePhotoMode:(long long)arg1 ;
-(id)imageNameForCurrentState;
-(long long)controlType;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(BOOL)shouldShowSlashForCurrentState;
-(void)setLivePhotoMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)didSelectMenuItem:(id)arg1 ;
-(BOOL)isMenuItemSelected:(id)arg1 ;
-(id)loadMenuItems;
@end

