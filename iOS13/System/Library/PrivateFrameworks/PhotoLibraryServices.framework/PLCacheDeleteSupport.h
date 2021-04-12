/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)verifyAndFixLocalAvailabilityForMissingResourcesUsingFileIDInManagedObjectContext:(id)arg1 countPresent:(long long*)arg2 countMissing:(long long*)arg3 countUnableToVerify:(long long*)arg4 error:(id*)arg5 ;
+(BOOL)clearPurgeableFlagsForAllResourcesInPhotoLibraryURL:(id)arg1 ;
+(id)purgeableStateDescriptionForFile:(id)arg1 ;
+(BOOL)markPurgeableForFileAtURL:(id)arg1 withUrgency:(long long)arg2 outInode:(unsigned long long*)arg3 ;
+(id)_purgeableResourceDirectoriesForPathManager:(id)arg1 ;
+(void)registerNullHandler;
+(fsid)fsidForURL:(id)arg1 ;
+(BOOL)isPurgeableFile:(id)arg1 outIsPhotoType:(BOOL*)arg2 outUrgencyLevel:(long long*)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(BOOL)clearPurgeableFlagsForAllResources;
-(void)setExitDeleteTime:(NSDate *)arg1 ;
-(NSDate *)exitDeleteTime;
-(BOOL)markResourceAsPurgeable:(id)arg1 withUrgency:(long long)arg2 ;
-(BOOL)clearPurgeableFlagForResource:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 cplStatus:(id)arg2 ;
-(void)_installPurgeObserverAndProcessAlreadyRemovedFiles;
-(void)_processRemovedFiles:(id)arg1 inMountPoint:(id)arg2 ;
-(BOOL)_isFilePurgedForFileID:(id)arg1 purgedPath:(id)arg2 ;
-(void)_rescanResourcesFromFileSystem;
-(void)_markAsNotLocallyAvailableForResourcesWithFileIDsToPath:(id)arg1 ;
@end

