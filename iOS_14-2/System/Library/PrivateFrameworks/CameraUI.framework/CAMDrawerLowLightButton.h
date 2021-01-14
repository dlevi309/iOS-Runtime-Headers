/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMControlDrawerCustomButton.h>

@interface CAMDrawerLowLightButton : CAMControlDrawerCustomButton {

	BOOL _on;
	BOOL _disabled;

}

@property (assign,getter=isOn,nonatomic) BOOL on;                          //@synthesize on=_on - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;              //@synthesize disabled=_disabled - In the implementation block
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)isOn;
-(void)setOn:(BOOL)arg1 ;
-(id)imageNameForCurrentState;
-(BOOL)isDisabled;
-(void)setDisabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)controlType;
-(BOOL)adjustsImageWhenDisabled;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(BOOL)shouldShowSlashForCurrentState;
@end

