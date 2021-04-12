/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMControlDrawerMenuButton.h>

@interface CAMDrawerLivePhotoButton : CAMControlDrawerMenuButton {

	long long _livePhotoMode;

}

@property (assign,nonatomic) long long livePhotoMode;              //@synthesize livePhotoMode=_livePhotoMode - In the implementation block
-(long long)controlType;
-(long long)livePhotoMode;
-(id)imageNameForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(void)setLivePhotoMode:(long long)arg1 ;
-(void)didSelectMenuItem:(id)arg1 ;
-(BOOL)isMenuItemSelected:(id)arg1 ;
-(id)loadMenuItems;
@end

