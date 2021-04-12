/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIView.h>

@interface WFParameterHostingView : UIView {

	 hostingController;
	 initialState;
	 updatedState;

}
+(BOOL)supportsParameterClass:(Class)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)configureViewWithParameter:(id)arg1 state:(id)arg2 editable:(BOOL)arg3 processing:(BOOL)arg4 shouldFocus:(BOOL)arg5 variableProvider:(id)arg6 variableUIDelegate:(id)arg7 updateBlock:(/*^block*/id)arg8 ;
-(void)attachToParentViewController:(id)arg1 ;
-(void)detachFromParentViewController;
@end

