/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <libobjc.A.dylib/WFUIKitUserInterface.h>
#import <libobjc.A.dylib/WFUIKitUserInterfaceImpl.h>

@class UIViewController, NSString, UIView;

@interface WFConcreteUIKitUserInterface : NSObject <WFUIKitUserInterface, WFUIKitUserInterfaceImpl> {

	UIViewController* _viewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UIView * view; 
-(UIView *)view;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
-(void)presentAlert:(id)arg1 ;
@end

