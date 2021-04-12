/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSString, PCCKey, NSArray, NSData, NSURL, CKDProtocolTranslator;

@interface CKDCodeFunctionInvokeOperation : CKDDatabaseOperation {

	BOOL _local;
	BOOL _shouldFetchAssetContentInMemory;
	/*^block*/id _replaceLocalSerializationsBlobs;
	/*^block*/id _initialResponseReceivedCallback;
	/*^block*/id _replaceWireSerializations;
	/*^block*/id _recordFetchCompletionBlock;
	/*^block*/id _recordFetchProgressBlock;
	/*^block*/id _recordFetchCommandBlock;
	NSString* _serviceName;
	NSString* _functionName;
	PCCKey* _pccKey;
	NSArray* _pccWrappedKeys;
	NSData* _attestationEntropy;
	NSArray* _requestLocalSerializations;
	NSArray* _requestLocalEnvelopes;
	NSData* _permittedRemoteMeasurement;
	NSURL* _explicitBaseURL;
	NSArray* _requestRecords;
	NSArray* _requestEnvelopes;
	NSData* _serializedArguments;
	NSData* _serializedResponse;
	NSArray* _responseRecords;
	CKDProtocolTranslator* _translator;

}

@property (nonatomic,copy,readonly) NSString * serviceName;                     //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * functionName;                    //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,retain) PCCKey * pccKey;                                   //@synthesize pccKey=_pccKey - In the implementation block
@property (nonatomic,retain) NSArray * pccWrappedKeys;                          //@synthesize pccWrappedKeys=_pccWrappedKeys - In the implementation block
@property (nonatomic,retain) NSData * attestationEntropy;                       //@synthesize attestationEntropy=_attestationEntropy - In the implementation block
@property (nonatomic,copy) NSArray * requestLocalSerializations;                //@synthesize requestLocalSerializations=_requestLocalSerializations - In the implementation block
@property (nonatomic,copy) NSArray * requestLocalEnvelopes;                     //@synthesize requestLocalEnvelopes=_requestLocalEnvelopes - In the implementation block
@property (nonatomic,copy) NSData * permittedRemoteMeasurement;                 //@synthesize permittedRemoteMeasurement=_permittedRemoteMeasurement - In the implementation block
@property (nonatomic,copy) NSURL * explicitBaseURL;                             //@synthesize explicitBaseURL=_explicitBaseURL - In the implementation block
@property (assign,nonatomic) BOOL local;                                        //@synthesize local=_local - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContentInMemory;              //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
@property (nonatomic,copy) NSArray * requestRecords;                            //@synthesize requestRecords=_requestRecords - In the implementation block
@property (nonatomic,copy) NSArray * requestEnvelopes;                          //@synthesize requestEnvelopes=_requestEnvelopes - In the implementation block
@property (nonatomic,copy) NSData * serializedArguments;                        //@synthesize serializedArguments=_serializedArguments - In the implementation block
@property (nonatomic,copy) NSData * serializedResponse;                         //@synthesize serializedResponse=_serializedResponse - In the implementation block
@property (nonatomic,copy) NSArray * responseRecords;                           //@synthesize responseRecords=_responseRecords - In the implementation block
@property (nonatomic,retain) CKDProtocolTranslator * translator;                //@synthesize translator=_translator - In the implementation block
@property (nonatomic,copy) id replaceLocalSerializationsBlobs;                  //@synthesize replaceLocalSerializationsBlobs=_replaceLocalSerializationsBlobs - In the implementation block
@property (nonatomic,copy) id initialResponseReceivedCallback;                  //@synthesize initialResponseReceivedCallback=_initialResponseReceivedCallback - In the implementation block
@property (nonatomic,copy) id replaceWireSerializations;                        //@synthesize replaceWireSerializations=_replaceWireSerializations - In the implementation block
@property (nonatomic,copy) id recordFetchCompletionBlock;                       //@synthesize recordFetchCompletionBlock=_recordFetchCompletionBlock - In the implementation block
@property (nonatomic,copy) id recordFetchProgressBlock;                         //@synthesize recordFetchProgressBlock=_recordFetchProgressBlock - In the implementation block
@property (nonatomic,copy) id recordFetchCommandBlock;                          //@synthesize recordFetchCommandBlock=_recordFetchCommandBlock - In the implementation block
+(long long)isPredominatelyDownload;
-(void)main;
-(NSString *)serviceName;
-(NSString *)functionName;
-(id)activityCreate;
-(BOOL)shouldFetchAssetContentInMemory;
-(void)setShouldFetchAssetContentInMemory:(BOOL)arg1 ;
-(BOOL)local;
-(void)setLocal:(BOOL)arg1 ;
-(void)setSerializedResponse:(NSData *)arg1 ;
-(NSData *)serializedResponse;
-(NSURL *)explicitBaseURL;
-(void)setExplicitBaseURL:(NSURL *)arg1 ;
-(NSArray *)requestLocalSerializations;
-(NSArray *)requestLocalEnvelopes;
-(NSData *)permittedRemoteMeasurement;
-(void)setRequestLocalSerializations:(NSArray *)arg1 ;
-(void)setRequestLocalEnvelopes:(NSArray *)arg1 ;
-(void)setPermittedRemoteMeasurement:(NSData *)arg1 ;
-(NSArray *)requestRecords;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setRecordFetchProgressBlock:(id)arg1 ;
-(void)setRecordFetchCommandBlock:(id)arg1 ;
-(void)setRecordFetchCompletionBlock:(id)arg1 ;
-(void)setReplaceLocalSerializationsBlobs:(id)arg1 ;
-(void)setInitialResponseReceivedCallback:(id)arg1 ;
-(void)setReplaceWireSerializations:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(BOOL)makeStateTransition;
-(CKDProtocolTranslator *)translator;
-(void)setTranslator:(CKDProtocolTranslator *)arg1 ;
-(NSData *)attestationEntropy;
-(void)setAttestationEntropy:(NSData *)arg1 ;
-(void)_preflightRecords;
-(void)_getSerializedRequest;
-(void)_invokeLocalFunction;
-(void)_invokeFunction;
-(void)_getDeserializedRecords;
-(void)_postflightRecords;
-(void)setRequestRecords:(NSArray *)arg1 ;
-(void)setPccKey:(PCCKey *)arg1 ;
-(PCCKey *)pccKey;
-(void)setRequestEnvelopes:(NSArray *)arg1 ;
-(void)setPccWrappedKeys:(NSArray *)arg1 ;
-(id)replaceLocalSerializationsBlobs;
-(NSArray *)requestEnvelopes;
-(void)setSerializedArguments:(NSData *)arg1 ;
-(NSData *)serializedArguments;
-(NSArray *)pccWrappedKeys;
-(id)initialResponseReceivedCallback;
-(void)setResponseRecords:(NSArray *)arg1 ;
-(NSArray *)responseRecords;
-(id)recordFetchCompletionBlock;
-(id)recordFetchProgressBlock;
-(id)recordFetchCommandBlock;
-(id)replaceWireSerializations;
@end
