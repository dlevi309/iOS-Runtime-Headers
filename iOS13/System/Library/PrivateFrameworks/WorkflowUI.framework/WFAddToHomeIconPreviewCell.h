/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel;

@interface WFAddToHomeIconPreviewCell : UITableViewCell {

	UIImageView* _iconImageView;
	UILabel* _iconLabel;

}

@property (assign,nonatomic,__weak) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * iconLabel;                      //@synthesize iconLabel=_iconLabel - In the implementation block
+(double)defaultRowHeight;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(UILabel *)iconLabel;
-(void)setIconLabel:(UILabel *)arg1 ;
-(void)configureWithName:(id)arg1 icon:(id)arg2 ;
-(void)configureName:(id)arg1 ;
-(void)configureIcon:(id)arg1 ;
@end

