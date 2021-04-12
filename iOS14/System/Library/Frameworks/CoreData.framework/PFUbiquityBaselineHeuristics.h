/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSString, PFUbiquityLocation, PFUbiquityKnowledgeVector;

@interface PFUbiquityBaselineHeuristics : NSObject {

	NSString* _localPeerID;
	NSString* _storeName;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _modelVersionHash;
	long long _numRequiredTransactions;
	long long _storeSize;
	long long _logSize;
	D _logToStoreSizeRatio;
	long long _minLogBytes;
	PFUbiquityKnowledgeVector* _currentBaselineKV;
	PFUbiquityKnowledgeVector* _currentKV;

}

@property (nonatomic,readonly) NSString * localPeerID;                                   //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                     //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;                //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSString * modelVersionHash;                              //@synthesize modelVersionHash=_modelVersionHash - In the implementation block
@property (assign,nonatomic) long long numRequiredTransactions;                          //@synthesize numRequiredTransactions=_numRequiredTransactions - In the implementation block
@property (nonatomic,readonly) long long storeSize;                                      //@synthesize storeSize=_storeSize - In the implementation block
@property (nonatomic,readonly) long long logSize;                                        //@synthesize logSize=_logSize - In the implementation block
@property (assign,nonatomic) D logToStoreSizeRatio;                                      //@synthesize logToStoreSizeRatio=_logToStoreSizeRatio - In the implementation block
@property (assign,nonatomic) long long minLogBytes;                                      //@synthesize minLogBytes=_minLogBytes - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * currentBaselineKV;              //@synthesize currentBaselineKV=_currentBaselineKV - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * currentKV;                      //@synthesize currentKV=_currentKV - In the implementation block
-(NSString *)storeName;
-(id)init;
-(long long)storeSize;
-(long long)logSize;
-(NSString *)localPeerID;
-(id)description;
-(id)copy;
-(void)setStoreSize:(long long)arg1 ;
-(PFUbiquityKnowledgeVector *)currentKV;
-(void)setCurrentKV:(PFUbiquityKnowledgeVector *)arg1 ;
-(void)setLogSize:(long long)arg1 ;
-(long long)minLogBytes;
-(void)setMinLogBytes:(long long)arg1 ;
-(void)setCurrentBaselineKV:(PFUbiquityKnowledgeVector *)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
-(long long)bytesForFileAtPath:(id)arg1 ;
-(void)setNumRequiredTransactions:(long long)arg1 ;
-(void)setLogToStoreSizeRatio:(D)arg1 ;
-(NSString *)modelVersionHash;
-(BOOL)haveEnoughTransactionsToRoll;
-(BOOL)logsConsumeEnoughDiskSpace;
-(void)updateHeuristics;
-(BOOL)canRollBaseline:(id*)arg1 ;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(long long)numRequiredTransactions;
-(D)logToStoreSizeRatio;
-(PFUbiquityKnowledgeVector *)currentBaselineKV;
-(void)dealloc;
@end

