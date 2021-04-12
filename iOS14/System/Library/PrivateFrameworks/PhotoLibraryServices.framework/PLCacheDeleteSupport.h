/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLPhotoLibrary, NSDate;

@interface PLCacheDeleteSupport : NSObject {

	PLPhotoLibrary* _photoLibrary;
	fsid _fsid;
	NSDate* _exitDeleteTime;

}

@property (nonatomic,copy) NSDate * exitDeleteTime;              //@synthesize exitDeleteTime=_exitDeleteTime - In the implementation block
+(BOOL)markPurgeableForFileAtURL:(id)arg1 withUrgency:(long long)arg2 outInode:(unsigned long long*)arg3 ;
+(BOOL)verifyAndFixLocalAvailabilityForMissingResourcesUsingFileIDInManagedObjectContext:(id)arg1 countPresent:(long long*)arg2 countMissing:(long long*)arg3 countUnableToVerify:(long long*)arg4 error:(id*)arg5 ;
+(BOOL)clearPurgeableFlagsForAllResourcesInPhotoLibraryURL:(id)arg1 ;
+(fsid)fsidForURL:(id)arg1 ;
+(id)_purgeableResourceDirectoriesForPathManager:(id)arg1 ;
+(void)registerNullHandler;
+(BOOL)isPurgeableFile:(id)arg1 outIsPhotoType:(BOOL*)arg2 outUrgencyLevel:(long long*)arg3 ;
+(id)purgeableStateDescriptionForFile:(id)arg1 ;
-(NSDate *)exitDeleteTime;
-(BOOL)clearPurgeableFlagsForAllResources;
-(BOOL)markResourceAsPurgeable:(id)arg1 withUrgency:(long long)arg2 ;
-(BOOL)clearPurgeableFlagForResource:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 cplStatus:(id)arg2 ;
-(void)_installPurgeObserverAndProcessAlreadyRemovedFiles;
-(void)_processRemovedFiles:(id)arg1 inMountPoint:(id)arg2 ;
-(BOOL)_isFilePurgedForFileID:(id)arg1 purgedPath:(id)arg2 ;
-(void)_rescanResourcesFromFileSystem;
-(void)setExitDeleteTime:(NSDate *)arg1 ;
-(void)_markAsNotLocallyAvailableForResourcesWithFileIDsToPath:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
@end

