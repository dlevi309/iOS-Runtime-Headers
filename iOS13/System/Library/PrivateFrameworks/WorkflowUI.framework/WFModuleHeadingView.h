/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class WFAction;

@interface WFModuleHeadingView : UIView {

	WFAction* _accessibilityAnnouncementAction;

}

@property (assign,nonatomic,__weak) WFAction * accessibilityAnnouncementAction;              //@synthesize accessibilityAnnouncementAction=_accessibilityAnnouncementAction - In the implementation block
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)accessibilityActivate;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(WFAction *)accessibilityAnnouncementAction;
-(void)setAccessibilityAnnouncementAction:(WFAction *)arg1 ;
@end

