/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <libobjc.A.dylib/DRSDSRequestObject.h>

@class NSUUID, PBRequest, NSString, NSDate, NSData, NSDictionary, NSNumber, NSArray;

@interface DRSRequest : NSObject <DRSDSRequestObject> {

	BOOL _hasBeenCountedByTelemetry;
	unsigned char _decisionServerDecision;
	unsigned short _uploadAttemptCount;
	NSUUID* _requestID;
	NSDate* _requestDate;
	NSString* _build;
	NSString* _teamID;
	NSString* _issueCategory;
	NSString* _issueDescription;
	NSData* _contextDictionaryData;
	NSDictionary* _contextDictionary;
	unsigned long long _requestMCT;
	NSString* _logType;
	NSString* _logPath;
	NSNumber* _cachedLogSize;
	unsigned long long _requestState;
	NSString* _errorDescription;
	unsigned long long _uploadID;

}

@property (nonatomic,readonly) NSUUID * uniqueID; 
@property (nonatomic,readonly) PBRequest * pbRequest; 
@property (nonatomic,readonly) id<DRSDecisionServerBatchRequest> pbBatchInstance; 
@property (nonatomic,readonly) Class pbBatchResponseClass; 
@property (nonatomic,readonly) NSString * functionName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long expectedType; 
@property (nonatomic,retain) NSString * logPath;                                               //@synthesize logPath=_logPath - In the implementation block
@property (nonatomic,retain) NSString * logType;                                               //@synthesize logType=_logType - In the implementation block
@property (nonatomic,readonly) unsigned long long uploadID;                                    //@synthesize uploadID=_uploadID - In the implementation block
@property (nonatomic,retain) NSNumber * cachedLogSize;                                         //@synthesize cachedLogSize=_cachedLogSize - In the implementation block
@property (assign,nonatomic) unsigned long long requestState;                                  //@synthesize requestState=_requestState - In the implementation block
@property (assign,nonatomic) unsigned char decisionServerDecision;                             //@synthesize decisionServerDecision=_decisionServerDecision - In the implementation block
@property (assign,nonatomic) unsigned short uploadAttemptCount;                                //@synthesize uploadAttemptCount=_uploadAttemptCount - In the implementation block
@property (assign,nonatomic) BOOL hasBeenCountedByTelemetry;                                   //@synthesize hasBeenCountedByTelemetry=_hasBeenCountedByTelemetry - In the implementation block
@property (nonatomic,readonly) NSUUID * requestID;                                             //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) NSDate * requestDate;                                           //@synthesize requestDate=_requestDate - In the implementation block
@property (nonatomic,readonly) NSString * build;                                               //@synthesize build=_build - In the implementation block
@property (nonatomic,readonly) NSString * teamID;                                              //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,readonly) NSString * issueCategory;                                       //@synthesize issueCategory=_issueCategory - In the implementation block
@property (nonatomic,readonly) NSString * issueDescription;                                    //@synthesize issueDescription=_issueDescription - In the implementation block
@property (nonatomic,readonly) NSData * contextDictionaryData;                                 //@synthesize contextDictionaryData=_contextDictionaryData - In the implementation block
@property (nonatomic,readonly) NSDictionary * contextDictionary;                               //@synthesize contextDictionary=_contextDictionary - In the implementation block
@property (nonatomic,readonly) unsigned long long requestMCT;                                  //@synthesize requestMCT=_requestMCT - In the implementation block
@property (nonatomic,readonly) NSString * requestType; 
@property (nonatomic,readonly) NSNumber * logSize; 
@property (nonatomic,readonly) NSArray * filePaths; 
@property (nonatomic,readonly) NSArray * fileURLs; 
@property (nonatomic,readonly) NSArray * fileNames; 
@property (nonatomic,readonly) BOOL hasUploadableContent; 
@property (nonatomic,readonly) NSString * requestStateString; 
@property (nonatomic,readonly) unsigned char requestOutcome; 
@property (nonatomic,readonly) NSString * requestOutcomeString; 
@property (nonatomic,readonly) NSString * errorDescription;                                    //@synthesize errorDescription=_errorDescription - In the implementation block
@property (nonatomic,readonly) NSString * decisionServerDecisionString; 
+(id)entityName;
+(Class)_moClass;
+(id)_requestWithRequestMO_ON_MOC_QUEUE:(id)arg1 ;
+(id)requestsForFilterPredicate:(id)arg1 context:(id)arg2 sortDescriptors:(id)arg3 fetchLimit:(unsigned long long)arg4 errorOut:(id*)arg5 ;
+(id)requiredSystemResourceName;
+(id)requestForMessage:(id)arg1 ;
+(id)unreportedTerminalRequestsFromContext:(id)arg1 sortDescriptors:(id)arg2 fetchLimit:(unsigned long long)arg3 errorOut:(id*)arg4 ;
+(id)uploadedBytesSinceDate:(id)arg1 context:(id)arg2 errorOut:(id*)arg3 ;
+(unsigned long long)requestCountForFilterPredicate:(id)arg1 context:(id)arg2 fetchLimit:(unsigned long long)arg3 errorOut:(id*)arg4 ;
+(id)leastRecentDateFirstSortDescriptor;
+(id)mostRecentDateFirstSortDescriptor;
+(BOOL)cleanRequestRecordsFromPersistentContainer:(id)arg1 removeFiles:(BOOL)arg2 removeRecord:(BOOL)arg3 matchingPredicate:(id)arg4 errorOut:(id*)arg5 ;
-(NSString *)teamID;
-(NSString *)logType;
-(id)initWithXPCDict:(id)arg1 ;
-(NSUUID *)uniqueID;
-(void)setRequestState:(unsigned long long)arg1 ;
-(NSString *)build;
-(unsigned long long)requestState;
-(NSString *)requestType;
-(NSDictionary *)contextDictionary;
-(NSString *)debugDescription;
-(NSNumber *)logSize;
-(NSUUID *)requestID;
-(NSString *)functionName;
-(NSString *)issueDescription;
-(NSString *)errorDescription;
-(NSArray *)fileNames;
-(id)fileAssets;
-(void)setLogType:(NSString *)arg1 ;
-(NSArray *)fileURLs;
-(unsigned long long)uploadID;
-(NSString *)logPath;
-(NSDate *)requestDate;
-(NSArray *)filePaths;
-(id)recordRepresentation;
-(PBRequest *)pbRequest;
-(NSString *)issueCategory;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(unsigned char)decisionServerDecision;
-(BOOL)hasUploadableContent;
-(BOOL)_deleteLog;
-(NSNumber *)cachedLogSize;
-(NSString *)requestStateString;
-(unsigned short)uploadAttemptCount;
-(BOOL)hasBeenCountedByTelemetry;
-(NSString *)decisionServerDecisionString;
-(NSData *)contextDictionaryData;
-(void)setLogPath:(NSString *)arg1 ;
-(unsigned long long)requestMCT;
-(void)setUploadAttemptCount:(unsigned short)arg1 ;
-(void)setCachedLogSize:(NSNumber *)arg1 ;
-(void)setDecisionServerDecision:(unsigned char)arg1 ;
-(void)setHasBeenCountedByTelemetry:(BOOL)arg1 ;
-(unsigned char)requestOutcome;
-(void)_configureRequestMO:(id)arg1 ;
-(id)newRequestMOInContext_ON_MOC_QUEUE:(id)arg1 ;
-(unsigned long long)expectedType;
-(BOOL)_markLogsAsPurgeableWithUrgencyWithDeleteFallback:(unsigned long long)arg1 ;
-(BOOL)_updateLogStateToExpectedState:(unsigned char)arg1 ;
-(BOOL)_updateLogFileStateForTransitionFromPreviousState:(unsigned long long)arg1 ;
-(BOOL)updateToState:(unsigned long long)arg1 errorDescription:(id)arg2 errorOut:(id*)arg3 ;
-(void)uploadFailedDueToReason:(id)arg1 ;
-(id)_metadataDescription;
-(id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)arg1 ;
-(NSString *)requestOutcomeString;
-(void)updateContextWithRequest_ON_MOC_QUEUE:(id)arg1 ;
-(BOOL)performOnReceiptWork:(id)arg1 dampeningOutcome:(unsigned long long)arg2 ;
-(BOOL)uploadStarted;
-(void)uploadCompleteWithError:(id)arg1 ;
-(void)uploadAbortedDueToMissingLog;
-(void)uploadAbortedDueToLogSize;
-(void)uploadDeniedByDecisionServerWithReason:(id)arg1 ;
-(id)_initWithRequestMO_ON_MOC_QUEUE:(id)arg1 ;
-(id)uploadRequest;
-(id<DRSDecisionServerBatchRequest>)pbBatchInstance;
-(Class)pbBatchResponseClass;
@end

