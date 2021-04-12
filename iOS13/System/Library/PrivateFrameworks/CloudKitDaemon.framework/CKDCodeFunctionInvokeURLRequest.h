/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString, NSData, NSArray;

@interface CKDCodeFunctionInvokeURLRequest : CKDURLRequest {

	/*^block*/id _serializedResultsCallback;
	NSString* _serviceName;
	NSString* _functionName;
	NSData* _serializedParameters;
	NSData* _attestationEntropy;
	NSArray* _pccWrappedInvocationKeys;

}

@property (nonatomic,copy) NSString * serviceName;                          //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * functionName;                         //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,retain) NSData * serializedParameters;                 //@synthesize serializedParameters=_serializedParameters - In the implementation block
@property (nonatomic,retain) NSData * attestationEntropy;                   //@synthesize attestationEntropy=_attestationEntropy - In the implementation block
@property (nonatomic,copy) NSArray * pccWrappedInvocationKeys;              //@synthesize pccWrappedInvocationKeys=_pccWrappedInvocationKeys - In the implementation block
@property (nonatomic,copy) id serializedResultsCallback;                    //@synthesize serializedResultsCallback=_serializedResultsCallback - In the implementation block
-(NSString *)serviceName;
-(int)operationType;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)functionName;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSData *)serializedParameters;
-(id)generateRequestOperations;
-(BOOL)requestGETPreAuth;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(BOOL)allowsAnonymousAccount;
-(void)setSerializedParameters:(NSData *)arg1 ;
-(id)serializedResultsCallback;
-(void)setSerializedResultsCallback:(id)arg1 ;
-(NSArray *)pccWrappedInvocationKeys;
-(NSData *)attestationEntropy;
-(id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3 attestationEntropy:(id)arg4 pccWrappedInvocationKeys:(id)arg5 ;
-(void)setAttestationEntropy:(NSData *)arg1 ;
-(void)setPccWrappedInvocationKeys:(NSArray *)arg1 ;
@end

