/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HMBModelUnindexedQuery.h>

@class NSString, NSArray;

@interface HMBModelIndexedQuery : HMBModelUnindexedQuery {

	NSString* _indexNameSuffix;
	NSArray* _indexedColumns;

}

@property (nonatomic,readonly) NSString * indexNameSuffix;              //@synthesize indexNameSuffix=_indexNameSuffix - In the implementation block
@property (nonatomic,readonly) NSArray * indexedColumns;                //@synthesize indexedColumns=_indexedColumns - In the implementation block
@property (nonatomic,readonly) NSString * indexName; 
+(id)queryWithSQLPredicate:(id)arg1 ascending:(BOOL)arg2 indexedProperties:(id)arg3 arguments:(id)arg4 ;
-(NSString *)indexName;
-(NSArray *)indexedColumns;
-(BOOL)hasExpectedIndexes;
-(id)initWithSQLPredicate:(id)arg1 sqlColumns:(id)arg2 initialSequence:(id)arg3 maximumRowsPerSelect:(unsigned long long)arg4 indexNameSuffix:(id)arg5 indexedColumns:(id)arg6 arguments:(id)arg7 ;
-(NSString *)indexNameSuffix;
@end

