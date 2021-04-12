/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, _UIGrabber, WFDrawerController;

@interface WFDrawerGrabberView : UIView {

	NSArray* _accessibilityCustomActions;
	_UIGrabber* _grabber;
	WFDrawerController* _drawerController;

}

@property (assign,nonatomic,__weak) WFDrawerController * drawerController;              //@synthesize drawerController=_drawerController - In the implementation block
-(id)init;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityActivate;
-(id)accessibilityCustomActions;
-(WFDrawerController *)drawerController;
-(void)setDrawerController:(WFDrawerController *)arg1 ;
-(BOOL)accessibilityCollapseDrawer;
-(BOOL)accessibilityExpandDrawer;
@end

