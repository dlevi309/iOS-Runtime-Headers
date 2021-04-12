/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKOperationInMemoryAssets.h>
#import <libobjc.A.dylib/CKCodeOperationCallbacks.h>

@protocol CKCodeOperationMessageMutation;
@class NSMutableDictionary, PBCodable, NSString, CKCodeService, NSURL, NSArray, NSError, CKCodeFunctionInvokeOperationInfo;

@interface CKCodeOperation : CKDatabaseOperation <CKOperationInMemoryAssets, CKCodeOperationCallbacks> {

	BOOL _dropInMemoryAssetContentASAP;
	BOOL _shouldFetchAssetContentInMemory;
	NSMutableDictionary* _assetInfoByArrayIndexByRecordKeyByRecordID;
	/*^block*/id _perRecordProgressBlock;
	/*^block*/id _perRecordCompletionBlock;
	/*^block*/id _codeOperationCompletionBlock;
	/*^block*/id _incompleteResponsePreviewBlock;
	/*^block*/id _didSubstituteRequestRecordTransportsBlock;
	PBCodable*<CKCodeOperationMessageMutation> _request;
	Class _responseClass;
	NSString* _functionName;
	CKCodeService* _codeService;
	NSString* _serviceName;
	long long _destinationServer;
	NSURL* _destinationServerExplicitURL;
	NSArray* _requestLocalSerializations;
	PBCodable*<CKCodeOperationMessageMutation> _response;
	NSError* _responseError;

}

@property (nonatomic,retain) Class responseClass;                                                           //@synthesize responseClass=_responseClass - In the implementation block
@property (nonatomic,copy) NSString * serviceName;                                                          //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * functionName;                                                         //@synthesize functionName=_functionName - In the implementation block
@property (assign,nonatomic) long long destinationServer;                                                   //@synthesize destinationServer=_destinationServer - In the implementation block
@property (nonatomic,copy) NSURL * destinationServerExplicitURL;                                            //@synthesize destinationServerExplicitURL=_destinationServerExplicitURL - In the implementation block
@property (nonatomic,retain) NSArray * requestLocalSerializations;                                          //@synthesize requestLocalSerializations=_requestLocalSerializations - In the implementation block
@property (nonatomic,retain) PBCodable*<CKCodeOperationMessageMutation> response;                           //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * responseError;                                                       //@synthesize responseError=_responseError - In the implementation block
@property (nonatomic,readonly) id<CKCodeOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKCodeFunctionInvokeOperationInfo * operationInfo; 
@property (nonatomic,copy) id didSubstituteRequestRecordTransportsBlock;                                    //@synthesize didSubstituteRequestRecordTransportsBlock=_didSubstituteRequestRecordTransportsBlock - In the implementation block
@property (nonatomic,retain) PBCodable*<CKCodeOperationMessageMutation> request;                            //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id perRecordCompletionBlock;                                                     //@synthesize perRecordCompletionBlock=_perRecordCompletionBlock - In the implementation block
@property (nonatomic,copy) id perRecordProgressBlock;                                                       //@synthesize perRecordProgressBlock=_perRecordProgressBlock - In the implementation block
@property (nonatomic,copy) id codeOperationCompletionBlock;                                                 //@synthesize codeOperationCompletionBlock=_codeOperationCompletionBlock - In the implementation block
@property (nonatomic,copy) id incompleteResponsePreviewBlock;                                               //@synthesize incompleteResponsePreviewBlock=_incompleteResponsePreviewBlock - In the implementation block
@property (assign,nonatomic) BOOL dropInMemoryAssetContentASAP;                                             //@synthesize dropInMemoryAssetContentASAP=_dropInMemoryAssetContentASAP - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContentInMemory;                                          //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
@property (nonatomic,retain) CKCodeService * codeService;                                                   //@synthesize codeService=_codeService - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetInfoByArrayIndexByRecordKeyByRecordID;              //@synthesize assetInfoByArrayIndexByRecordKeyByRecordID=_assetInfoByArrayIndexByRecordKeyByRecordID - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
+(id)operationDaemonCallbackProtocol;
+(Class)operationInfoClass;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(Class)responseClass;
-(void)setDropInMemoryAssetContentASAP:(BOOL)arg1 ;
-(void)performCKOperation;
-(CKCodeService *)codeService;
-(id)codeOperationCompletionBlock;
-(id)incompleteResponsePreviewBlock;
-(long long)destinationServer;
-(NSURL *)destinationServerExplicitURL;
-(void)setRequestLocalSerializations:(NSArray *)arg1 ;
-(void)setCodeService:(CKCodeService *)arg1 ;
-(NSArray *)requestLocalSerializations;
-(void)handleInitialResponseReceived:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSError *)responseError;
-(void)handleReplaceLocalWithWireSerializations:(id)arg1 encryptedMasterKeys:(id)arg2 wireEnvelopes:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)handleReplaceWireSerializationsWithRecords:(id)arg1 ;
-(id)didSubstituteRequestRecordTransportsBlock;
-(void)setResponseError:(NSError *)arg1 ;
-(void)setCodeOperationCompletionBlock:(id)arg1 ;
-(id)initWithFunctionName:(id)arg1 responseClass:(Class)arg2 ;
-(id)initWithServiceName:(id)arg1 functionName:(id)arg2 responseClass:(Class)arg3 ;
-(void)setIncompleteResponsePreviewBlock:(id)arg1 ;
-(void)setDidSubstituteRequestRecordTransportsBlock:(id)arg1 ;
-(void)setDestinationServer:(long long)arg1 ;
-(void)setPerRecordProgressBlock:(id)arg1 ;
-(void)setDestinationServerExplicitURL:(NSURL *)arg1 ;
-(void)setRequest:(PBCodable*<CKCodeOperationMessageMutation>)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)handleFetchForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3 ;
-(void)setResponseClass:(Class)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(PBCodable*<CKCodeOperationMessageMutation>)request;
-(NSString *)functionName;
-(void)setShouldFetchAssetContentInMemory:(BOOL)arg1 ;
-(void)handleAssetDataForRecordID:(id)arg1 recordKey:(id)arg2 arrayIndex:(long long)arg3 data:(id)arg4 offset:(unsigned long long)arg5 ;
-(id)perRecordProgressBlock;
-(PBCodable*<CKCodeOperationMessageMutation>)response;
-(void)setResponse:(PBCodable*<CKCodeOperationMessageMutation>)arg1 ;
-(void)setAssetInfoByArrayIndexByRecordKeyByRecordID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)assetInfoByArrayIndexByRecordKeyByRecordID;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(void)setPerRecordCompletionBlock:(id)arg1 ;
-(BOOL)dropInMemoryAssetContentASAP;
-(void)setServiceName:(NSString *)arg1 ;
-(BOOL)shouldFetchAssetContentInMemory;
-(void)handleFetchForRecordID:(id)arg1 didProgress:(double)arg2 ;
-(id)perRecordCompletionBlock;
@end

