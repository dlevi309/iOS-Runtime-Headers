/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MSUDataAccessor.framework/MSUDataAccessor
*/

#import <MSUDataAccessor/LPMedia.h>

@interface LPAPFSVolume : LPMedia
+(void)initialize;
+(id)supportedContentTypes;
+(void)_loadMountPointTableForMode:(int)arg1 ;
+(id)defaultMountPointGivenRole:(int)arg1 ;
+(id)defaultVolumeNameGivenRole:(int)arg1 ;
-(BOOL)isMounted;
-(id)volumeGroupUUID;
-(id)snapshotMountPoints;
-(BOOL)mountAtPath:(id)arg1 error:(id*)arg2 ;
-(id)mountAtTemporaryPathWithError:(id*)arg1 ;
-(BOOL)mountAtPath:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_createTemporaryMountPointWithError:(id*)arg1 ;
-(BOOL)unmountWithError:(id*)arg1 ;
-(BOOL)unmountWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)snapshotInfoWithError:(id*)arg1 ;
-(BOOL)setRole:(int)arg1 withError:(id*)arg2 ;
-(BOOL)isCaseSenstive;
-(BOOL)isFilevaultEncrypted;
-(id)pairedVolume;
-(BOOL)eraseVolumeWithError:(id*)arg1 ;
-(BOOL)mountWithError:(id*)arg1 ;
-(BOOL)unmountAllWithError:(id*)arg1 ;
-(BOOL)deleteVolumeWithError:(id*)arg1 ;
-(id)snapshotsWithError:(id*)arg1 ;
-(BOOL)createSnapshot:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteSnapshots:(id)arg1 waitForDeletionFor:(double)arg2 error:(id*)arg3 ;
-(BOOL)renameSnapshot:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(BOOL)revertToSnapshot:(id)arg1 error:(id*)arg2 ;
-(BOOL)rootToSnapshot:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEncrypted;
-(int)role;
-(id)container;
@end

