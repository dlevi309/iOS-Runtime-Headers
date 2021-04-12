/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIPrototypingMenuCell.h>

@class UISwitch;

@interface _UIPrototypingMenuBoolCell : _UIPrototypingMenuCell {

	UISwitch* _valueSwitch;

}

@property (nonatomic,retain) UISwitch * valueSwitch;              //@synthesize valueSwitch=_valueSwitch - In the implementation block
+(long long)_layoutAxis;
-(UISwitch *)valueSwitch;
-(void)_switchDidChangeValue:(id)arg1 ;
-(void)_prototypingSettingDidChange;
-(void)setValueSwitch:(UISwitch *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

