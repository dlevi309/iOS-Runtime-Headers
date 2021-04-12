/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@interface PFCloudKitMetadataPurger : NSObject
-(BOOL)purgeMetadataFromStore:(id)arg1 inMonitor:(id)arg2 withOptions:(unsigned long long)arg3 forRecordZones:(id)arg4 inDatabaseWithScope:(long long)arg5 andTransactionAuthor:(id)arg6 error:(id*)arg7 ;
-(BOOL)purgeMetadataFromStore:(id)arg1 inMonitor:(id)arg2 withOptions:(unsigned long long)arg3 forRecordZones:(id)arg4 inDatabaseWithScope:(long long)arg5 error:(id*)arg6 ;
-(BOOL)purgeMetadataMatchingObjectIDs:(id)arg1 inRequest:(id)arg2 inStore:(id)arg3 withMonitor:(id)arg4 error:(id*)arg5 ;
@end

