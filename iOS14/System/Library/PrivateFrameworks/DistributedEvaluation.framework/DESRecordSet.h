/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/


@class NSDictionary, NSArray;

@interface DESRecordSet : NSObject {

	/*^block*/id _dataFetcher;
	NSDictionary* _nativeRecords;
	NSDictionary* _nativeRecordInfo;
	NSArray* _coreDuetEvents;
	NSDictionary* _predicate;

}

@property (nonatomic,copy,readonly) NSDictionary * nativeRecords;                 //@synthesize nativeRecords=_nativeRecords - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * nativeRecordInfo;              //@synthesize nativeRecordInfo=_nativeRecordInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * coreDuetEvents;                     //@synthesize coreDuetEvents=_coreDuetEvents - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSDictionary * predicate;                          //@synthesize predicate=_predicate - In the implementation block
+(void)initialize;
-(NSDictionary *)predicate;
-(unsigned long long)count;
-(id)_initWithNativeRecords:(id)arg1 nativeRecordInfo:(id)arg2 coreDuetEvents:(id)arg3 predicate:(id)arg4 dataFetcher:(/*^block*/id)arg5 ;
-(id)nativeRecordInfoForRecordUUID:(id)arg1 ;
-(id)nativeRecordDataForRecordUUID:(id)arg1 error:(id*)arg2 ;
-(id)_anyNativeRecordUUID;
-(id)filteredRecordSetWithJSONPredicate:(id)arg1 ;
-(NSDictionary *)nativeRecords;
-(NSDictionary *)nativeRecordInfo;
-(NSArray *)coreDuetEvents;
@end
