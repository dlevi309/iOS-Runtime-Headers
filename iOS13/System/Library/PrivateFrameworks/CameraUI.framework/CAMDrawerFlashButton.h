/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMControlDrawerMenuButton.h>

@interface CAMDrawerFlashButton : CAMControlDrawerMenuButton {

	BOOL _flashUnavailable;
	long long _flashMode;

}

@property (assign,nonatomic) long long flashMode;                                          //@synthesize flashMode=_flashMode - In the implementation block
@property (assign,getter=isFlashUnavailable,nonatomic) BOOL flashUnavailable;              //@synthesize flashUnavailable=_flashUnavailable - In the implementation block
-(long long)controlType;
-(long long)flashMode;
-(void)setFlashMode:(long long)arg1 ;
-(BOOL)isExpandable;
-(BOOL)isFlashUnavailable;
-(id)imageNameForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(void)setFlashUnavailable:(BOOL)arg1 ;
-(void)didSelectMenuItem:(id)arg1 ;
-(BOOL)isMenuItemSelected:(id)arg1 ;
-(id)loadMenuItems;
@end

