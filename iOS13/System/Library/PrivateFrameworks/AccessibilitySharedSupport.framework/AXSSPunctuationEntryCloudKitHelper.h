/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <AccessibilitySharedSupport/AXSSCloudKitHelper.h>

@class AXDispatchTimer;

@interface AXSSPunctuationEntryCloudKitHelper : AXSSCloudKitHelper {

	AXDispatchTimer* _changeCoalescer;

}
-(void)dealloc;
-(id)recordType;
-(id)apsEnvironment;
-(void)beginWatchingForChanges;
-(id)testRecordForSchemaCreation:(id)arg1 ;
-(Class)managedObjectClass;
-(void)processServerUpdateChanges:(id)arg1 moc:(id)arg2 recordNameToManagedObject:(id)arg3 ;
-(void)clearRecordsForPurging:(id)arg1 ;
-(void)retrieveLocalChangesForCloud:(/*^block*/id)arg1 ;
-(id)createCKRecordFromObject:(id)arg1 ;
-(void)punctuationGroupChanged:(id)arg1 ;
-(id)createCKRecordFromEntry:(id)arg1 ;
-(void)_processPunctuationEntryFromCKRecord:(id)arg1 ;
@end

