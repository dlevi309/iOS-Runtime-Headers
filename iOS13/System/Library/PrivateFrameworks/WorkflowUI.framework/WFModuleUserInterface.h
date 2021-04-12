/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <libobjc.A.dylib/WFUIKitUserInterface.h>

@class UIViewController, UIView, NSString;

@interface WFModuleUserInterface : NSObject <WFUIKitUserInterface> {

	UIView* _view;
	UIViewController* _viewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UIView * view;                                  //@synthesize view=_view - In the implementation block
-(UIView *)view;
-(UIViewController *)viewController;
-(void)presentAlert:(id)arg1 ;
-(id)initWithView:(id)arg1 inViewController:(id)arg2 ;
@end

