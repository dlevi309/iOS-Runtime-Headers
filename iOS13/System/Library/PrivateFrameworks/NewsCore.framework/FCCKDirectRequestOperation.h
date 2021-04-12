/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class NSArray, NSString, NSDictionary, FCEdgeCacheHint, FCNetworkEvent, NSMutableArray, NSMutableDictionary, NSError;

@interface FCCKDirectRequestOperation : FCOperation {

	BOOL _production;
	BOOL _operationFailsOnRequestFailure;
	NSArray* _requests;
	NSString* _containerName;
	long long _requestType;
	long long _networkEventType;
	double _timeoutIntervalForRequest;
	NSDictionary* _additionalRequestHTTPHeaders;
	FCEdgeCacheHint* _edgeCacheHint;
	/*^block*/id _criticalNodeFailureTest;
	/*^block*/id _requestCompletionHandler;
	NSString* _requestUUID;
	FCNetworkEvent* _networkEvent;
	NSMutableArray* _resultResponses;
	NSMutableDictionary* _resultErrorsByRequestID;
	NSError* _resultError;

}

@property (nonatomic,copy) NSString * requestUUID;                                       //@synthesize requestUUID=_requestUUID - In the implementation block
@property (nonatomic,retain) FCNetworkEvent * networkEvent;                              //@synthesize networkEvent=_networkEvent - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultResponses;                           //@synthesize resultResponses=_resultResponses - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resultErrorsByRequestID;              //@synthesize resultErrorsByRequestID=_resultErrorsByRequestID - In the implementation block
@property (nonatomic,retain) NSError * resultError;                                      //@synthesize resultError=_resultError - In the implementation block
@property (nonatomic,copy) NSArray * requests;                                           //@synthesize requests=_requests - In the implementation block
@property (nonatomic,copy) NSString * containerName;                                     //@synthesize containerName=_containerName - In the implementation block
@property (assign,nonatomic) BOOL production;                                            //@synthesize production=_production - In the implementation block
@property (assign,nonatomic) BOOL operationFailsOnRequestFailure;                        //@synthesize operationFailsOnRequestFailure=_operationFailsOnRequestFailure - In the implementation block
@property (assign,nonatomic) long long requestType;                                      //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) long long networkEventType;                                 //@synthesize networkEventType=_networkEventType - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForRequest;                           //@synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalRequestHTTPHeaders;                  //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (nonatomic,copy) FCEdgeCacheHint * edgeCacheHint;                              //@synthesize edgeCacheHint=_edgeCacheHint - In the implementation block
@property (nonatomic,copy) id criticalNodeFailureTest;                                   //@synthesize criticalNodeFailureTest=_criticalNodeFailureTest - In the implementation block
@property (nonatomic,copy) id requestCompletionHandler;                                  //@synthesize requestCompletionHandler=_requestCompletionHandler - In the implementation block
+(id)URLSession;
+(id)_headersImpactingEdgeCache;
+(BOOL)_enableDebugLogLevel;
-(id)init;
-(NSString *)containerName;
-(void)setContainerName:(NSString *)arg1 ;
-(void)setTimeoutIntervalForRequest:(double)arg1 ;
-(long long)requestType;
-(NSArray *)requests;
-(double)timeoutIntervalForRequest;
-(NSString *)requestUUID;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(void)setRequestUUID:(NSString *)arg1 ;
-(void)setRequestType:(long long)arg1 ;
-(void)setRequests:(NSArray *)arg1 ;
-(FCNetworkEvent *)networkEvent;
-(void)setNetworkEvent:(FCNetworkEvent *)arg1 ;
-(id)_requestBodyData;
-(void)performOperation;
-(NSError *)resultError;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)prepareOperation;
-(void)setResultError:(NSError *)arg1 ;
-(void)setEdgeCacheHint:(FCEdgeCacheHint *)arg1 ;
-(void)setRequestCompletionHandler:(id)arg1 ;
-(void)setNetworkEventType:(long long)arg1 ;
-(id)requestCompletionHandler;
-(FCEdgeCacheHint *)edgeCacheHint;
-(long long)networkEventType;
-(id)generateHTTPRequest;
-(void)_processResponseData:(id)arg1 ;
-(id)_errorFromHTTPResponse:(id)arg1 ;
-(NSMutableArray *)resultResponses;
-(NSMutableDictionary *)resultErrorsByRequestID;
-(id)_errorFromOperationResultError:(id)arg1 ;
-(id)criticalNodeFailureTest;
-(void)setResultResponses:(NSMutableArray *)arg1 ;
-(void)setResultErrorsByRequestID:(NSMutableDictionary *)arg1 ;
-(id)_requestHeadersWithBaseURL:(id)arg1 ;
-(id)_bundleIDToReport;
-(BOOL)production;
-(id)_mmeClientInfo;
-(BOOL)operationFailsOnRequestFailure;
-(void)setProduction:(BOOL)arg1 ;
-(void)setOperationFailsOnRequestFailure:(BOOL)arg1 ;
-(void)setCriticalNodeFailureTest:(id)arg1 ;
@end

