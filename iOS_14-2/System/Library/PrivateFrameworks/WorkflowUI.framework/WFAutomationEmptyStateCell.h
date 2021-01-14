/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@class WFAutomationTypeExplanationPlatterView;

@interface WFAutomationEmptyStateCell : UITableViewCell {

	WFAutomationTypeExplanationPlatterView* _automationTypeView;

}

@property (nonatomic,readonly) WFAutomationTypeExplanationPlatterView * automationTypeView;              //@synthesize automationTypeView=_automationTypeView - In the implementation block
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)configureForAutomationType:(unsigned long long)arg1 buttonTarget:(id)arg2 action:(SEL)arg3 ;
-(WFAutomationTypeExplanationPlatterView *)automationTypeView;
@end

