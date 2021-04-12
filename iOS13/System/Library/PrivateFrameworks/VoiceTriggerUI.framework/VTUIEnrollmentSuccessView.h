/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIEnrollmentStateView.h>

@class UIView, VTUIButton;

@interface VTUIEnrollmentSuccessView : VTUIEnrollmentStateView {

	UIView* _footerView;
	VTUIButton* _finishButton;

}

@property (nonatomic,readonly) VTUIButton * finishButton;              //@synthesize finishButton=_finishButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(VTUIButton *)finishButton;
-(id)footerView;
-(id)_createFooter;
-(void)_setupContent;
-(void)_setupImage;
-(BOOL)suppressFinishButton;
@end

