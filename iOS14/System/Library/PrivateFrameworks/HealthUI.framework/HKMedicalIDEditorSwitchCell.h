/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol HKMedicalIDEditorSwitchDelegate;
@class UISwitch;

@interface HKMedicalIDEditorSwitchCell : UITableViewCell {

	UISwitch* _switch;
	id<HKMedicalIDEditorSwitchDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HKMedicalIDEditorSwitchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HKMedicalIDEditorSwitchDelegate>)delegate;
-(void)setDelegate:(id<HKMedicalIDEditorSwitchDelegate>)arg1 ;
-(void)_switchSwitched:(id)arg1 ;
-(id)initWithTitle:(id)arg1 defaultState:(BOOL)arg2 ;
-(void)setUIDisabled;
@end

