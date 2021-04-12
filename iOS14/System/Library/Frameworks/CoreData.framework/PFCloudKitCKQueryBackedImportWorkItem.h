/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFCloudKitImportRecordsWorkItem.h>

@class NSString, NSDate, CKQueryCursor;

@interface PFCloudKitCKQueryBackedImportWorkItem : PFCloudKitImportRecordsWorkItem {

	NSString* _recordType;
	NSDate* _maxModificationDate;
	CKQueryCursor* _queryCursor;

}

@property (nonatomic,readonly) NSString * recordType;                   //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,retain) NSDate * maxModificationDate;              //@synthesize maxModificationDate=_maxModificationDate - In the implementation block
@property (nonatomic,retain) CKQueryCursor * queryCursor;               //@synthesize queryCursor=_queryCursor - In the implementation block
-(NSString *)recordType;
-(id)description;
-(id)newCKQueryOperationFromMetadataInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(void)addUpdatedRecord:(id)arg1 ;
-(void)queryOperationFinishedWithCursor:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSDate *)maxModificationDate;
-(CKQueryCursor *)queryCursor;
-(void)setQueryCursor:(CKQueryCursor *)arg1 ;
-(BOOL)applyAccumulatedChangesToStore:(id)arg1 inManagedObjectContext:(id)arg2 withStoreMonitor:(id)arg3 madeChanges:(BOOL*)arg4 error:(id*)arg5 ;
-(BOOL)updateMetadataForAccumulatedChangesInContext:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
-(BOOL)commitMetadataChangesWithContext:(id)arg1 forStore:(id)arg2 error:(id*)arg3 ;
-(id)initForRecordType:(id)arg1 withOptions:(id)arg2 request:(id)arg3 ;
-(void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMaxModificationDate:(NSDate *)arg1 ;
-(void)dealloc;
@end

