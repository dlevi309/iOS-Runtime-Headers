/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRemoteExecutionSession.h>

@class NSData;

@interface WFRemoteExecutionOutgoingRunRequestResponseSession : WFRemoteExecutionSession {

	NSData* _responseData;

}

@property (nonatomic,readonly) NSData * responseData;              //@synthesize responseData=_responseData - In the implementation block
-(NSData *)responseData;
-(void)sendToDestinations:(id)arg1 options:(id)arg2 ;
-(void)handleTimeout;
-(double)timeoutLimitInSeconds;
-(id)initWithService:(id)arg1 responseData:(id)arg2 ;
@end

