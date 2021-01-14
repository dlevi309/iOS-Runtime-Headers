/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMControlDrawerMenuButton.h>

@interface CAMDrawerHDRButton : CAMControlDrawerMenuButton {

	BOOL _allowAutoHDR;
	BOOL _allowHDROn;
	long long _hdrMode;

}

@property (assign,nonatomic) BOOL allowAutoHDR;                                 //@synthesize allowAutoHDR=_allowAutoHDR - In the implementation block
@property (assign,nonatomic) BOOL allowHDROn;                                   //@synthesize allowHDROn=_allowHDROn - In the implementation block
@property (assign,setter=setHDRMode:,nonatomic) long long hdrMode;              //@synthesize hdrMode=_hdrMode - In the implementation block
-(void)setHDRMode:(long long)arg1 ;
-(long long)hdrMode;
-(id)imageNameForCurrentState;
-(long long)controlType;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(BOOL)shouldShowSlashForCurrentState;
-(void)setHDRMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setAllowAutoHDR:(BOOL)arg1 ;
-(void)setAllowHDROn:(BOOL)arg1 ;
-(void)didSelectMenuItem:(id)arg1 ;
-(BOOL)isMenuItemSelected:(id)arg1 ;
-(id)loadMenuItems;
-(BOOL)allowHDROn;
-(BOOL)allowAutoHDR;
@end

