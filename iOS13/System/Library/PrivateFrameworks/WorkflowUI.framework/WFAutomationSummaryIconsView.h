/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, UIImageView, HUTriggerIconView, WFRowOfIconsView;

@interface WFAutomationSummaryIconsView : UIView {

	UIStackView* _stackView;
	UIImageView* _triggerIconView;
	HUTriggerIconView* _homeTriggerIconView;
	UIImageView* _arrowImageView;
	WFRowOfIconsView* _actionsIconsView;

}

@property (nonatomic,readonly) UIStackView * stackView;                            //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UIImageView * triggerIconView;                        //@synthesize triggerIconView=_triggerIconView - In the implementation block
@property (nonatomic,retain) HUTriggerIconView * homeTriggerIconView;              //@synthesize homeTriggerIconView=_homeTriggerIconView - In the implementation block
@property (nonatomic,readonly) UIImageView * arrowImageView;                       //@synthesize arrowImageView=_arrowImageView - In the implementation block
@property (nonatomic,readonly) WFRowOfIconsView * actionsIconsView;                //@synthesize actionsIconsView=_actionsIconsView - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIStackView *)stackView;
-(UIImageView *)arrowImageView;
-(void)setTriggerIcon:(id)arg1 ;
-(void)setHomeTriggerIcon:(id)arg1 ;
-(void)setActionIcons:(id)arg1 ;
-(void)setHomeActionIcons:(id)arg1 ;
-(UIImageView *)triggerIconView;
-(void)setTriggerIconView:(UIImageView *)arg1 ;
-(HUTriggerIconView *)homeTriggerIconView;
-(void)setHomeTriggerIconView:(HUTriggerIconView *)arg1 ;
-(WFRowOfIconsView *)actionsIconsView;
@end

