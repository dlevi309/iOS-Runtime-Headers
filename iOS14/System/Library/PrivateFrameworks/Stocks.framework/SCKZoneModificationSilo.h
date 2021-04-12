/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <libobjc.A.dylib/SCKZoneModifying.h>

@class SCKZoneSchema, NSMutableDictionary, NSMutableArray, SCKZoneDiff;

@interface SCKZoneModificationSilo : NSObject <SCKZoneModifying> {

	SCKZoneSchema* _zoneSchema;
	NSMutableDictionary* _originalRecordsByID;
	NSMutableDictionary* _workingRecordsByID;
	NSMutableDictionary* _recordsToSaveByID;
	NSMutableArray* _deletedRecordIDs;

}

@property (nonatomic,retain) SCKZoneSchema * zoneSchema;                             //@synthesize zoneSchema=_zoneSchema - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * originalRecordsByID;              //@synthesize originalRecordsByID=_originalRecordsByID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * workingRecordsByID;               //@synthesize workingRecordsByID=_workingRecordsByID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordsToSaveByID;                //@synthesize recordsToSaveByID=_recordsToSaveByID - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedRecordIDs;                      //@synthesize deletedRecordIDs=_deletedRecordIDs - In the implementation block
@property (nonatomic,copy,readonly) SCKZoneDiff * diff; 
-(NSMutableArray *)deletedRecordIDs;
-(SCKZoneDiff *)diff;
-(SCKZoneSchema *)zoneSchema;
-(NSMutableDictionary *)recordsToSaveByID;
-(NSMutableDictionary *)originalRecordsByID;
-(id)initWithZoneSchema:(id)arg1 contents:(id)arg2 ;
-(void)setDeletedRecordIDs:(NSMutableArray *)arg1 ;
-(BOOL)recordExistsWithName:(id)arg1 ;
-(void)setWorkingRecordsByID:(NSMutableDictionary *)arg1 ;
-(BOOL)_shouldAssertRecordValidity;
-(void)setOriginalRecordsByID:(NSMutableDictionary *)arg1 ;
-(void)setRecordsToSaveByID:(NSMutableDictionary *)arg1 ;
-(void)setZoneSchema:(SCKZoneSchema *)arg1 ;
-(void)deleteRecordWithName:(id)arg1 ;
-(void)createOrUpdateRecordWithName:(id)arg1 recordType:(id)arg2 modifyBlock:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)workingRecordsByID;
@end

