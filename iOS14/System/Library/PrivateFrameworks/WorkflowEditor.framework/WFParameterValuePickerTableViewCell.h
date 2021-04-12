/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <UIKitCore/UITableViewCell.h>

@protocol WFParameterValuePickable;
@class WFParameter, WFCodableAttributeBackedSubstitutableState, UILabel, UIImageView, NSLayoutConstraint, UIStackView;

@interface WFParameterValuePickerTableViewCell : UITableViewCell {

	WFParameter*<WFParameterValuePickable> _parameter;
	WFCodableAttributeBackedSubstitutableState* _state;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _iconImageView;
	NSLayoutConstraint* _iconImageViewWidgetConstraint;
	NSLayoutConstraint* _subtitleHeightConstraint;
	NSLayoutConstraint* _subtitleTopConstraint;
	UIStackView* _contentStackView;
	UIStackView* _labelsStackView;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * iconImageView;                                     //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * iconImageViewWidgetConstraint;              //@synthesize iconImageViewWidgetConstraint=_iconImageViewWidgetConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * subtitleHeightConstraint;                   //@synthesize subtitleHeightConstraint=_subtitleHeightConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * subtitleTopConstraint;                      //@synthesize subtitleTopConstraint=_subtitleTopConstraint - In the implementation block
@property (nonatomic,readonly) UIStackView * contentStackView;                                  //@synthesize contentStackView=_contentStackView - In the implementation block
@property (nonatomic,readonly) UIStackView * labelsStackView;                                   //@synthesize labelsStackView=_labelsStackView - In the implementation block
@property (nonatomic,retain) WFParameter*<WFParameterValuePickable> parameter;                  //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,retain) WFCodableAttributeBackedSubstitutableState * state;                //@synthesize state=_state - In the implementation block
-(UILabel *)titleLabel;
-(UIImageView *)iconImageView;
-(void)tintColorDidChange;
-(UILabel *)subtitleLabel;
-(WFParameter*<WFParameterValuePickable>)parameter;
-(void)setState:(WFCodableAttributeBackedSubstitutableState *)arg1 ;
-(id)configurationState;
-(WFCodableAttributeBackedSubstitutableState *)state;
-(UIStackView *)labelsStackView;
-(void)updateConfigurationUsingState:(id)arg1 ;
-(id)defaultContentConfiguration;
-(UIStackView *)contentStackView;
-(void)setParameter:(WFParameter*<WFParameterValuePickable>)arg1 ;
-(NSLayoutConstraint *)subtitleHeightConstraint;
-(NSLayoutConstraint *)iconImageViewWidgetConstraint;
-(NSLayoutConstraint *)subtitleTopConstraint;
@end

