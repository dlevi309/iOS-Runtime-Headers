/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)allowsAnonymousAccount;
-(NSString *)functionName;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)generateRequestOperations;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(long long)databaseScope;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSData *)serializedParameters;
-(void)setSerializedParameters:(NSData *)arg1 ;
-(BOOL)requestGETPreAuth;
-(id)serializedResultsCallback;
-(void)setSerializedResultsCallback:(id)arg1 ;
-(NSArray *)pccWrappedInvocationKeys;
-(NSData *)attestationEntropy;
-(id)initWithOperation:(id)arg1 serviceName:(id)arg2 functionName:(id)arg3 serializedParameters:(id)arg4 attestationEntropy:(id)arg5 pccWrappedInvocationKeys:(id)arg6 ;
-(void)setAttestationEntropy:(NSData *)arg1 ;
-(void)setPccWrappedInvocationKeys:(NSArray *)arg1 ;
@end

