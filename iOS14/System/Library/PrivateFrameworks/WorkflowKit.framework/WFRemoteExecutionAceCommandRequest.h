/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRemoteExecutionRequest.h>
#import <libobjc.A.dylib/WFPBCodable.h>

@class NSDictionary, NSString;

@interface WFRemoteExecutionAceCommandRequest : WFRemoteExecutionRequest <WFPBCodable> {

	NSDictionary* _aceCommandDictionary;

}

@property (nonatomic,readonly) NSDictionary * aceCommandDictionary;              //@synthesize aceCommandDictionary=_aceCommandDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)version;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(BOOL)readMessageFromData:(id)arg1 error:(id*)arg2 ;
-(id)writeMessageToWriter:(id)arg1 error:(id*)arg2 ;
-(id)initWithAceCommandDictionary:(id)arg1 ;
-(NSDictionary *)aceCommandDictionary;
@end

