/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBSQLQueryIterator.h>

@interface HMBLocalSQLIteratorRowBlock : HMBSQLQueryIterator {

	BOOL _ascending;
	int _zoneRowBindOffset;
	unsigned long long _zoneRow;

}

@property (nonatomic,readonly) int zoneRowBindOffset;                          //@synthesize zoneRowBindOffset=_zoneRowBindOffset - In the implementation block
@property (getter=isAscending,nonatomic,readonly) BOOL ascending;              //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,readonly) unsigned long long zoneRow;                     //@synthesize zoneRow=_zoneRow - In the implementation block
-(unsigned long long)zoneRow;
-(BOOL)isAscending;
-(id)fetchRowFromStatement:(sqlite3_stmtRef)arg1 skip:(BOOL*)arg2 updatedSequence:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)bindPropertiesToStatement:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(int)zoneRowBindOffset;
-(id)initWithSQLContext:(id)arg1 zoneRow:(unsigned long long)arg2 statement:(id)arg3 isAscending:(BOOL)arg4 ;
@end

