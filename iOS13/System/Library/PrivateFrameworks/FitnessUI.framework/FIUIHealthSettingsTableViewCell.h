/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol FIUIHealthSettingsForceUpdatable;
@class UIView;

@interface FIUIHealthSettingsTableViewCell : UITableViewCell {

	UIView* _inputView;
	id<FIUIHealthSettingsForceUpdatable> _forceUpdatable;

}

@property (assign,nonatomic,__weak) id<FIUIHealthSettingsForceUpdatable> forceUpdatable;              //@synthesize forceUpdatable=_forceUpdatable - In the implementation block
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(id)inputView;
-(void)setInputView:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setForceUpdatable:(id<FIUIHealthSettingsForceUpdatable>)arg1 ;
-(id<FIUIHealthSettingsForceUpdatable>)forceUpdatable;
@end

