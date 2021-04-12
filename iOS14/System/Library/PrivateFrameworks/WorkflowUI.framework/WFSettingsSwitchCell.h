/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFSettingsCell.h>

@class UISwitch;

@interface WFSettingsSwitchCell : WFSettingsCell {

	UISwitch* _switchControl;

}

@property (nonatomic,__weak,readonly) UISwitch * switchControl;              //@synthesize switchControl=_switchControl - In the implementation block
-(void)prepareForReuse;
-(UISwitch *)switchControl;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

