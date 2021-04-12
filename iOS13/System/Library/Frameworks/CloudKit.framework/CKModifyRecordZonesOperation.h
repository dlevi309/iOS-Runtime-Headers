/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifyRecordZonesOperation : CKDatabaseOperation {

	BOOL _markZonesAsUserPurged;
	/*^block*/id _modifyRecordZonesCompletionBlock;
	NSArray* _recordZonesToSave;
	NSArray* _recordZoneIDsToDelete;
	NSMutableArray* _savedRecordZones;
	NSMutableArray* _deletedRecordZoneIDs;
	NSMutableDictionary* _recordZonesByZoneIDs;
	NSMutableDictionary* _recordZoneErrors;

}

@property (nonatomic,retain) NSMutableArray * savedRecordZones;                       //@synthesize savedRecordZones=_savedRecordZones - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedRecordZoneIDs;                   //@synthesize deletedRecordZoneIDs=_deletedRecordZoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZonesByZoneIDs;              //@synthesize recordZonesByZoneIDs=_recordZonesByZoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZoneErrors;                  //@synthesize recordZoneErrors=_recordZoneErrors - In the implementation block
@property (assign,nonatomic) BOOL markZonesAsUserPurged;                              //@synthesize markZonesAsUserPurged=_markZonesAsUserPurged - In the implementation block
@property (nonatomic,copy) NSArray * recordZonesToSave;                               //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDsToDelete;                           //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (nonatomic,copy) id modifyRecordZonesCompletionBlock;                       //@synthesize modifyRecordZonesCompletionBlock=_modifyRecordZonesCompletionBlock - In the implementation block
-(id)init;
-(id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2 ;
-(void)setModifyRecordZonesCompletionBlock:(id)arg1 ;
-(NSMutableArray *)deletedRecordZoneIDs;
-(void)setMarkZonesAsUserPurged:(BOOL)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSArray *)recordZonesToSave;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(NSArray *)recordZoneIDsToDelete;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
-(BOOL)markZonesAsUserPurged;
-(id)modifyRecordZonesCompletionBlock;
-(NSMutableDictionary *)recordZonesByZoneIDs;
-(NSMutableDictionary *)recordZoneErrors;
-(NSMutableArray *)savedRecordZones;
-(void)setSavedRecordZones:(NSMutableArray *)arg1 ;
-(void)setDeletedRecordZoneIDs:(NSMutableArray *)arg1 ;
-(void)setRecordZonesByZoneIDs:(NSMutableDictionary *)arg1 ;
-(void)setRecordZoneErrors:(NSMutableDictionary *)arg1 ;
@end

