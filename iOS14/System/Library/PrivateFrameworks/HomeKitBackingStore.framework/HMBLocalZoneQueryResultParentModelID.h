/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBLocalZoneQueryResultRecordColumns.h>

@class NSUUID;

@interface HMBLocalZoneQueryResultParentModelID : HMBLocalZoneQueryResultRecordColumns {

	int _parentModelIDOffset;
	NSUUID* _parentModelID;

}

@property (nonatomic,readonly) int parentModelIDOffset;              //@synthesize parentModelIDOffset=_parentModelIDOffset - In the implementation block
@property (nonatomic,readonly) NSUUID * parentModelID;               //@synthesize parentModelID=_parentModelID - In the implementation block
-(BOOL)bindPropertiesToStatement:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(int)parentModelIDOffset;
-(NSUUID *)parentModelID;
-(id)initWithLocalZone:(id)arg1 parentModelID:(id)arg2 ;
@end

