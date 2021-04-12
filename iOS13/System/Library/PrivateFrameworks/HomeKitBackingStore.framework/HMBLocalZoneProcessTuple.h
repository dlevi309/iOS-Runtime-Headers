/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class HMBModel, NSData, NSUUID, NSString, HMBLocalSQLQueryTable, NSArray;

@interface HMBLocalZoneProcessTuple : HMFObject {

	HMBModel* _previous;
	HMBModel* _update;
	unsigned long long _recordRow;
	unsigned long long _itemRow;
	NSData* _externalID;
	NSData* _externalData;
	NSUUID* _modelSchema;
	NSString* _modelType;
	HMBLocalSQLQueryTable* _queryTable;
	NSArray* _encodedQueryableColumns;

}

@property (nonatomic,readonly) HMBModel * previous;                             //@synthesize previous=_previous - In the implementation block
@property (nonatomic,readonly) HMBModel * update;                               //@synthesize update=_update - In the implementation block
@property (assign,nonatomic) unsigned long long recordRow;                      //@synthesize recordRow=_recordRow - In the implementation block
@property (assign,nonatomic) unsigned long long itemRow;                        //@synthesize itemRow=_itemRow - In the implementation block
@property (nonatomic,readonly) NSData * externalID;                             //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) NSData * externalData;                           //@synthesize externalData=_externalData - In the implementation block
@property (nonatomic,readonly) NSUUID * modelSchema;                            //@synthesize modelSchema=_modelSchema - In the implementation block
@property (nonatomic,readonly) NSString * modelType;                            //@synthesize modelType=_modelType - In the implementation block
@property (nonatomic,readonly) HMBLocalSQLQueryTable * queryTable;              //@synthesize queryTable=_queryTable - In the implementation block
@property (nonatomic,readonly) NSArray * encodedQueryableColumns;               //@synthesize encodedQueryableColumns=_encodedQueryableColumns - In the implementation block
-(HMBModel *)previous;
-(HMBModel *)update;
-(NSString *)modelType;
-(NSData *)externalID;
-(NSData *)externalData;
-(unsigned long long)itemRow;
-(id)initWithPrevious:(id)arg1 update:(id)arg2 recordRow:(unsigned long long)arg3 itemRow:(unsigned long long)arg4 modelSchema:(id)arg5 modelType:(id)arg6 externalID:(id)arg7 externalData:(id)arg8 queryTable:(id)arg9 ;
-(unsigned long long)recordRow;
-(void)setRecordRow:(unsigned long long)arg1 ;
-(void)setItemRow:(unsigned long long)arg1 ;
-(NSUUID *)modelSchema;
-(HMBLocalSQLQueryTable *)queryTable;
-(NSArray *)encodedQueryableColumns;
@end

