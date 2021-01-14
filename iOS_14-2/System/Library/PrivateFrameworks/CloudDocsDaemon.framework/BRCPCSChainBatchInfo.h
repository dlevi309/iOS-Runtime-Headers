/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class NSMutableArray, NSMutableDictionary, NSMutableSet, BRCAppLibrary, NSArray, NSDictionary;

@interface BRCPCSChainBatchInfo : NSObject {

	NSMutableArray* _fullyChainRecordBatch;
	NSMutableDictionary* _fullyChainRecordInfoMap;
	NSMutableDictionary* _halfChainedRecordMap;
	NSMutableSet* _alreadyHalfChainedRecords;
	NSMutableArray* _recordsForFirstPhase;
	BRCAppLibrary* _appLibrary;
	BOOL _should2PhasePCSChain;

}

@property (nonatomic,readonly) unsigned long long batchCount; 
@property (nonatomic,readonly) unsigned long long chainedRecordsCount; 
@property (nonatomic,readonly) NSArray * recordsForFirstPhase; 
@property (nonatomic,readonly) NSArray * recordsForSecondPhase; 
@property (nonatomic,readonly) NSDictionary * halfChainedRecordMap;                 //@synthesize halfChainedRecordMap=_halfChainedRecordMap - In the implementation block
@property (nonatomic,readonly) BOOL should2PhasePCSChain; 
-(BOOL)should2PhasePCSChain;
-(unsigned long long)batchCount;
-(void)_chainPreppedRecordToParent:(id)arg1 ;
-(id)initWithAppLibrary:(id)arg1 ;
-(BOOL)containsRecordInfo:(id)arg1 ;
-(void)prepareFirstPhaseRecordBatch;
-(void)addFullyChainedRecordInfo:(id)arg1 ;
-(void)chainPreparedRecordBatch:(id)arg1 ;
-(unsigned long long)chainedRecordsCount;
-(NSArray *)recordsForFirstPhase;
-(NSArray *)recordsForSecondPhase;
-(NSDictionary *)halfChainedRecordMap;
@end

