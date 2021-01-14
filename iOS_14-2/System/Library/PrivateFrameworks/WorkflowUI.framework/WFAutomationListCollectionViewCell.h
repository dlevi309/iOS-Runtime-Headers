/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class WFConfiguredTrigger, WFWorkflow, HFTriggerItem, NSString, WFAutomationSummaryIconsView, UILabel, UIView, NSLayoutConstraint;

@interface WFAutomationListCollectionViewCell : UICollectionViewCell {

	WFConfiguredTrigger* _configuredTrigger;
	WFWorkflow* _workflow;
	HFTriggerItem* _homeTrigger;
	NSString* _identifier;
	WFAutomationSummaryIconsView* _summaryIconsView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIView* _separatorView;
	NSLayoutConstraint* _separatorViewHeightConstraint;

}

@property (nonatomic,retain) WFConfiguredTrigger * configuredTrigger;                           //@synthesize configuredTrigger=_configuredTrigger - In the implementation block
@property (nonatomic,retain) WFWorkflow * workflow;                                             //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) HFTriggerItem * homeTrigger;                                       //@synthesize homeTrigger=_homeTrigger - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) WFAutomationSummaryIconsView * summaryIconsView;                 //@synthesize summaryIconsView=_summaryIconsView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;                                      //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) UIView * separatorView;                                          //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * separatorViewHeightConstraint;              //@synthesize separatorViewHeightConstraint=_separatorViewHeightConstraint - In the implementation block
@property (assign) unsigned long long maskedCorners; 
@property (assign) BOOL showsSeparator; 
-(UILabel *)titleLabel;
-(UIView *)separatorView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)configureWithModel:(id)arg1 ;
-(void)prepareForReuse;
-(unsigned long long)maskedCorners;
-(WFWorkflow *)workflow;
-(void)updateUI;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(BOOL)showsSeparator;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setShowsSeparator:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)descriptionLabel;
-(WFConfiguredTrigger *)configuredTrigger;
-(void)setConfiguredTrigger:(id)arg1 workflow:(id)arg2 ;
-(void)setHomeTrigger:(HFTriggerItem *)arg1 ;
-(void)setConfiguredTrigger:(WFConfiguredTrigger *)arg1 ;
-(HFTriggerItem *)homeTrigger;
-(WFAutomationSummaryIconsView *)summaryIconsView;
-(NSLayoutConstraint *)separatorViewHeightConstraint;
@end

