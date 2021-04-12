/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIEnrollmentBaseView.h>

@class UIView, VTUIButton;

@interface VTUIEnrollmentSuccessView : VTUIEnrollmentBaseView {

	UIView* _footerView;
	VTUIButton* _finishButton;

}

@property (nonatomic,readonly) VTUIButton * finishButton;              //@synthesize finishButton=_finishButton - In the implementation block
-(id)footerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_createFooter;
-(VTUIButton *)finishButton;
-(void)_setupContent;
-(BOOL)showPrivacyTextView;
@end

