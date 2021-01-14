/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIsRebuildingPersons:(BOOL)arg1 ;
-(id)_rebuildingPersonsIndicatorFilePath;
-(void)updateICloudPhotosMarkerForEnable:(BOOL)arg1 ;
-(void)setTakingPhotoIsBusy:(BOOL)arg1 ;
-(short)currentPauseReason;
-(void)writeEnableICloudPhotosMarker;
-(BOOL)_canSetPauseMarkerWithUnpauseTime:(id)arg1 onPauseData:(id)arg2 ;
-(BOOL)hasItemToDownload;
-(BOOL)clearPauseMarkerForReason:(short)arg1 ;
-(BOOL)isDupeAnalysisNeeded;
-(void)getDownloadPhotoCount:(unsigned long long*)arg1 downloadVideoCount:(unsigned long long*)arg2 ;
-(void)createPauseMarkerWithUnpauseTime:(id)arg1 reason:(short)arg2 ;
-(BOOL)isEnableICloudPhotos;
-(id)initWithPathManager:(id)arg1 ;
-(void)writeDisableICloudPhotosMarker;
-(BOOL)isDisableICloudPhotos;
-(BOOL)isForceSoftResetSync;
-(BOOL)isRebuildingPersons;
-(id)dupeAnalysisNeededFilePath;
-(void)setDupeAnalysisNeeded:(BOOL)arg1 ;
-(void)setDownloadCountsForImages:(unsigned long long)arg1 videos:(unsigned long long)arg2 ;
-(void)_writeDict:(id)arg1 withFilename:(id)arg2 ;
-(void)_setActivityIndicatorWithPath:(id)arg1 flag:(BOOL)arg2 crashRecovery:(/*^block*/id)arg3 ;
-(void)forceSoftResetSync;
-(void)setStreamsLibraryUpdatingExpired:(BOOL)arg1 ;
-(void)_createPauseMarkerForReason:(short)arg1 withUnpauseTime:(id)arg2 withPath:(id)arg3 ;
-(id)_pauseDataOnPath:(id)arg1 ;
-(void)deleteCPLDownloadFinishedMarkerFilePath;
-(id)unpauseTime;
-(void)logCloudServiceEnableEvent:(BOOL)arg1 serviceName:(id)arg2 reason:(id)arg3 ;
-(void)setImageWriter:(id)arg1 isBusy:(BOOL)arg2 crashRecoverySupport:(id)arg3 ;
-(BOOL)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(BOOL)arg1 ;
-(BOOL)isICloudPhotosPaused;
-(BOOL)isUserPause;
-(id)_readPListWithFilename:(id)arg1 ;
-(BOOL)isStreamsLibraryUpdatingExpired;
@end

