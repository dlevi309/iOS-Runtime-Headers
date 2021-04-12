/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/NMSSHSessionDelegate.h>

@class NSString;

@interface WFRunSSHScriptAction : WFAction <NMSSHSessionDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)session:(id)arg1 didDisconnectWithError:(id)arg2 ;
-(void)authenticateAndRunAsynchronouslyWithInput:(id)arg1 session:(id)arg2 ;
-(void)finishRunningSSHScriptWithError:(id)arg1 ;
@end

