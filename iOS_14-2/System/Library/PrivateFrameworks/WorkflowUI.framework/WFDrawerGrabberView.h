/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)accessibilityLabel;
-(id)init;
-(BOOL)isAccessibilityElement;
-(id)accessibilityValue;
-(CGRect)accessibilityFrame;
-(id)accessibilityCustomActions;
-(id)accessibilityHint;
-(BOOL)accessibilityActivate;
-(WFDrawerController *)drawerController;
-(void)setDrawerController:(WFDrawerController *)arg1 ;
-(BOOL)accessibilityCollapseDrawer;
-(BOOL)accessibilityExpandDrawer;
@end

