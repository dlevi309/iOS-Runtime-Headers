/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIPrototypingMenuCell.h>

@class UISwitch;

@interface _UIPrototypingMenuBoolCell : _UIPrototypingMenuCell {

	UISwitch* _valueSwitch;

}

@property (nonatomic,retain) UISwitch * valueSwitch;              //@synthesize valueSwitch=_valueSwitch - In the implementation block
+(long long)_layoutAxis;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_switchDidChangeValue:(id)arg1 ;
-(void)_prototypingSettingDidChange;
-(UISwitch *)valueSwitch;
-(void)setValueSwitch:(UISwitch *)arg1 ;
@end

