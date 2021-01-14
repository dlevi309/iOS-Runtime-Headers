/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateUI;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)triggerIconView;
-(void)setTriggerTypeClass:(Class)arg1 ;
-(Class)triggerTypeClass;
-(UILabel *)triggerTitleLabel;
-(UILabel *)triggerDescriptionLabel;
@end

