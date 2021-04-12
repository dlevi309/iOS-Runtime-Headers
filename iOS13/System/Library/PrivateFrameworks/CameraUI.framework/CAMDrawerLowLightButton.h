/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMControlDrawerCustomButton.h>

@interface CAMDrawerLowLightButton : CAMControlDrawerCustomButton {

	BOOL _on;
	BOOL _disabled;

}

@property (assign,getter=isOn,nonatomic) BOOL on;                          //@synthesize on=_on - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;              //@synthesize disabled=_disabled - In the implementation block
-(BOOL)isDisabled;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)adjustsImageWhenDisabled;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(long long)controlType;
-(id)imageNameForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
@end

