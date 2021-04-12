/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRemoteExecutionRequest.h>

@class NSString;

@interface WFRemoteExecutionStopRequest : WFRemoteExecutionRequest {

	NSString* _requestIdentifier;

}

@property (nonatomic,readonly) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
+(long long)version;
-(NSString *)requestIdentifier;
-(id)initWithRequestIdentifier:(id)arg1 ;
-(BOOL)readMessageFromData:(id)arg1 error:(id*)arg2 ;
-(id)writeMessageToWriter:(id)arg1 error:(id*)arg2 ;
@end

