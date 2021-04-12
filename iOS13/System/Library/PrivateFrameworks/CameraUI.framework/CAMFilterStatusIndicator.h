/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMFilterStatusIndicator : CAMControlStatusIndicator {

	BOOL _on;

}

@property (assign,getter=isOn,nonatomic) BOOL on;              //@synthesize on=_on - In the implementation block
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(BOOL)shouldUseOutline;
-(id)imageForCurrentState;
@end

