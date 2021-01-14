/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class PFUbiquityGlobalObjectID, NSString, NSNumber, PFUbiquityLocation, PFUbiquityKnowledgeVector, NSDate;

@interface PFUbiquityTransactionEntryLight : NSObject {

	PFUbiquityGlobalObjectID* _globalID;
	int _transactionType;
	NSString* _actingPeerID;
	NSString* _storeName;
	NSNumber* _transactionNumber;
	PFUbiquityLocation* _transactionLogLocation;
	PFUbiquityKnowledgeVector* _kv;
	NSDate* _transactionDate;

}

@property (nonatomic,retain) PFUbiquityGlobalObjectID * globalID;                      //@synthesize globalID=_globalID - In the implementation block
@property (assign,nonatomic) int transactionType;                                      //@synthesize transactionType=_transactionType - In the implementation block
@property (nonatomic,retain) NSString * actingPeerID;                                  //@synthesize actingPeerID=_actingPeerID - In the implementation block
@property (nonatomic,retain) NSString * storeName;                                     //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,retain) NSNumber * transactionNumber;                             //@synthesize transactionNumber=_transactionNumber - In the implementation block
@property (nonatomic,retain) PFUbiquityLocation * transactionLogLocation;              //@synthesize transactionLogLocation=_transactionLogLocation - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * knowledgeVector;              //@synthesize kv=_kv - In the implementation block
@property (nonatomic,retain) NSDate * transactionDate;                                 //@synthesize transactionDate=_transactionDate - In the implementation block
-(NSString *)storeName;
-(id)init;
-(void)setTransactionType:(int)arg1 ;
-(void)setGlobalID:(PFUbiquityGlobalObjectID *)arg1 ;
-(PFUbiquityLocation *)transactionLogLocation;
-(PFUbiquityKnowledgeVector *)knowledgeVector;
-(void)setKnowledgeVector:(PFUbiquityKnowledgeVector *)arg1 ;
-(void)setTransactionNumber:(NSNumber *)arg1 ;
-(NSDate *)transactionDate;
-(void)setActingPeerID:(NSString *)arg1 ;
-(void)setTransactionLogLocation:(PFUbiquityLocation *)arg1 ;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(id)description;
-(PFUbiquityGlobalObjectID *)globalID;
-(void)setStoreName:(NSString *)arg1 ;
-(NSNumber *)transactionNumber;
-(NSString *)actingPeerID;
-(id)initWithTransactionEntry:(id)arg1 ubiquityRootLocation:(id)arg2 andGlobalIDCache:(id)arg3 ;
-(int)transactionType;
-(void)dealloc;
@end

