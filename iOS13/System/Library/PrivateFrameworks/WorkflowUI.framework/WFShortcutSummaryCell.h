/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIStackView *)mainStackView;
-(void)setMainStackView:(UIStackView *)arg1 ;
-(UILabel *)summaryLabel;
-(void)setSummaryLabel:(UILabel *)arg1 ;
-(WFRowOfIconsView *)actionIconsView;
-(void)configureWithTitle:(id)arg1 actionIcons:(id)arg2 ;
-(void)removeActionViewIfNeeded;
-(void)addActionViewIfNeeded;
-(void)setActionIconsView:(WFRowOfIconsView *)arg1 ;
@end

