/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@protocol HKSwitchTableViewCellDelegate;
@class UILabel, UISwitch, NSString;

@interface HKSwitchTableViewCell : UITableViewCell {

	UILabel* _countLabel;
	UISwitch* _switch;
	BOOL _shouldHideSwitch;
	BOOL _enabled;
	BOOL _centersIcon;
	id<HKSwitchTableViewCellDelegate> _delegate;
	NSString* _displayText;

}

@property (assign,nonatomic,__weak) id<HKSwitchTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldHideSwitch;                                          //@synthesize shouldHideSwitch=_shouldHideSwitch - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL centersIcon;                                               //@synthesize centersIcon=_centersIcon - In the implementation block
@property (nonatomic,readonly) CGSize iconSize; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (nonatomic,copy) NSString * displayText;                                           //@synthesize displayText=_displayText - In the implementation block
+(id)reuseIdentifier;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id<HKSwitchTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<HKSwitchTableViewCellDelegate>)arg1 ;
-(BOOL)isEnabled;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)adjustsFontSizeToFitWidth;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
-(CGSize)iconSize;
-(void)setIconImage:(id)arg1 ;
-(void)_updateFont;
-(void)_setupUI;
-(void)switchValueChanged:(id)arg1 ;
-(void)setCentersIcon:(BOOL)arg1 ;
-(void)setShouldHideSwitch:(BOOL)arg1 ;
-(void)setCountText:(id)arg1 ;
-(void)_contextSizeCategoryChanged;
-(id)_displayLabelFont;
-(BOOL)shouldHideSwitch;
-(BOOL)centersIcon;
@end

