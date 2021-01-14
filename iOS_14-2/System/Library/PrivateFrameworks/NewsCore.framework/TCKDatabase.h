/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSMutableArray, NSMutableSet;

@interface TCKDatabase : NSObject {

	NSMutableArray* _tQueriedRecordTypes;
	NSMutableArray* _tQueriedRecordZonesNames;
	NSMutableArray* _tFetchedRecords;
	NSMutableArray* _tFetchedChangedRecordZoneNames;
	NSMutableArray* _tQueriedRecords;
	NSMutableArray* _tSavedRecords;
	NSMutableSet* _tSavedRecordIDs;
	NSMutableArray* _tSavedZones;
	NSMutableArray* _tDeletedZoneIDs;
	NSMutableArray* _tDeletedRecordIDs;
	NSMutableArray* _tSavedSubscriptions;
	/*^block*/id _tQueryHandler;
	/*^block*/id _tFetchRecordsHandler;
	/*^block*/id _tModifyRecordsOperationHandler;
	/*^block*/id _tModifyRecordsHandler;
	/*^block*/id _tFetchZonesHandler;
	/*^block*/id _tModifyZonesHandler;
	/*^block*/id _tFetchZoneChangesHandler;
	/*^block*/id _tFetchRecordZoneChangesOperationHandler;
	/*^block*/id _tFetchDatabaseChangesHandler;

}

@property (nonatomic,retain) NSMutableArray * tQueriedRecordTypes;                         //@synthesize tQueriedRecordTypes=_tQueriedRecordTypes - In the implementation block
@property (nonatomic,retain) NSMutableArray * tQueriedRecordZonesNames;                    //@synthesize tQueriedRecordZonesNames=_tQueriedRecordZonesNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * tFetchedRecords;                             //@synthesize tFetchedRecords=_tFetchedRecords - In the implementation block
@property (nonatomic,retain) NSMutableArray * tFetchedChangedRecordZoneNames;              //@synthesize tFetchedChangedRecordZoneNames=_tFetchedChangedRecordZoneNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * tQueriedRecords;                             //@synthesize tQueriedRecords=_tQueriedRecords - In the implementation block
@property (nonatomic,retain) NSMutableArray * tSavedRecords;                               //@synthesize tSavedRecords=_tSavedRecords - In the implementation block
@property (nonatomic,retain) NSMutableSet * tSavedRecordIDs;                               //@synthesize tSavedRecordIDs=_tSavedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * tSavedZones;                                 //@synthesize tSavedZones=_tSavedZones - In the implementation block
@property (nonatomic,retain) NSMutableArray * tDeletedZoneIDs;                             //@synthesize tDeletedZoneIDs=_tDeletedZoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * tDeletedRecordIDs;                           //@synthesize tDeletedRecordIDs=_tDeletedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * tSavedSubscriptions;                         //@synthesize tSavedSubscriptions=_tSavedSubscriptions - In the implementation block
@property (nonatomic,copy) id tQueryHandler;                                               //@synthesize tQueryHandler=_tQueryHandler - In the implementation block
@property (nonatomic,copy) id tFetchRecordsHandler;                                        //@synthesize tFetchRecordsHandler=_tFetchRecordsHandler - In the implementation block
@property (nonatomic,copy) id tModifyRecordsOperationHandler;                              //@synthesize tModifyRecordsOperationHandler=_tModifyRecordsOperationHandler - In the implementation block
@property (nonatomic,copy) id tModifyRecordsHandler;                                       //@synthesize tModifyRecordsHandler=_tModifyRecordsHandler - In the implementation block
@property (nonatomic,copy) id tFetchZonesHandler;                                          //@synthesize tFetchZonesHandler=_tFetchZonesHandler - In the implementation block
@property (nonatomic,copy) id tModifyZonesHandler;                                         //@synthesize tModifyZonesHandler=_tModifyZonesHandler - In the implementation block
@property (nonatomic,copy) id tFetchZoneChangesHandler;                                    //@synthesize tFetchZoneChangesHandler=_tFetchZoneChangesHandler - In the implementation block
@property (nonatomic,copy) id tFetchRecordZoneChangesOperationHandler;                     //@synthesize tFetchRecordZoneChangesOperationHandler=_tFetchRecordZoneChangesOperationHandler - In the implementation block
@property (nonatomic,copy) id tFetchDatabaseChangesHandler;                                //@synthesize tFetchDatabaseChangesHandler=_tFetchDatabaseChangesHandler - In the implementation block
+(id)tRecordsForQuery:(id)arg1 zoneID:(id)arg2 ;
-(void)addOperation:(id)arg1 ;
-(void)fetchRecordWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performQuery:(id)arg1 inZoneWithID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMutableArray *)tSavedZones;
-(id)tQueryHandler;
-(NSMutableArray *)tFetchedRecords;
-(void)setTFetchedRecords:(NSMutableArray *)arg1 ;
-(NSMutableArray *)tQueriedRecords;
-(void)setTQueriedRecords:(NSMutableArray *)arg1 ;
-(NSMutableArray *)tQueriedRecordTypes;
-(void)setTQueriedRecordTypes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)tQueriedRecordZonesNames;
-(void)setTQueriedRecordZonesNames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)tSavedRecords;
-(void)setTSavedRecords:(NSMutableArray *)arg1 ;
-(NSMutableSet *)tSavedRecordIDs;
-(void)setTSavedRecordIDs:(NSMutableSet *)arg1 ;
-(NSMutableArray *)tDeletedRecordIDs;
-(void)setTDeletedRecordIDs:(NSMutableArray *)arg1 ;
-(id)tModifyRecordsOperationHandler;
-(void)setTSavedZones:(NSMutableArray *)arg1 ;
-(id)tModifyRecordsHandler;
-(NSMutableArray *)tDeletedZoneIDs;
-(void)setTDeletedZoneIDs:(NSMutableArray *)arg1 ;
-(id)tModifyZonesHandler;
-(id)tFetchZonesHandler;
-(id)tFetchRecordsHandler;
-(id)tFetchZoneChangesHandler;
-(NSMutableArray *)tFetchedChangedRecordZoneNames;
-(void)setTFetchedChangedRecordZoneNames:(NSMutableArray *)arg1 ;
-(id)tFetchRecordZoneChangesOperationHandler;
-(id)tFetchDatabaseChangesHandler;
-(NSMutableArray *)tSavedSubscriptions;
-(void)setTSavedSubscriptions:(NSMutableArray *)arg1 ;
-(void)setTQueryHandler:(id)arg1 ;
-(void)setTFetchRecordsHandler:(id)arg1 ;
-(void)setTModifyRecordsOperationHandler:(id)arg1 ;
-(void)setTFetchZonesHandler:(id)arg1 ;
-(void)setTModifyRecordsHandler:(id)arg1 ;
-(void)setTModifyZonesHandler:(id)arg1 ;
-(void)setTFetchZoneChangesHandler:(id)arg1 ;
-(void)setTFetchRecordZoneChangesOperationHandler:(id)arg1 ;
-(void)setTFetchDatabaseChangesHandler:(id)arg1 ;
@end
