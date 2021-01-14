/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRemoteExecutionSession.h>

@class WFRemoteExecutionAskWhenRunRequest;

@interface WFRemoteExecutionOutgoingAskWhenRunSession : WFRemoteExecutionSession {

	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                                                 //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) WFRemoteExecutionAskWhenRunRequest * request; 
-(void)finish;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)finishWithError:(id)arg1 ;
-(id)initWithService:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendToDestinations:(id)arg1 options:(id)arg2 ;
-(void)handleIncomingProtobuf:(id)arg1 ;
-(void)handleTimeout;
-(double)timeoutLimitInSeconds;
-(void)finishWithoutCallingCompletion;
@end

