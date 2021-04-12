/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLPhotoLibraryPathManager;

@interface PLIndicatorFileCoordinator : NSObject {

	PLPhotoLibraryPathManager* _pathManager;
	int _activityIndicatorFid;
	os_unfair_lock_s _activityIndicatorLock;

}
+(void)setSystemLibraryAvailableIndicatorState:(BOOL)arg1 ;
+(BOOL)systemLibraryAvailableIndicatorState;
-(id)initWithPathManager:(id)arg1 ;
-(BOOL)isDupeAnalysisNeeded;
-(void)setIsRebuildingPersons:(BOOL)arg1 ;
-(BOOL)isRebuildingPersons;
-(void)writeDisableICloudPhotosMarker;
-(void)writeEnableICloudPhotosMarker;
-(BOOL)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(BOOL)arg1 ;
-(void)setImageWriter:(id)arg1 isBusy:(BOOL)arg2 crashRecoverySupport:(id)arg3 ;
-(void)setTakingPhotoIsBusy:(BOOL)arg1 ;
-(void)setDownloadCountsForImages:(unsigned long long)arg1 videos:(unsigned long long)arg2 ;
-(BOOL)isForceSoftResetSync;
-(BOOL)isEnableICloudPhotos;
-(BOOL)isDisableICloudPhotos;
-(BOOL)clearPauseMarkerForReason:(short)arg1 ;
-(id)unpauseTime;
-(void)deleteCPLDownloadFinishedMarkerFilePath;
-(void)updateICloudPhotosMarkerForEnable:(BOOL)arg1 ;
-(void)createPauseMarkerWithUnpauseTime:(id)arg1 reason:(short)arg2 ;
-(short)currentPauseReason;
-(BOOL)isICloudPhotosPaused;
-(BOOL)hasItemToDownload;
-(void)forceSoftResetSync;
-(void)_setActivityIndicatorWithPath:(id)arg1 flag:(BOOL)arg2 crashRecovery:(/*^block*/id)arg3 ;
-(BOOL)_canSetPauseMarkerWithUnpauseTime:(id)arg1 onPauseData:(id)arg2 ;
-(void)_createPauseMarkerForReason:(short)arg1 withUnpauseTime:(id)arg2 withPath:(id)arg3 ;
-(id)_pauseDataOnPath:(id)arg1 ;
-(BOOL)isUserPause;
-(id)_readPListWithFilename:(id)arg1 ;
-(void)_writeDict:(id)arg1 withFilename:(id)arg2 ;
-(void)getDownloadPhotoCount:(unsigned long long*)arg1 downloadVideoCount:(unsigned long long*)arg2 ;
-(id)dupeAnalysisNeededFilePath;
-(void)setDupeAnalysisNeeded:(BOOL)arg1 ;
-(void)setStreamsLibraryUpdatingExpired:(BOOL)arg1 ;
-(BOOL)isStreamsLibraryUpdatingExpired;
-(id)_rebuildingPersonsIndicatorFilePath;
@end

