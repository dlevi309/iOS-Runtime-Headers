/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@interface _NSXPCStoreUtilities : NSObject
+(id)classesForErrorArchive;
+(id)_decodeBufferResultSetData:(id)arg1 forFetchRequest:(id)arg2 options:(unsigned long long)arg3 store:(id)arg4 context:(id)arg5 rowCacheRows:(id*)arg6 error:(id*)arg7 ;
+(id)decodeSecureArchivedData:(id)arg1 usingDelegate:(id)arg2 classes:(id)arg3 ;
+(id)_decodeResultSetData:(id)arg1 forFetchRequest:(id)arg2 options:(unsigned long long)arg3 store:(id)arg4 context:(id)arg5 rowCacheRows:(id*)arg6 error:(id*)arg7 ;
+(id)classesForSaveArchive;
+(id)newUserInfoFromException:(id)arg1 ;
+(id)newSecureArchivedDataWithRootObject:(id)arg1 ;
+(id)encodableTokenForStore:(id)arg1 queryGenerationToken:(id)arg2 ;
+(id)classesForFetchArchive;
+(void)logMessage:(id)arg1 forComponent:(id)arg2 ;
@end

