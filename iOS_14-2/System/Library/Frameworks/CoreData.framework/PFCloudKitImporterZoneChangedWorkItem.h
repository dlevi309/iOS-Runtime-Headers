/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFCloudKitImportRecordsWorkItem.h>

@class NSArray, NSMutableDictionary, NSDictionary;

@interface PFCloudKitImporterZoneChangedWorkItem : PFCloudKitImportRecordsWorkItem {

	NSArray* _changedRecordZoneIDs;
	NSMutableDictionary* _fetchedZoneIDToChangeToken;
	NSMutableDictionary* _fetchedZoneIDToMoreComing;

}

@property (nonatomic,readonly) NSArray * changedRecordZoneIDs;                         //@synthesize changedRecordZoneIDs=_changedRecordZoneIDs - In the implementation block
@property (nonatomic,readonly) NSDictionary * fetchedZoneIDToChangeToken;              //@synthesize fetchedZoneIDToChangeToken=_fetchedZoneIDToChangeToken - In the implementation block
@property (nonatomic,readonly) NSDictionary * fetchedZoneIDToMoreComing;               //@synthesize fetchedZoneIDToMoreComing=_fetchedZoneIDToMoreComing - In the implementation block
-(NSArray *)changedRecordZoneIDs;
-(id)initWithChangedRecordZoneIDs:(id)arg1 options:(id)arg2 request:(id)arg3 ;
-(void)serverChangeTokenUpdated:(id)arg1 forRecordZoneWithID:(id)arg2 ;
-(NSDictionary *)fetchedZoneIDToMoreComing;
-(void)fetchFinishedForZoneWithID:(id)arg1 serverChangeToken:(id)arg2 moreComing:(BOOL)arg3 error:(id)arg4 ;
-(NSDictionary *)fetchedZoneIDToChangeToken;
-(id)description;
-(BOOL)updateMetadataForAccumulatedChangesInContext:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
-(BOOL)commitMetadataChangesWithContext:(id)arg1 forStore:(id)arg2 error:(id*)arg3 ;
-(void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

