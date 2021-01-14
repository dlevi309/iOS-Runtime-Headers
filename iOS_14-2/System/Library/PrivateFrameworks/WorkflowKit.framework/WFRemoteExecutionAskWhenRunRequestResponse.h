/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRemoteExecutionRequest.h>

@class NSString, NSDictionary, NSError, NSMutableArray;

@interface WFRemoteExecutionAskWhenRunRequestResponse : WFRemoteExecutionRequest {

	NSString* _originatingRequestIdentifier;
	NSDictionary* _inputtedStates;
	NSError* _error;
	NSMutableArray* _inputtedStatesData;

}

@property (nonatomic,retain) NSMutableArray * inputtedStatesData;                    //@synthesize inputtedStatesData=_inputtedStatesData - In the implementation block
@property (nonatomic,readonly) NSString * originatingRequestIdentifier;              //@synthesize originatingRequestIdentifier=_originatingRequestIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * inputtedStates;                        //@synthesize inputtedStates=_inputtedStates - In the implementation block
@property (nonatomic,readonly) NSError * error;                                      //@synthesize error=_error - In the implementation block
+(long long)version;
-(NSError *)error;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(BOOL)readMessageFromData:(id)arg1 error:(id*)arg2 ;
-(id)writeMessageToWriter:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)inputtedStates;
-(NSString *)originatingRequestIdentifier;
-(id)initWithOriginatingRequestIdentifier:(id)arg1 inputtedStates:(id)arg2 error:(id)arg3 ;
-(void)inflateInputtedStatesWithAction:(id)arg1 ;
-(NSMutableArray *)inputtedStatesData;
-(void)setInputtedStatesData:(NSMutableArray *)arg1 ;
@end

