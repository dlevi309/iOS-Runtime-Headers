/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, WFRowOfIconsView, UILabel;

@interface WFAutomationNotificationContentView : UIView {

	UIStackView* _stackView;
	WFRowOfIconsView* _actionIconsView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,readonly) UIStackView * stackView;                         //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) WFRowOfIconsView * actionIconsView;              //@synthesize actionIconsView=_actionIconsView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;                      //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIStackView *)stackView;
-(UILabel *)descriptionLabel;
-(void)updateUIFromNotification:(id)arg1 ;
-(WFRowOfIconsView *)actionIconsView;
@end

