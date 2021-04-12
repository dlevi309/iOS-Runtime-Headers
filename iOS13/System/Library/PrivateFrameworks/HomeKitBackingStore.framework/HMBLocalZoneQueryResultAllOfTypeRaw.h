/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBSQLQueryIterator.h>

@class NSString;

@interface HMBLocalZoneQueryResultAllOfTypeRaw : HMBSQLQueryIterator {

	int _zoneRowBindOffset;
	int _modelTypeBindOffset;
	unsigned long long _returning;
	unsigned long long _zoneRow;
	NSString* _modelType;

}

@property (nonatomic,readonly) unsigned long long returning;              //@synthesize returning=_returning - In the implementation block
@property (nonatomic,readonly) unsigned long long zoneRow;                //@synthesize zoneRow=_zoneRow - In the implementation block
@property (nonatomic,readonly) int zoneRowBindOffset;                     //@synthesize zoneRowBindOffset=_zoneRowBindOffset - In the implementation block
@property (nonatomic,readonly) NSString * modelType;                      //@synthesize modelType=_modelType - In the implementation block
@property (nonatomic,readonly) int modelTypeBindOffset;                   //@synthesize modelTypeBindOffset=_modelTypeBindOffset - In the implementation block
-(NSString *)modelType;
-(id)fetchRowFromStatement:(sqlite3_stmtRef)arg1 skip:(BOOL*)arg2 updatedSequence:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)bindPropertiesToStatement:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(unsigned long long)zoneRow;
-(int)zoneRowBindOffset;
-(int)modelTypeBindOffset;
-(unsigned long long)returning;
-(id)initWithLocalZone:(id)arg1 zoneRow:(unsigned long long)arg2 modelType:(id)arg3 returning:(unsigned long long)arg4 ;
@end

