/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@interface PFCloudKitMetadataPurger : NSObject
-(BOOL)purgeMetadataFromStore:(id)arg1 inMonitor:(id)arg2 withOptions:(unsigned long long)arg3 forRecordZones:(id)arg4 inDatabaseWithScope:(long long)arg5 error:(id*)arg6 ;
-(BOOL)purgeMetadataMatchingObjectIDs:(id)arg1 inRequest:(id)arg2 inStore:(id)arg3 withMonitor:(id)arg4 error:(id*)arg5 ;
-(BOOL)purgeMetadataFromStore:(id)arg1 inMonitor:(id)arg2 withOptions:(unsigned long long)arg3 forRecordZones:(id)arg4 inDatabaseWithScope:(long long)arg5 andTransactionAuthor:(id)arg6 error:(id*)arg7 ;
@end

