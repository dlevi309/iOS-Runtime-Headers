/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(void)setInputView:(id)arg1 ;
-(id)inputView;
-(BOOL)canBecomeFirstResponder;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setForceUpdatable:(id<FIUIHealthSettingsForceUpdatable>)arg1 ;
-(id<FIUIHealthSettingsForceUpdatable>)forceUpdatable;
@end

