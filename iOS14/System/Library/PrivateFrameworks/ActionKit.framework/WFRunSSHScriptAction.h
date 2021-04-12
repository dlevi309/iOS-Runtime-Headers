/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

