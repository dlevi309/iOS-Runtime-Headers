/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDeletedRecordIDs:(NSMutableArray *)arg1 ;
-(SCKZoneDiff *)diff;
-(NSMutableDictionary *)originalRecordsByID;
-(SCKZoneSchema *)zoneSchema;
-(NSMutableDictionary *)workingRecordsByID;
-(NSMutableDictionary *)recordsToSaveByID;
-(BOOL)_shouldAssertRecordValidity;
-(void)createOrUpdateRecordWithName:(id)arg1 recordType:(id)arg2 modifyBlock:(/*^block*/id)arg3 ;
-(void)deleteRecordWithName:(id)arg1 ;
-(BOOL)recordExistsWithName:(id)arg1 ;
-(id)initWithZoneSchema:(id)arg1 contents:(id)arg2 ;
-(void)setZoneSchema:(SCKZoneSchema *)arg1 ;
-(void)setOriginalRecordsByID:(NSMutableDictionary *)arg1 ;
-(void)setWorkingRecordsByID:(NSMutableDictionary *)arg1 ;
-(void)setRecordsToSaveByID:(NSMutableDictionary *)arg1 ;
@end

