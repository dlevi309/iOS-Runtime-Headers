/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRemoteExecutionSession.h>

@class WFRemoteExecutionAceCommandRequest;

@interface WFRemoteExecutionOutgoingAceCommandSession : WFRemoteExecutionSession {

	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                                                 //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) WFRemoteExecutionAceCommandRequest * request; 
-(void)finish;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)finishWithError:(id)arg1 ;
-(id)initWithService:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendToDestinations:(id)arg1 options:(id)arg2 ;
-(void)handleIncomingProtobuf:(id)arg1 ;
@end

