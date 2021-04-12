/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@interface TSPDatabaseArchiveManager : NSObject
+(BOOL)populateDistributableArchiveEntry:(id)arg1 database:(id)arg2 fileManager:(id)arg3 ;
+(BOOL)_processDistributableArchiveEntry:(id)arg1 database:(id)arg2 fileManager:(id)arg3 error:(id*)arg4 ;
+(BOOL)_processLoad:(id)arg1 classType:(int*)arg2 database:(id)arg3 fileManager:(id)arg4 error:(id*)arg5 ;
+(BOOL)_processGetRelationships:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
@end

