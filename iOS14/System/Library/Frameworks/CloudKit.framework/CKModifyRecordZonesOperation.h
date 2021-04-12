/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKModifyRecordZonesOperationCallbacks.h>

@class NSArray, NSMutableArray, NSMutableDictionary, CKModifyRecordZonesOperationInfo;

@interface CKModifyRecordZonesOperation : CKDatabaseOperation <CKModifyRecordZonesOperationCallbacks> {

	BOOL _markZonesAsUserPurged;
	/*^block*/id _modifyRecordZonesCompletionBlock;
	NSArray* _recordZonesToSave;
	NSArray* _recordZoneIDsToDelete;
	NSMutableArray* _savedRecordZones;
	NSMutableArray* _deletedRecordZoneIDs;
	NSMutableDictionary* _recordZonesByZoneIDs;
	NSMutableDictionary* _recordZoneErrors;

}

@property (nonatomic,retain) NSMutableArray * savedRecordZones;                                                     //@synthesize savedRecordZones=_savedRecordZones - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedRecordZoneIDs;                                                 //@synthesize deletedRecordZoneIDs=_deletedRecordZoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZonesByZoneIDs;                                            //@synthesize recordZonesByZoneIDs=_recordZonesByZoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZoneErrors;                                                //@synthesize recordZoneErrors=_recordZoneErrors - In the implementation block
@property (nonatomic,readonly) id<CKModifyRecordZonesOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKModifyRecordZonesOperationInfo * operationInfo; 
@property (assign,nonatomic) BOOL markZonesAsUserPurged;                                                            //@synthesize markZonesAsUserPurged=_markZonesAsUserPurged - In the implementation block
@property (nonatomic,copy) NSArray * recordZonesToSave;                                                             //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDsToDelete;                                                         //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (nonatomic,copy) id modifyRecordZonesCompletionBlock;                                                     //@synthesize modifyRecordZonesCompletionBlock=_modifyRecordZonesCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(NSArray *)recordZoneIDsToDelete;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)markZonesAsUserPurged;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(void)setMarkZonesAsUserPurged:(BOOL)arg1 ;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
-(id)activityCreate;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(void)performCKOperation;
-(id)init;
-(void)setModifyRecordZonesCompletionBlock:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)handleSaveForRecordZoneID:(id)arg1 recordZone:(id)arg2 error:(id)arg3 ;
-(NSMutableDictionary *)recordZonesByZoneIDs;
-(id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(NSMutableArray *)savedRecordZones;
-(void)setDeletedRecordZoneIDs:(NSMutableArray *)arg1 ;
-(NSArray *)recordZonesToSave;
-(id)modifyRecordZonesCompletionBlock;
-(NSMutableDictionary *)recordZoneErrors;
-(void)handleDeleteForRecordZoneID:(id)arg1 error:(id)arg2 ;
-(id)relevantZoneIDs;
-(void)setRecordZonesByZoneIDs:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)deletedRecordZoneIDs;
-(void)setSavedRecordZones:(NSMutableArray *)arg1 ;
-(void)setRecordZoneErrors:(NSMutableDictionary *)arg1 ;
@end

