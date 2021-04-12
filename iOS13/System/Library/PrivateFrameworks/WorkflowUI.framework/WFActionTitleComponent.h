/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKCompositeComponent.h>

@class CKComponent;

@interface WFActionTitleComponent : CKCompositeComponent {

	CKComponent* _leadingComponent;
	CKTypedComponentAction<> _action;
	BOOL _enabled;

}
+(id)newWithIcon:(id)arg1 attributedTitle:(id)arg2 enabled:(BOOL)arg3 action:(CKTypedComponentAction<>)arg4 ;
-(void)componentTapped:(id)arg1 ;
@end

