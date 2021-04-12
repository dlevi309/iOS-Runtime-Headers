/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView;

@interface WFWorkflowConflictCell : UITableViewCell {

	UIImageView* _iconImageView;

}

@property (assign,nonatomic,__weak) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
+(id)uncheckedImage;
+(id)checkedImage;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)updateImages;
-(void)setConflictedWorkflow:(id)arg1 fromDevice:(id)arg2 isRemote:(BOOL)arg3 ;
@end

