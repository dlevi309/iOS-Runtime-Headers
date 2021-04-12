/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
*/

#import <UIKitCore/UIView.h>

@protocol WFWidgetConfigurationCardHeaderViewDelegate;
@class UILabel, NSLayoutConstraint, UIStackView, UIButton;

@interface WFWidgetConfigurationCardHeaderView : UIView {

	id<WFWidgetConfigurationCardHeaderViewDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSLayoutConstraint* _bottomAreaHeightConstraint;
	UIStackView* _labelsStackView;
	UIButton* _closeButton;
	double _widgetDescriptionTallScriptCompensatedSpacing;

}

@property (nonatomic,readonly) NSLayoutConstraint * bottomAreaHeightConstraint;                            //@synthesize bottomAreaHeightConstraint=_bottomAreaHeightConstraint - In the implementation block
@property (nonatomic,readonly) UIStackView * labelsStackView;                                              //@synthesize labelsStackView=_labelsStackView - In the implementation block
@property (nonatomic,readonly) UIButton * closeButton;                                                     //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic) double widgetDescriptionTallScriptCompensatedSpacing;                         //@synthesize widgetDescriptionTallScriptCompensatedSpacing=_widgetDescriptionTallScriptCompensatedSpacing - In the implementation block
@property (assign,nonatomic,__weak) id<WFWidgetConfigurationCardHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(UILabel *)titleLabel;
-(id<WFWidgetConfigurationCardHeaderViewDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<WFWidgetConfigurationCardHeaderViewDelegate>)arg1 ;
-(UILabel *)subtitleLabel;
-(id)initWithRequest:(id)arg1 ;
-(UIStackView *)labelsStackView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIButton *)closeButton;
-(void)setWidgetDescriptionTallScriptCompensatedSpacing:(double)arg1 ;
-(double)widgetDescriptionTallScriptCompensatedSpacing;
-(id)initWithIcon:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(NSLayoutConstraint *)bottomAreaHeightConstraint;
@end

