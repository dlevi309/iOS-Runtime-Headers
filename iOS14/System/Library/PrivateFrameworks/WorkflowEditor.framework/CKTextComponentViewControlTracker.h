/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@class NSTextCheckingResult;

@interface CKTextComponentViewControlTracker : NSObject {

	NSTextCheckingResult* _trackingTextCheckingResult;

}
-(void)endTrackingForTextComponentView:(id)arg1 withTouch:(id)arg2 withEvent:(id)arg3 ;
-(void)cancelTrackingForTextComponentView:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingForTextComponentView:(id)arg1 withTouch:(id)arg2 withEvent:(id)arg3 ;
-(BOOL)beginTrackingForTextComponentView:(id)arg1 withTouch:(id)arg2 withEvent:(id)arg3 ;
-(void)_sendActionsToControl:(id)arg1 forControlEvents:(unsigned long long)arg2 withEvent:(id)arg3 ;
@end

