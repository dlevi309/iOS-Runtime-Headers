/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UISwitch, MTMaterialView;

@interface SBTodayKeepOnHomeScreenPlatterView : UIView {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UISwitch* _pinnedSwitch;
	MTMaterialView* _backgroundView;

}

@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                   //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UISwitch * pinnedSwitch;                      //@synthesize pinnedSwitch=_pinnedSwitch - In the implementation block
@property (nonatomic,retain) MTMaterialView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,getter=isPinned,nonatomic) BOOL pinned; 
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(BOOL)isPinned;
-(id)traitCollection;
-(void)setPinned:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundView:(MTMaterialView *)arg1 ;
-(MTMaterialView *)backgroundView;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)_pinnedSwitchValueChanged:(id)arg1 ;
-(UISwitch *)pinnedSwitch;
-(void)setPinnedSwitch:(UISwitch *)arg1 ;
@end

