/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class CKRecordZoneID, NSString, NSArray;

@interface SCKZoneSchema : NSObject {

	BOOL _atomic;
	CKRecordZoneID* _zoneID;
	NSString* _zoneName;
	NSArray* _recordSchemas;

}

@property (nonatomic,copy) NSArray * recordSchemas;                             //@synthesize recordSchemas=_recordSchemas - In the implementation block
@property (nonatomic,copy,readonly) CKRecordZoneID * zoneID;                    //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,copy,readonly) NSString * zoneName;                        //@synthesize zoneName=_zoneName - In the implementation block
@property (getter=isAtomic,nonatomic,readonly) BOOL atomic;                     //@synthesize atomic=_atomic - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allRecordFieldNames; 
-(CKRecordZoneID *)zoneID;
-(NSString *)zoneName;
-(BOOL)isAtomic;
-(BOOL)isValidRecord:(id)arg1 ;
-(id)schemaForRecordType:(id)arg1 ;
-(NSArray *)recordSchemas;
-(id)initWithName:(id)arg1 atomic:(BOOL)arg2 recordSchemas:(id)arg3 ;
-(NSArray *)allRecordFieldNames;
-(id)validateRecords:(id)arg1 ;
-(void)setRecordSchemas:(NSArray *)arg1 ;
@end

