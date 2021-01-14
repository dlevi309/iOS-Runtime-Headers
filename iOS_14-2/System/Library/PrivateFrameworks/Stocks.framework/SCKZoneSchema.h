/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)schemaForRecordType:(id)arg1 ;
-(NSString *)zoneName;
-(id)initWithName:(id)arg1 atomic:(BOOL)arg2 recordSchemas:(id)arg3 ;
-(id)validateRecords:(id)arg1 ;
-(BOOL)isValidRecord:(id)arg1 ;
-(BOOL)isAtomic;
-(void)setRecordSchemas:(NSArray *)arg1 ;
-(NSArray *)allRecordFieldNames;
-(NSArray *)recordSchemas;
@end

