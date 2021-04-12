/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UIContentView.h>

@class WFParameterValuePickerTableViewCellConfiguration, UILabel, UIImageView, UIStackView, NSString;

@interface WFParameterValuePickerTableViewCellContentView : UIView <UIContentView> {

	WFParameterValuePickerTableViewCellConfiguration* _configuration;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _iconImageView;
	UIStackView* _contentStackView;
	UIStackView* _labelsStackView;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                                   //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * iconImageView;                                               //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,readonly) UIStackView * contentStackView;                                            //@synthesize contentStackView=_contentStackView - In the implementation block
@property (nonatomic,readonly) UIStackView * labelsStackView;                                             //@synthesize labelsStackView=_labelsStackView - In the implementation block
@property (nonatomic,copy) WFParameterValuePickerTableViewCellConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(UIImageView *)iconImageView;
-(id)initWithConfiguration:(id)arg1 ;
-(UILabel *)subtitleLabel;
-(WFParameterValuePickerTableViewCellConfiguration *)configuration;
-(UIStackView *)labelsStackView;
-(void)setConfiguration:(WFParameterValuePickerTableViewCellConfiguration *)arg1 ;
-(UIStackView *)contentStackView;
-(void)applyConfiguration:(id)arg1 ;
@end

