/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMIntensityStatusIndicator : CAMControlStatusIndicator {

	BOOL _on;

}

@property (assign,getter=isOn,nonatomic) BOOL on;              //@synthesize on=_on - In the implementation block
-(BOOL)isOn;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)shouldUseOutline;
-(id)imageNameForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
@end

