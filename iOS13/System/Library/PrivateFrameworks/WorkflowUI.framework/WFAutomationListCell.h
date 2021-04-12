/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@class WFConfiguredTrigger, WFWorkflow, HFTriggerItem, WFAutomationSummaryIconsView, UILabel, UIColor;

@interface WFAutomationListCell : UITableViewCell {

	WFConfiguredTrigger* _configuredTrigger;
	WFWorkflow* _workflow;
	HFTriggerItem* _homeTrigger;
	WFAutomationSummaryIconsView* _summaryIconsView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIColor* _normalBackgroundColor;
	UIColor* _selectedBackgroundColor;

}

@property (nonatomic,retain) WFConfiguredTrigger * configuredTrigger;                        //@synthesize configuredTrigger=_configuredTrigger - In the implementation block
@property (nonatomic,retain) WFWorkflow * workflow;                                          //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) HFTriggerItem * homeTrigger;                                    //@synthesize homeTrigger=_homeTrigger - In the implementation block
@property (nonatomic,readonly) WFAutomationSummaryIconsView * summaryIconsView;              //@synthesize summaryIconsView=_summaryIconsView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;                                   //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) UIColor * normalBackgroundColor;                              //@synthesize normalBackgroundColor=_normalBackgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * selectedBackgroundColor;                            //@synthesize selectedBackgroundColor=_selectedBackgroundColor - In the implementation block
-(void)prepareForReuse;
-(UILabel *)titleLabel;
-(UILabel *)descriptionLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIColor *)normalBackgroundColor;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(void)updateUI;
-(UIColor *)selectedBackgroundColor;
-(void)setConfiguredTrigger:(id)arg1 workflow:(id)arg2 ;
-(void)setHomeTrigger:(HFTriggerItem *)arg1 ;
-(WFConfiguredTrigger *)configuredTrigger;
-(void)setConfiguredTrigger:(WFConfiguredTrigger *)arg1 ;
-(HFTriggerItem *)homeTrigger;
-(WFAutomationSummaryIconsView *)summaryIconsView;
@end

