/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRemoteExecutionRequest.h>
#import <libobjc.A.dylib/WFPBCodable.h>

@class NSString, NSDictionary, NSError;

@interface WFRemoteExecutionAceCommandRequestResponse : WFRemoteExecutionRequest <WFPBCodable> {

	NSString* _originatingRequestIdentifier;
	NSDictionary* _aceCommandResponseDictionary;
	NSError* _error;

}

@property (nonatomic,readonly) NSString * originatingRequestIdentifier;                  //@synthesize originatingRequestIdentifier=_originatingRequestIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * aceCommandResponseDictionary;              //@synthesize aceCommandResponseDictionary=_aceCommandResponseDictionary - In the implementation block
@property (nonatomic,readonly) NSError * error;                                          //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)version;
-(NSError *)error;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(BOOL)readMessageFromData:(id)arg1 error:(id*)arg2 ;
-(id)writeMessageToWriter:(id)arg1 error:(id*)arg2 ;
-(id)initWithOriginatingRequestIdentifier:(id)arg1 aceCommandResponseDictionary:(id)arg2 error:(id)arg3 ;
-(NSString *)originatingRequestIdentifier;
-(NSDictionary *)aceCommandResponseDictionary;
@end

