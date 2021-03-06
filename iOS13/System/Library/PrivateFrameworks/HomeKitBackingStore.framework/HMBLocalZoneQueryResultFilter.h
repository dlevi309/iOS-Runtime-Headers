/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBLocalZoneQueryResultRecordID.h>

@class HMBLocalSQLQueryTableQueryAll, NSArray;

@interface HMBLocalZoneQueryResultFilter : HMBLocalZoneQueryResultRecordID {

	HMBLocalSQLQueryTableQueryAll* _query;
	NSArray* _columns;
	/*^block*/id _filter;

}

@property (nonatomic,readonly) HMBLocalSQLQueryTableQueryAll * query;              //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) NSArray * columns;                                  //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) id filter;                                          //@synthesize filter=_filter - In the implementation block
-(HMBLocalSQLQueryTableQueryAll *)query;
-(NSArray *)columns;
-(id)filter;
-(id)fetchRowFromStatement:(sqlite3_stmtRef)arg1 skip:(BOOL*)arg2 updatedSequence:(unsigned long long*)arg3 error:(id*)arg4 ;
-(id)initWithLocalZone:(id)arg1 statement:(id)arg2 columns:(id)arg3 filter:(/*^block*/id)arg4 ;
@end

