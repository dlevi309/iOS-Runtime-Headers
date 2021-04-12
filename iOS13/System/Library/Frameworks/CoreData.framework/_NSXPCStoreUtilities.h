/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@interface _NSXPCStoreUtilities : NSObject
+(id)classesForFetchArchive;
+(id)newSecureArchivedDataWithRootObject:(id)arg1 ;
+(id)identifierForStore:(id)arg1 ;
+(id)encodableTokenForStore:(id)arg1 queryGenerationToken:(id)arg2 ;
+(void)logMessage:(id)arg1 forComponent:(id)arg2 ;
+(id)classesForErrorArchive;
+(id)classesForSaveArchive;
+(id)decodeSecureArchivedData:(id)arg1 usingDelegate:(id)arg2 classes:(id)arg3 ;
+(id)newUserInfoFromException:(id)arg1 ;
+(id)_decodeBufferResultSetData:(id)arg1 forFetchRequest:(id)arg2 options:(unsigned long long)arg3 store:(id)arg4 context:(id)arg5 rowCacheRows:(id*)arg6 error:(id*)arg7 ;
+(id)_decodeResultSetData:(id)arg1 forFetchRequest:(id)arg2 options:(unsigned long long)arg3 store:(id)arg4 context:(id)arg5 rowCacheRows:(id*)arg6 error:(id*)arg7 ;
@end

