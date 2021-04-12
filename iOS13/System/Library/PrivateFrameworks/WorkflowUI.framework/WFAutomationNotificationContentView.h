/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(UIStackView *)stackView;
-(UILabel *)descriptionLabel;
-(void)updateUIFromNotification:(id)arg1 ;
-(WFRowOfIconsView *)actionIconsView;
@end

