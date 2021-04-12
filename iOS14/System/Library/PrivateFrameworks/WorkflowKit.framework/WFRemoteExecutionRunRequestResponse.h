/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRemoteExecutionRequest.h>
#import <libobjc.A.dylib/WFPBCodable.h>

@class NSString, NSDictionary, WFContentCollection, NSError, NSMutableArray, NSData, WFRemoteExecutionCoordinator;

@interface WFRemoteExecutionRunRequestResponse : WFRemoteExecutionRequest <WFPBCodable> {

	NSString* _runRequestIdentifier;
	NSDictionary* _variables;
	WFContentCollection* _output;
	NSError* _error;
	NSMutableArray* _variablesData;
	NSMutableArray* _outputData;
	NSData* _errorData;
	WFRemoteExecutionCoordinator* _coordinator;

}

@property (nonatomic,retain) NSMutableArray * variablesData;                          //@synthesize variablesData=_variablesData - In the implementation block
@property (nonatomic,retain) NSMutableArray * outputData;                             //@synthesize outputData=_outputData - In the implementation block
@property (nonatomic,retain) NSData * errorData;                                      //@synthesize errorData=_errorData - In the implementation block
@property (nonatomic,retain) WFRemoteExecutionCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,readonly) NSString * runRequestIdentifier;                       //@synthesize runRequestIdentifier=_runRequestIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * variables;                              //@synthesize variables=_variables - In the implementation block
@property (nonatomic,readonly) WFContentCollection * output;                          //@synthesize output=_output - In the implementation block
@property (nonatomic,readonly) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)version;
-(void)setCoordinator:(WFRemoteExecutionCoordinator *)arg1 ;
-(WFContentCollection *)output;
-(NSError *)error;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(NSMutableArray *)outputData;
-(NSDictionary *)variables;
-(void)setOutputData:(NSMutableArray *)arg1 ;
-(WFRemoteExecutionCoordinator *)coordinator;
-(BOOL)readMessageFromData:(id)arg1 error:(id*)arg2 ;
-(id)writeMessageToWriter:(id)arg1 error:(id*)arg2 ;
-(id)initWithRunRequestIdentifier:(id)arg1 variables:(id)arg2 output:(id)arg3 error:(id)arg4 ;
-(void)inflateWithFileCoordinator:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)inflateVariablesData:(id)arg1 fileCoordinator:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)inflateOutputData:(id)arg1 fileCoordinator:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)runRequestIdentifier;
-(NSMutableArray *)variablesData;
-(void)setVariablesData:(NSMutableArray *)arg1 ;
-(NSData *)errorData;
-(void)setErrorData:(NSData *)arg1 ;
@end

