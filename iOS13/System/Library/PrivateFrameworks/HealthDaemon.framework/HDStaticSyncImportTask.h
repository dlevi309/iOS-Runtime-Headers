/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStaticSyncTask.h>

@class NSURL;

@interface HDStaticSyncImportTask : HDStaticSyncTask {

	NSURL* _importDirectoryURL;

}
+(BOOL)_extractChangeArchive:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 progress:(id)arg4 error:(id*)arg5 ;
+(id)_extractChangesFromExtractor:(id)arg1 error:(id*)arg2 ;
+(BOOL)_applySyncChanges:(id)arg1 store:(id)arg2 profile:(id)arg3 progress:(id)arg4 error:(id*)arg5 ;
-(id)runWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithProfile:(id)arg1 options:(unsigned long long)arg2 storeIdentifier:(id)arg3 URL:(id)arg4 ;
-(void)_queue_importStaticSyncChangesFromDirectory:(id)arg1 syncStore:(id)arg2 progress:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

