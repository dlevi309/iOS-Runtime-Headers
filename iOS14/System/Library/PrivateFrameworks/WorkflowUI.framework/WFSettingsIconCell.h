/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFSettingsCell.h>

@class UIImageView, UIImage;

@interface WFSettingsIconCell : WFSettingsCell {

	UIImageView* _iconView;

}

@property (assign,nonatomic,__weak) UIImageView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic,__weak) UIImage * icon; 
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

