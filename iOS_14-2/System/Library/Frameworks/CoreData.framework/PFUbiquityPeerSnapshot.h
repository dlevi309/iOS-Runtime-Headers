/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSDictionary, NSMutableDictionary, PFUbiquityKnowledgeVector, NSNumber, NSDate, NSString;

@interface PFUbiquityPeerSnapshot : NSObject {

	NSDictionary* _logSnapshot;
	NSMutableDictionary* _diffFromPrevious;
	PFUbiquityKnowledgeVector* _kv;
	NSNumber* _transactionNumber;
	NSDate* _transactionDate;
	NSString* _exportingPeerID;

}

@property (nonatomic,readonly) NSDictionary * logSnapshot;                               //@synthesize logSnapshot=_logSnapshot - In the implementation block
@property (nonatomic,readonly) NSDictionary * diffFromPrevious;                          //@synthesize diffFromPrevious=_diffFromPrevious - In the implementation block
@property (nonatomic,readonly) PFUbiquityKnowledgeVector * knowledgeVector;              //@synthesize kv=_kv - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionNumber;                             //@synthesize transactionNumber=_transactionNumber - In the implementation block
@property (nonatomic,readonly) NSDate * transactionDate;                                 //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,readonly) NSString * exportingPeerID;                               //@synthesize exportingPeerID=_exportingPeerID - In the implementation block
-(long long)compare:(id)arg1 ;
-(NSString *)exportingPeerID;
-(PFUbiquityKnowledgeVector *)knowledgeVector;
-(NSDate *)transactionDate;
-(id)description;
-(NSDictionary *)diffFromPrevious;
-(id)initWithTranasctionEntry:(id)arg1 andLogSnapshot:(id)arg2 ;
-(NSDictionary *)logSnapshot;
-(NSNumber *)transactionNumber;
-(id)initWithExportingPeerID:(id)arg1 logSnapshot:(id)arg2 transactionNumber:(id)arg3 transactionDate:(id)arg4 andKnowledgeVector:(id)arg5 ;
-(void)computeDiffToPreviousSnapshot:(id)arg1 ;
-(void)removeValuesChangedByPeerSnapshot:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

