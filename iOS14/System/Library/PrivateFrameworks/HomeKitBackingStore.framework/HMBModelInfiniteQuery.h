/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HMBModelFiniteQuery.h>

@class NSString;

@interface HMBModelInfiniteQuery : HMBModelFiniteQuery {

	NSString* _sequenceArgumentName;

}

@property (copy,readonly) NSString * sequenceArgumentName;              //@synthesize sequenceArgumentName=_sequenceArgumentName - In the implementation block
+(id)queryWithSQLPredicate:(id)arg1 sequenceArgumentName:(id)arg2 indexedProperties:(id)arg3 arguments:(id)arg4 ;
-(id)initWithSQLPredicate:(id)arg1 sqlColumns:(id)arg2 sequenceArgumentName:(id)arg3 maximumRowsPerSelect:(unsigned long long)arg4 indexNameSuffix:(id)arg5 indexedColumns:(id)arg6 arguments:(id)arg7 ;
-(id)performQueryOn:(id)arg1 arguments:(id)arg2 ;
-(NSString *)sequenceArgumentName;
@end

