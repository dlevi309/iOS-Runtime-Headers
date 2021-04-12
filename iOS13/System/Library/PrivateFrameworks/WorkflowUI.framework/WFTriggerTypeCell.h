/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel;

@interface WFTriggerTypeCell : UITableViewCell {

	Class _triggerTypeClass;
	UIImageView* _triggerIconView;
	UILabel* _triggerTitleLabel;
	UILabel* _triggerDescriptionLabel;

}

@property (nonatomic,readonly) UIImageView * triggerIconView;                  //@synthesize triggerIconView=_triggerIconView - In the implementation block
@property (nonatomic,readonly) UILabel * triggerTitleLabel;                    //@synthesize triggerTitleLabel=_triggerTitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * triggerDescriptionLabel;              //@synthesize triggerDescriptionLabel=_triggerDescriptionLabel - In the implementation block
@property (nonatomic,retain) Class triggerTypeClass;                           //@synthesize triggerTypeClass=_triggerTypeClass - In the implementation block
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateUI;
-(UIImageView *)triggerIconView;
-(void)setTriggerTypeClass:(Class)arg1 ;
-(Class)triggerTypeClass;
-(UILabel *)triggerTitleLabel;
-(UILabel *)triggerDescriptionLabel;
@end

