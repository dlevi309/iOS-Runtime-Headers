/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBLocalZoneQueryResultRecordColumns.h>

@class NSString;

@interface HMBLocalZoneQueryResultAllOfType : HMBLocalZoneQueryResultRecordColumns {

	int _modelClassNameOffset;
	NSString* _modelClassName;

}

@property (nonatomic,readonly) int modelClassNameOffset;               //@synthesize modelClassNameOffset=_modelClassNameOffset - In the implementation block
@property (nonatomic,readonly) NSString * modelClassName;              //@synthesize modelClassName=_modelClassName - In the implementation block
-(BOOL)bindPropertiesToStatement:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(int)modelClassNameOffset;
-(NSString *)modelClassName;
-(id)initWithLocalZone:(id)arg1 modelClassName:(id)arg2 ;
@end

