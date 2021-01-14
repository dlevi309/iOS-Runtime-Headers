/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <AccessibilitySharedSupport/AXSSCloudKitHelper.h>

@class AXDispatchTimer;

@interface AXSSPunctuationEntryCloudKitHelper : AXSSCloudKitHelper {

	AXDispatchTimer* _changeCoalescer;

}
-(void)_processPunctuationEntryFromCKRecord:(id)arg1 ;
-(id)apsEnvironment;
-(Class)managedObjectClass;
-(void)beginWatchingForChanges;
-(void)punctuationGroupChanged:(id)arg1 ;
-(id)recordType;
-(id)createCKRecordFromEntry:(id)arg1 ;
-(id)testRecordForSchemaCreation:(id)arg1 ;
-(void)retrieveLocalChangesForCloud:(/*^block*/id)arg1 ;
-(void)clearRecordsForPurging:(id)arg1 ;
-(id)createCKRecordFromObject:(id)arg1 ;
-(void)processServerUpdateChanges:(id)arg1 moc:(id)arg2 recordNameToManagedObject:(id)arg3 ;
-(void)dealloc;
@end

