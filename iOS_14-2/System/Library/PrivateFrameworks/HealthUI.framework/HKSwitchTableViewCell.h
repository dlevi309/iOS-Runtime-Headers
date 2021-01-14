/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isOn;
-(id<HKSwitchTableViewCellDelegate>)delegate;
-(void)setOn:(BOOL)arg1 ;
-(void)switchValueChanged:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)setCountText:(id)arg1 ;
-(CGSize)iconSize;
-(void)setDelegate:(id<HKSwitchTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setIconImage:(id)arg1 ;
-(void)setDisplayText:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)_setupUI;
-(NSString *)displayText;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateFont;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)setCentersIcon:(BOOL)arg1 ;
-(void)setShouldHideSwitch:(BOOL)arg1 ;
-(void)_contextSizeCategoryChanged;
-(id)_displayLabelFont;
-(BOOL)shouldHideSwitch;
-(BOOL)centersIcon;
@end

