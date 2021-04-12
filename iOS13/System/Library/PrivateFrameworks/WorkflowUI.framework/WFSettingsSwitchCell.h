/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFSettingsCell.h>

@class UISwitch;

@interface WFSettingsSwitchCell : WFSettingsCell {

	UISwitch* _switchControl;

}

@property (nonatomic,__weak,readonly) UISwitch * switchControl;              //@synthesize switchControl=_switchControl - In the implementation block
-(void)prepareForReuse;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UISwitch *)switchControl;
@end

