/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFIconCell.h>

@class UIImageView, UILabel, WFHomeScreenIcon;

@interface WFAddToHomeIconPreviewCell : WFIconCell {

	UIImageView* _iconImageView;
	UILabel* _iconLabel;
	WFHomeScreenIcon* _icon;

}

@property (assign,nonatomic,__weak) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * iconLabel;                      //@synthesize iconLabel=_iconLabel - In the implementation block
@property (nonatomic,retain) WFHomeScreenIcon * icon;                         //@synthesize icon=_icon - In the implementation block
+(double)defaultRowHeight;
-(UIImageView *)iconImageView;
-(void)setIconLabel:(UILabel *)arg1 ;
-(WFHomeScreenIcon *)icon;
-(void)setIcon:(WFHomeScreenIcon *)arg1 ;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)iconLabel;
-(void)redrawIcon;
-(void)configureWithName:(id)arg1 icon:(id)arg2 ;
-(void)configureName:(id)arg1 ;
-(void)configureIcon:(id)arg1 ;
@end

