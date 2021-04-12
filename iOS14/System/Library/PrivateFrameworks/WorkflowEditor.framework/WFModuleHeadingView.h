/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIView.h>

@class WFAction;

@interface WFModuleHeadingView : UIView {

	WFAction* _accessibilityAnnouncementAction;

}

@property (assign,nonatomic,__weak) WFAction * accessibilityAnnouncementAction;              //@synthesize accessibilityAnnouncementAction=_accessibilityAnnouncementAction - In the implementation block
-(id)accessibilityLabel;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(unsigned long long)accessibilityTraits;
-(BOOL)accessibilityActivate;
-(WFAction *)accessibilityAnnouncementAction;
-(void)setAccessibilityAnnouncementAction:(WFAction *)arg1 ;
@end

