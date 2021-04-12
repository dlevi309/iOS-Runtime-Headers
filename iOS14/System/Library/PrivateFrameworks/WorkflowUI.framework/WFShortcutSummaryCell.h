/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@class WFRowOfIconsView, UILabel, UIStackView;

@interface WFShortcutSummaryCell : UITableViewCell {

	WFRowOfIconsView* _actionIconsView;
	UILabel* _summaryLabel;
	UIStackView* _mainStackView;

}

@property (nonatomic,retain) WFRowOfIconsView * actionIconsView;              //@synthesize actionIconsView=_actionIconsView - In the implementation block
@property (nonatomic,retain) UILabel * summaryLabel;                          //@synthesize summaryLabel=_summaryLabel - In the implementation block
@property (nonatomic,retain) UIStackView * mainStackView;                     //@synthesize mainStackView=_mainStackView - In the implementation block
-(void)prepareForReuse;
-(void)setSummaryLabel:(UILabel *)arg1 ;
-(UIStackView *)mainStackView;
-(UILabel *)summaryLabel;
-(void)setMainStackView:(UIStackView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(WFRowOfIconsView *)actionIconsView;
-(void)configureWithTitle:(id)arg1 actionIcons:(id)arg2 ;
-(void)removeActionViewIfNeeded;
-(void)addActionViewIfNeeded;
-(void)setActionIconsView:(WFRowOfIconsView *)arg1 ;
@end

