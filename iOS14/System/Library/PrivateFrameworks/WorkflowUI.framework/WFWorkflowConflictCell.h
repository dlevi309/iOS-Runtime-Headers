/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView;

@interface WFWorkflowConflictCell : UITableViewCell {

	UIImageView* _iconImageView;

}

@property (assign,nonatomic,__weak) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
+(id)checkedImage;
+(id)uncheckedImage;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIImageView *)iconImageView;
-(void)layoutSubviews;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateImages;
-(void)setConflictedWorkflow:(id)arg1 fromDevice:(id)arg2 isRemote:(BOOL)arg3 ;
@end

