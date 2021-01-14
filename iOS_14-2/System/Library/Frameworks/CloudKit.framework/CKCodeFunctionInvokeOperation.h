/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKCodeFunctionInvokeOperationCallbacks.h>

@class NSString, NSData, NSURL, NSError, CKCodeFunctionInvokeOperationInfo;

@interface CKCodeFunctionInvokeOperation : CKDatabaseOperation <CKCodeFunctionInvokeOperationCallbacks> {

	BOOL _local;
	BOOL _shouldFetchAssetContentInMemory;
	/*^block*/id _functionInvokeCompletionBlock;
	NSString* _serviceName;
	NSString* _functionName;
	NSData* _serializedRequest;
	NSURL* _clientRuntimeProvidedServiceURL;
	NSData* _serializedResponse;
	NSError* _responseError;

}

@property (nonatomic,copy) NSString * serviceName;                                                                   //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * functionName;                                                                  //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,copy) NSData * serializedRequest;                                                               //@synthesize serializedRequest=_serializedRequest - In the implementation block
@property (assign,nonatomic) BOOL local;                                                                             //@synthesize local=_local - In the implementation block
@property (nonatomic,copy) NSURL * clientRuntimeProvidedServiceURL;                                                  //@synthesize clientRuntimeProvidedServiceURL=_clientRuntimeProvidedServiceURL - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContentInMemory;                                                   //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
@property (nonatomic,copy) NSData * serializedResponse;                                                              //@synthesize serializedResponse=_serializedResponse - In the implementation block
@property (nonatomic,retain) NSError * responseError;                                                                //@synthesize responseError=_responseError - In the implementation block
@property (nonatomic,readonly) id<CKCodeFunctionInvokeOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKCodeFunctionInvokeOperationInfo * operationInfo; 
@property (nonatomic,copy) id functionInvokeCompletionBlock;                                                         //@synthesize functionInvokeCompletionBlock=_functionInvokeCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(void)performCKOperation;
-(void)setClientRuntimeProvidedServiceURL:(NSURL *)arg1 ;
-(void)handleInitialResponseReceived:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSError *)responseError;
-(void)handleReplaceLocalWithWireSerializations:(id)arg1 encryptedMasterKeys:(id)arg2 wireEnvelopes:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)handleReplaceWireSerializationsWithRecords:(id)arg1 ;
-(void)setResponseError:(NSError *)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(NSString *)functionName;
-(void)setShouldFetchAssetContentInMemory:(BOOL)arg1 ;
-(id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedRequest:(id)arg3 local:(BOOL)arg4 ;
-(NSData *)serializedRequest;
-(id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedRequest:(id)arg3 ;
-(id)functionInvokeCompletionBlock;
-(void)setSerializedResponse:(NSData *)arg1 ;
-(NSData *)serializedResponse;
-(void)setFunctionInvokeCompletionBlock:(id)arg1 ;
-(NSURL *)clientRuntimeProvidedServiceURL;
-(id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3 local:(BOOL)arg4 ;
-(id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3 ;
-(void)setSerializedRequest:(NSData *)arg1 ;
-(BOOL)local;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(void)setLocal:(BOOL)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(BOOL)shouldFetchAssetContentInMemory;
@end

