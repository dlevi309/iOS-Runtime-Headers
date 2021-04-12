/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSString, NSData, NSURL, NSError;

@interface CKCodeFunctionInvokeOperation : CKDatabaseOperation {

	BOOL _local;
	BOOL _shouldFetchAssetContentInMemory;
	/*^block*/id _functionInvokeCompletionBlock;
	/*^block*/id _perRecordProgressBlock;
	NSString* _serviceName;
	NSString* _functionName;
	NSData* _serializedRequest;
	NSURL* _explicitBaseURL;
	NSData* _serializedResponse;
	NSError* _responseError;

}

@property (nonatomic,copy) NSString * serviceName;                              //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * functionName;                             //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,copy) NSData * serializedRequest;                          //@synthesize serializedRequest=_serializedRequest - In the implementation block
@property (assign,nonatomic) BOOL local;                                        //@synthesize local=_local - In the implementation block
@property (nonatomic,copy) NSURL * explicitBaseURL;                             //@synthesize explicitBaseURL=_explicitBaseURL - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContentInMemory;              //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
@property (nonatomic,copy) NSData * serializedResponse;                         //@synthesize serializedResponse=_serializedResponse - In the implementation block
@property (nonatomic,retain) NSError * responseError;                           //@synthesize responseError=_responseError - In the implementation block
@property (nonatomic,copy) id functionInvokeCompletionBlock;                    //@synthesize functionInvokeCompletionBlock=_functionInvokeCompletionBlock - In the implementation block
@property (nonatomic,copy) id perRecordProgressBlock;                           //@synthesize perRecordProgressBlock=_perRecordProgressBlock - In the implementation block
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)functionName;
-(void)setPerRecordProgressBlock:(id)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(BOOL)shouldFetchAssetContentInMemory;
-(void)setShouldFetchAssetContentInMemory:(BOOL)arg1 ;
-(void)_handleProgressCallback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)perRecordProgressBlock;
-(id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedRequest:(id)arg3 local:(BOOL)arg4 ;
-(id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedRequest:(id)arg3 ;
-(BOOL)local;
-(void)setLocal:(BOOL)arg1 ;
-(id)functionInvokeCompletionBlock;
-(NSData *)serializedRequest;
-(void)setSerializedResponse:(NSData *)arg1 ;
-(void)setResponseError:(NSError *)arg1 ;
-(NSError *)responseError;
-(NSData *)serializedResponse;
-(void)setFunctionInvokeCompletionBlock:(id)arg1 ;
-(NSURL *)explicitBaseURL;
-(id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3 local:(BOOL)arg4 ;
-(id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3 ;
-(void)setSerializedRequest:(NSData *)arg1 ;
-(void)setExplicitBaseURL:(NSURL *)arg1 ;
@end

