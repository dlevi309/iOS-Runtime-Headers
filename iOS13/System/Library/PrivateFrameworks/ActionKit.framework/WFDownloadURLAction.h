/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@interface WFDownloadURLAction : WFAction
+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)configureRuntimeResourcesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getContentsOfURLItem:(id)arg1 expectedByteCountHandler:(/*^block*/id)arg2 writtenByteCountHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)configureHTTPBodyForRequest:(id)arg1 withMethod:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

