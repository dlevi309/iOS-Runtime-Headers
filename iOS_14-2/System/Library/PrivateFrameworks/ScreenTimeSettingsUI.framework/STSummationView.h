/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UIView.h>

@class UILabel;

@interface STSummationView : UIView {

	UILabel* _titleLabel;
	UILabel* _detailLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;              //@synthesize detailLabel=_detailLabel - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 ;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(UILabel *)detailLabel;
@end

