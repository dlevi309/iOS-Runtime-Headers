/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class NSArray, NSString, NSDictionary, FCEdgeCacheHint, FCNetworkEvent, NSMutableArray, NSMutableDictionary, NSError;

@interface FCCKDirectRequestOperation : FCOperation {

	BOOL _production;
	BOOL _operationFailsOnRequestFailure;
	int _networkEventType;
	NSArray* _requests;
	NSString* _containerName;
	long long _requestType;
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
@property (assign,nonatomic) int networkEventType;                                       //@synthesize networkEventType=_networkEventType - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForRequest;                           //@synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalRequestHTTPHeaders;                  //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (nonatomic,copy) FCEdgeCacheHint * edgeCacheHint;                              //@synthesize edgeCacheHint=_edgeCacheHint - In the implementation block
@property (nonatomic,copy) id criticalNodeFailureTest;                                   //@synthesize criticalNodeFailureTest=_criticalNodeFailureTest - In the implementation block
@property (nonatomic,copy) id requestCompletionHandler;                                  //@synthesize requestCompletionHandler=_requestCompletionHandler - In the implementation block
+(BOOL)newTagFeedEnabled;
+(id)URLSession;
+(BOOL)newTodayFeedEnabled;
+(id)_headersImpactingEdgeCache;
+(BOOL)_enableDebugLogLevel;
+(void)setNewTagFeedEnabled:(BOOL)arg1 ;
+(void)setNewTodayFeedEnabled:(BOOL)arg1 ;
-(BOOL)validateOperation;
-(void)setNetworkEventType:(int)arg1 ;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setRequestUUID:(NSString *)arg1 ;
-(void)prepareOperation;
-(void)setRequestType:(long long)arg1 ;
-(void)setCriticalNodeFailureTest:(id)arg1 ;
-(int)networkEventType;
-(NSString *)requestUUID;
-(void)setResultError:(NSError *)arg1 ;
-(FCEdgeCacheHint *)edgeCacheHint;
-(id)init;
-(long long)requestType;
-(void)setResultErrorsByRequestID:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)resultResponses;
-(id)_requestBodyData;
-(id)_bundleIDToReport;
-(id)_errorFromOperationResultError:(id)arg1 ;
-(id)_errorFromHTTPResponse:(id)arg1 ;
-(void)setOperationFailsOnRequestFailure:(BOOL)arg1 ;
-(NSArray *)requests;
-(void)setContainerName:(NSString *)arg1 ;
-(void)setRequestCompletionHandler:(id)arg1 ;
-(void)setRequests:(NSArray *)arg1 ;
-(NSMutableDictionary *)resultErrorsByRequestID;
-(BOOL)operationFailsOnRequestFailure;
-(double)timeoutIntervalForRequest;
-(void)setResultResponses:(NSMutableArray *)arg1 ;
-(BOOL)production;
-(void)setNetworkEvent:(FCNetworkEvent *)arg1 ;
-(NSString *)containerName;
-(id)_mmeClientInfo;
-(void)_processResponseData:(id)arg1 ;
-(id)requestCompletionHandler;
-(id)_requestHeadersWithBaseURL:(id)arg1 ;
-(NSError *)resultError;
-(void)setEdgeCacheHint:(FCEdgeCacheHint *)arg1 ;
-(id)criticalNodeFailureTest;
-(FCNetworkEvent *)networkEvent;
-(id)generateHTTPRequest;
-(void)setProduction:(BOOL)arg1 ;
-(void)setTimeoutIntervalForRequest:(double)arg1 ;
@end

