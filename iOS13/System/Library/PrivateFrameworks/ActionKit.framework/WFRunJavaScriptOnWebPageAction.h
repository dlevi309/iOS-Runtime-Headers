/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/WFRemoteQuarantinePolicyEvaluatorDelegate.h>

@class NSString;

@interface WFRunJavaScriptOnWebPageAction : WFAction <WFRemoteQuarantinePolicyEvaluatorDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)userInterfaceToPresentAlertForEvaluator:(id)arg1 ;
-(void)evaluateQuarantineWithJavaScript:(id)arg1 webPage:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getWebPageFromInput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_getErrorFromScript:(id)arg1 ;
@end

