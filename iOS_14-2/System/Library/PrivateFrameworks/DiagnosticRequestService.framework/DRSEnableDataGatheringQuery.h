/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <libobjc.A.dylib/DRSDSRequestObject.h>

@class NSString, NSDate, NSUUID, NSData, NSDictionary, PBRequest;

@interface DRSEnableDataGatheringQuery : NSObject <DRSDSRequestObject> {

	unsigned char _response;
	BOOL _isContinue;
	unsigned short _attemptCount;
	NSString* _teamID;
	NSString* _issueCategory;
	NSString* _logType;
	NSString* _build;
	NSDate* _queryDate;
	NSUUID* _queryID;
	NSData* _contextDictionaryData;
	NSDictionary* _contextDictionary;
	NSString* _rejectionReason;

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
@property (nonatomic,readonly) NSString * teamID;                                              //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,readonly) NSString * issueCategory;                                       //@synthesize issueCategory=_issueCategory - In the implementation block
@property (nonatomic,readonly) NSString * logType;                                             //@synthesize logType=_logType - In the implementation block
@property (nonatomic,readonly) NSString * build;                                               //@synthesize build=_build - In the implementation block
@property (nonatomic,readonly) NSDate * queryDate;                                             //@synthesize queryDate=_queryDate - In the implementation block
@property (nonatomic,readonly) NSUUID * queryID;                                               //@synthesize queryID=_queryID - In the implementation block
@property (assign,nonatomic) unsigned char response;                                           //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSString * responseString; 
@property (nonatomic,readonly) NSData * contextDictionaryData;                                 //@synthesize contextDictionaryData=_contextDictionaryData - In the implementation block
@property (nonatomic,readonly) NSDictionary * contextDictionary;                               //@synthesize contextDictionary=_contextDictionary - In the implementation block
@property (nonatomic,readonly) unsigned short attemptCount;                                    //@synthesize attemptCount=_attemptCount - In the implementation block
@property (nonatomic,retain) NSString * rejectionReason;                                       //@synthesize rejectionReason=_rejectionReason - In the implementation block
@property (assign,nonatomic) BOOL isContinue;                                                  //@synthesize isContinue=_isContinue - In the implementation block
+(id)entityName;
+(id)leastRecentDateFirstSortDescriptor;
+(id)mostRecentDateFirstSortDescriptor;
+(id)enableDataGatheringQueriesForFilterPredicate:(id)arg1 context:(id)arg2 sortDescriptors:(id)arg3 fetchLimit:(unsigned long long)arg4 errorOut:(id*)arg5 ;
+(id)cachedQueryResponseForQuery:(id)arg1 inContext:(id)arg2 errorOut:(id*)arg3 ;
+(id)_ON_MOC_QUEUE_enableDataGatheringQueriesForFilterPredicate:(id)arg1 context:(id)arg2 sortDescriptors:(id)arg3 fetchLimit:(unsigned long long)arg4 errorOut:(id*)arg5 ;
+(id)_ON_MOC_QUEUE_enableDataGatheringQueryForID:(id)arg1 context:(id)arg2 ;
+(id)enableDataGatheringQueryForID:(id)arg1 context:(id)arg2 ;
-(NSString *)teamID;
-(NSString *)logType;
-(unsigned short)attemptCount;
-(id)initWithXPCDict:(id)arg1 ;
-(NSUUID *)uniqueID;
-(NSString *)build;
-(id)protobufRepresentation;
-(NSDictionary *)contextDictionary;
-(NSString *)debugDescription;
-(NSString *)functionName;
-(unsigned char)response;
-(void)setResponse:(unsigned char)arg1 ;
-(NSUUID *)queryID;
-(PBRequest *)pbRequest;
-(NSString *)issueCategory;
-(NSData *)contextDictionaryData;
-(void)setRejectionReason:(NSString *)arg1 ;
-(NSString *)rejectionReason;
-(id<DRSDecisionServerBatchRequest>)pbBatchInstance;
-(Class)pbBatchResponseClass;
-(NSDate *)queryDate;
-(BOOL)isContinue;
-(void)setIsContinue:(BOOL)arg1 ;
-(BOOL)submitQuery;
-(void)queryFinishedWithDecision:(id)arg1 error:(id)arg2 ;
-(void)updateContextWithDataGatheringQuery_ON_MOC_QUEUE:(id)arg1 ;
-(NSString *)responseString;
-(id)_initWithMO_ON_MOC_QUEUE:(id)arg1 ;
-(BOOL)doesMatchCachedQuery:(id)arg1 ;
-(BOOL)isEqualToDataGatheringQuery:(id)arg1 ;
-(id)jsonCompatibleDictionaryRepresentation;
@end

