/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRemoteExecutionSession.h>

@class WFRemoteExecutionAceCommandRequestResponse;

@interface WFRemoteExecutionIncomingAceCommandSession : WFRemoteExecutionSession {

	WFRemoteExecutionAceCommandRequestResponse* _response;

}

@property (nonatomic,retain) WFRemoteExecutionAceCommandRequestResponse * response;              //@synthesize response=_response - In the implementation block
-(WFRemoteExecutionAceCommandRequestResponse *)response;
-(void)setResponse:(WFRemoteExecutionAceCommandRequestResponse *)arg1 ;
-(void)sendToDestinations:(id)arg1 options:(id)arg2 ;
-(void)handleIncomingProtobuf:(id)arg1 destinations:(id)arg2 options:(id)arg3 ;
-(void)sendResponseWithOriginatingRequestIdentifier:(id)arg1 aceCommandResponseDictionary:(id)arg2 error:(id)arg3 destinations:(id)arg4 options:(id)arg5 ;
@end

