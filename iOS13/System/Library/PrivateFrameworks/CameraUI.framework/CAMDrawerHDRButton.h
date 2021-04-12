/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMControlDrawerMenuButton.h>

@interface CAMDrawerHDRButton : CAMControlDrawerMenuButton {

	BOOL _allowAutoHDR;
	BOOL _allowHDROn;
	long long _hdrMode;

}

@property (assign,setter=setHDRMode:,nonatomic) long long hdrMode;              //@synthesize hdrMode=_hdrMode - In the implementation block
@property (assign,nonatomic) BOOL allowAutoHDR;                                 //@synthesize allowAutoHDR=_allowAutoHDR - In the implementation block
@property (assign,nonatomic) BOOL allowHDROn;                                   //@synthesize allowHDROn=_allowHDROn - In the implementation block
-(long long)hdrMode;
-(long long)controlType;
-(void)setHDRMode:(long long)arg1 ;
-(id)imageNameForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(void)setAllowAutoHDR:(BOOL)arg1 ;
-(void)setAllowHDROn:(BOOL)arg1 ;
-(void)didSelectMenuItem:(id)arg1 ;
-(BOOL)isMenuItemSelected:(id)arg1 ;
-(id)loadMenuItems;
-(BOOL)allowHDROn;
-(BOOL)allowAutoHDR;
@end

