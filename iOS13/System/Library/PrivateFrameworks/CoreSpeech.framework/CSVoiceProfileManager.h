/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue;
@class CSVoiceIdXPCClient, NSObject;

@interface CSVoiceProfileManager : NSObject {

	unsigned long long _currentDeviceCategory;
	CSVoiceIdXPCClient* _xpcClient;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) unsigned long long currentDeviceCategory;              //@synthesize currentDeviceCategory=_currentDeviceCategory - In the implementation block
@property (nonatomic,retain) CSVoiceIdXPCClient * xpcClient;                        //@synthesize xpcClient=_xpcClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)isVoiceProfileUploadedToiCloudForLanguageCode:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(BOOL)isSATEnrolledForLanguageCode:(id)arg1 ;
-(BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)arg1 ;
-(void)enableVoiceTriggerUponVoiceProfileSyncForLanguage:(id)arg1 ;
-(id)getSATEnrollmentPath;
-(CSVoiceIdXPCClient *)xpcClient;
-(void)setXpcClient:(CSVoiceIdXPCClient *)arg1 ;
-(id)_getSATEnrollmentAudioPathForLanguageCodeForLegacyVoiceProfile:(id)arg1 ;
-(id)devicesWithVoiceProfileIniCloudForLanguage:(id)arg1 ;
-(BOOL)isSATEnrollmentMigratedForLanguageCode:(id)arg1 ;
-(void)discardSATEnrollmentForLanguageCode:(id)arg1 ;
-(void)discardAllSATEnrollment;
-(void)markSATEnrollmentSuccessForLanguageCode:(id)arg1 ;
-(BOOL)isSATAvailable;
-(id)CSSATBasePath;
-(void)setCurrentDeviceCategory:(unsigned long long)arg1 ;
-(id)baseDir;
-(void)_createAndSendImplicitUtterenceXPCMessage:(id)arg1 withRecordDeviceInfo:(id)arg2 withRecordCtxt:(id)arg3 withVoiceTriggerCtxt:(id)arg4 withOtherCtxt:(id)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)_CSSATDownloadPath;
-(id)_getUserVoiceProfileDownloadCacheDirectoryWithUpdatePath:(id)arg1 ;
-(id)_downloadAndEnrollVoiceProfileForProfileId:(id)arg1 withDownloadTriggerBlock:(/*^block*/id)arg2 ;
-(BOOL)_markSATEnrollmentSuccessForSiriProfileId:(id)arg1 forLanguageCode:(id)arg2 ;
-(BOOL)_markSATEnrollmentMigratedForSiriProfileId:(id)arg1 forLanguageCode:(id)arg2 ;
-(id)_enrollVoiceProfileForSiriProfileId:(id)arg1 fromCacheDirectoryPath:(id)arg2 withCategoryType:(unsigned long long)arg3 ;
-(void)_stageVoiceProfileWithSiriProfileId:(id)arg1 fromPath:(id)arg2 withForceUpload:(BOOL)arg3 ;
-(void)_downloadVoiceProfileForProfileId:(id)arg1 forDeviceCategory:(unsigned long long)arg2 withDownloadTriggerBlock:(/*^block*/id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)_getUserVoiceProfileDownloadCacheDirectoryForProfileId:(id)arg1 forDeviceCategory:(unsigned long long)arg2 forVoiceProfileVersion:(unsigned long long)arg3 ;
-(id)_enrollVoiceProfileForSiriProfileId:(id)arg1 forLanguage:(id)arg2 fromSourceDir:(id)arg3 ;
-(id)_copyVoiceProfileFromSrcDir:(id)arg1 toDestDir:(id)arg2 ;
-(id)_markVoiceProfileMigrationCompleteForSiriProfileId:(id)arg1 forLanguageCode:(id)arg2 ;
-(id)_enableVoiceTriggerIfLanguageMatches:(id)arg1 ;
-(id)_CSSATUploadPathForSiriProfileId:(id)arg1 ;
-(id)_prepareVoiceProfileWithSiriProfileId:(id)arg1 withUploadBlock:(/*^block*/id)arg2 ;
-(id)_CSSATLegacyUploadPath;
-(id)_getEnrolledLanguageList;
-(BOOL)_isDirectory:(id)arg1 ;
-(id)_CSSATUploadStagingPathForSiriProfileId:(id)arg1 ;
-(id)_copyVoiceProfileAtPath:(id)arg1 toPath:(id)arg2 ;
-(void)_copySATFilesFromPath:(id)arg1 toPath:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_getVoiceProfilePathsToBeUploadedForSiriProfileId:(id)arg1 ;
-(BOOL)_isMarkedForVoiceProfileTrainingSyncForLanguage:(id)arg1 ;
-(void)markSATEnrollmentSuccessForSiriProfileId:(id)arg1 forLanguageCode:(id)arg2 ;
-(void)_markVoiceProfileTrainingSyncForLanguage:(id)arg1 ;
-(BOOL)_isSATMarkedForSiriProfileId:(id)arg1 withMarker:(id)arg2 forLanguageCode:(id)arg3 ;
-(BOOL)isSATEnrolledForSiriProfileId:(id)arg1 forLanguageCode:(id)arg2 ;
-(BOOL)isSATEnrollmentMigratedForSiriProfileId:(id)arg1 forLanguageCode:(id)arg2 ;
-(id)_CSSATCachePath;
-(BOOL)_markSATEnrollmentWithMarker:(id)arg1 forLanguage:(id)arg2 forSiriProfileId:(id)arg3 ;
-(void)notifyImplicitTrainingUtteranceAvailable:(id)arg1 forVoiceProfileId:(id)arg2 withRecordDeviceInfo:(id)arg3 withRecordCtxt:(id)arg4 withVoiceTriggerCtxt:(id)arg5 withOtherCtxt:(id)arg6 withCompletion:(/*^block*/id)arg7 ;
-(id)getUserVoiceProfileUpdateDirectory;
-(void)notifyUserVoiceProfileDownloadReadyForUser:(id)arg1 getData:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)notifyUserVoiceProfileUpdateReady;
-(void)notifyUserVoiceProfileUploadCompleteForSiriProfileId:(id)arg1 withError:(id)arg2 ;
-(void)uploadUserVoiceProfileForSiriProfileId:(id)arg1 withUploadTrigger:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)getUserVoiceProfileUploadPathWithEnrolledLanguageList:(id*)arg1 ;
-(void)notifyUserVoiceProfileUploadComplete;
-(id)getCachedVoiceProfileAvailabilityMetaBlob;
-(BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)arg1 withBackupMetaBlob:(id)arg2 ;
-(id)provisionedVoiceProfilesForLocale:(id)arg1 ;
-(BOOL)_isRemoteVoiceTriggerAvailable;
-(id)discardSATEnrollmentForProfileId:(id)arg1 forLanguageCode:(id)arg2 ;
-(unsigned long long)currentDeviceCategory;
@end

