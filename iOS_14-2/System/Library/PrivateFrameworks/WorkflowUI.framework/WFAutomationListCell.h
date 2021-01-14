/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class WFConfiguredTrigger, WFWorkflow, HFTriggerItem, NSString, WFAutomationSummaryIconsView, UILabel;

@interface WFAutomationListCell : UITableViewCell {

	WFConfiguredTrigger* _configuredTrigger;
	WFWorkflow* _workflow;
	HFTriggerItem* _homeTrigger;
	NSString* _identifier;
	WFAutomationSummaryIconsView* _summaryIconsView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) WFConfiguredTrigger * configuredTrigger;                        //@synthesize configuredTrigger=_configuredTrigger - In the implementation block
@property (nonatomic,retain) WFWorkflow * workflow;                                          //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) HFTriggerItem * homeTrigger;                                    //@synthesize homeTrigger=_homeTrigger - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) WFAutomationSummaryIconsView * summaryIconsView;              //@synthesize summaryIconsView=_summaryIconsView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;                                   //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(UILabel *)titleLabel;
-(void)configureWithModel:(id)arg1 ;
-(void)prepareForReuse;
-(WFWorkflow *)workflow;
-(void)updateUI;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(UILabel *)descriptionLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(WFConfiguredTrigger *)configuredTrigger;
-(void)setConfiguredTrigger:(id)arg1 workflow:(id)arg2 ;
-(void)setHomeTrigger:(HFTriggerItem *)arg1 ;
-(void)setConfiguredTrigger:(WFConfiguredTrigger *)arg1 ;
-(HFTriggerItem *)homeTrigger;
-(WFAutomationSummaryIconsView *)summaryIconsView;
@end

