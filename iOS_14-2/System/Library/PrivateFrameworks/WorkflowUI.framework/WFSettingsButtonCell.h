/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFSettingsCell.h>

@interface WFSettingsButtonCell : WFSettingsCell {

	BOOL _enabled;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(long long)cellStyle;
-(void)tintColorDidChange;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)disabledTintColor;
@end

