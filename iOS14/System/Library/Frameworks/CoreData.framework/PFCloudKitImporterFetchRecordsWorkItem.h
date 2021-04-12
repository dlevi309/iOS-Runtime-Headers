/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFCloudKitImportRecordsWorkItem.h>

@class NSMutableArray, NSMutableDictionary, NSArray, NSDictionary;

@interface PFCloudKitImporterFetchRecordsWorkItem : PFCloudKitImportRecordsWorkItem {

	NSMutableArray* _updatedObjectIDs;
	NSMutableDictionary* _failedObjectIDsToError;
	NSMutableDictionary* _recordIDToObjectID;
	NSMutableDictionary* _operationsToExecute;

}

@property (nonatomic,readonly) NSArray * updatedObjectIDs;                         //@synthesize updatedObjectIDs=_updatedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSDictionary * failedObjectIDsToError;              //@synthesize failedObjectIDsToError=_failedObjectIDsToError - In the implementation block
@property (nonatomic,readonly) NSDictionary * recordIDToObjectID;                  //@synthesize recordIDToObjectID=_recordIDToObjectID - In the implementation block
@property (nonatomic,readonly) NSDictionary * operationsToExecute;                 //@synthesize operationsToExecute=_operationsToExecute - In the implementation block
-(NSDictionary *)failedObjectIDsToError;
-(NSArray *)updatedObjectIDs;
-(id)fetchRecordsRequest;
-(id)batchRecordIDsIfNecessary:(id)arg1 ;
-(void)fetchFinishedForRecord:(id)arg1 withID:(id)arg2 error:(id)arg3 ;
-(void)fetchRecordsOperationWithID:(id)arg1 finishedWithError:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)entityNameToAttributesToUpdate;
-(id)createMirroringResultForRequest:(id)arg1 success:(BOOL)arg2 madeChanges:(BOOL)arg3 error:(id)arg4 ;
-(id)entityNameToRelationshipsToUpdate;
-(NSDictionary *)recordIDToObjectID;
-(NSDictionary *)operationsToExecute;
-(id)description;
-(id)initWithOptions:(id)arg1 request:(id)arg2 ;
-(void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

