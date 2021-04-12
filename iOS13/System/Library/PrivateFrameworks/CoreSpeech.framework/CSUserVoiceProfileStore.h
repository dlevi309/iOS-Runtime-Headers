/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSLanguageCodeUpdateMonitorDelegate.h>
#import <libobjc.A.dylib/CSVoiceTriggerAssetDownloadMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSString, NSObject;

@interface CSUserVoiceProfileStore : NSObject <CSLanguageCodeUpdateMonitorDelegate, CSVoiceTriggerAssetDownloadMonitorDelegate> {

	unsigned long long _numberOfBaseProfileUtterancesToUpload;
	NSMutableArray* _voiceProfileArray;
	NSString* _languageCode;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSMutableArray * voiceProfileArray;                                                //@synthesize voiceProfileArray=_voiceProfileArray - In the implementation block
@property (nonatomic,retain) NSString * languageCode;                                                 //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfBaseProfileUtterancesToUpload;              //@synthesize numberOfBaseProfileUtterancesToUpload=_numberOfBaseProfileUtterancesToUpload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)userVoiceProfileForVoiceProfileID:(id)arg1 ;
-(void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(BOOL)arg2 ;
-(id)initStore;
-(void)_loadVoiceProfilesForLocale:(id)arg1 ;
-(void)resyncVoiceProfilesOnboardedThroughCloud;
-(void)_retrainLiveOnOnboardedProfilesForLanguage:(id)arg1 withForceRetrain:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_logVoiceProfileConfusionForAsset:(id)arg1 withCleanup:(BOOL)arg2 ;
-(id)_trainedUsersForLocale:(id)arg1 ;
-(id)_cleanupInvalidProfilesWithDryRun:(BOOL)arg1 ;
-(BOOL)_checkIfRetrainingRequiredForAsset:(id)arg1 ;
-(BOOL)_didReturnMultiUserNotFoundErrorCode:(id)arg1 ;
-(id)_deleteUserVoiceProfile:(id)arg1 ;
-(id)scoreSpeakerVector:(id)arg1 withVectorSize:(unsigned long long)arg2 withSatAnalyzers:(id)arg3 ;
-(id)evaluateScores:(id)arg1 forProfile:(id)arg2 withBaseThreshold:(unsigned long long)arg3 withImplicitThreshold:(unsigned long long)arg4 withDeltaThreshold:(unsigned long long)arg5 ;
-(id)_prepareImplicitUtterance:(id)arg1 withType:(id)arg2 toProfile:(id)arg3 withTriggerSource:(id)arg4 withAudioInput:(id)arg5 withMetaData:(id)arg6 withUploadFlag:(BOOL)arg7 ;
-(void)_updateTrainedUsersWithAction:(unsigned long long)arg1 UserVoiceProfile:(id)arg2 ;
-(id)_saveImplicitUtterance:(id)arg1 asUtterance:(id)arg2 withType:(id)arg3 withTriggerSource:(id)arg4 withAudioInput:(id)arg5 ;
-(void)_logSpeakerConfusionWithExplicitScores:(id)arg1 withImplicitScores:(id)arg2 withPurgeUtterances:(unsigned long long)arg3 forProfile:(id)arg4 forAsset:(id)arg5 ;
-(id)_getTopScoringProfileIdFromScores:(id)arg1 ;
-(id)_composeSpeakerConfusionWithScores:(id)arg1 forProfiles:(id)arg2 ;
-(id)_logSpeakerConfusion:(id)arg1 forProfileArray:(id)arg2 withPrependString:(id)arg3 ;
-(id)userVoiceProfileForSiriProfileId:(id)arg1 ;
-(id)_prepareVoiceProfileAtPath:(id)arg1 forImportToProfile:(id)arg2 ;
-(id)_importVoiceProfile:(id)arg1 forModelType:(unsigned long long)arg2 withContentsOfDirectory:(id)arg3 withAsset:(id)arg4 ;
-(id)_retrainVoiceProfile:(id)arg1 forModelType:(unsigned long long)arg2 withUtterances:(id)arg3 withForceRetrain:(BOOL)arg4 ;
-(void)_updateHomeUserId:(id)arg1 forProfileWithSiriProfileId:(id)arg2 ;
-(id)userVoiceProfilesForLocale:(id)arg1 ;
-(void)_retrainVoiceProfile:(id)arg1 withForceRetrain:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_retrainVoiceProfile:(id)arg1 forModelType:(unsigned long long)arg2 withForceRetrain:(BOOL)arg3 ;
-(id)_retrainExplicitOnlyModelForVoiceProfile:(id)arg1 withForceRetrain:(BOOL)arg2 ;
-(void)_saveTrainedUsers:(id)arg1 forLocale:(id)arg2 ;
-(id)copyAudioFiles:(id)arg1 toProfile:(id)arg2 forModelType:(unsigned long long)arg3 ;
-(void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2 ;
-(id)userVoiceProfileForSharedSiriDebugID:(id)arg1 ;
-(id)cleanupInvalidCloudOnBoardedProfilesWithDryRun:(BOOL)arg1 ;
-(void)addImplicitUtterance:(id)arg1 toVoiceProfile:(id)arg2 withTriggerSource:(id)arg3 withAudioInput:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)logVoiceProfileConfusionWithCleanup:(BOOL)arg1 ;
-(void)addUserVoiceProfile:(id)arg1 fromUtteranceCache:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)deleteUserVoiceProfile:(id)arg1 ;
-(BOOL)checkIfVoiceProfile:(id)arg1 needsUpdatedWith:(id)arg2 withCategory:(unsigned long long)arg3 ;
-(void)retrainVoiceProfilesForLanguage:(id)arg1 withForceRetrain:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_migrationAssistantForUserVoiceProfilesForLocale:(id)arg1 ;
-(void)addiTunesAccountForVoiceProfile:(id)arg1 withMultiUserToken:(id)arg2 withDsid:(id)arg3 withAltDsid:(id)arg4 withHomeId:(id)arg5 withHomeUserId:(id)arg6 withCompletionBlock:(/*^block*/id)arg7 ;
-(unsigned long long)numberOfBaseProfileUtterancesToUpload;
-(NSMutableArray *)voiceProfileArray;
-(void)setVoiceProfileArray:(NSMutableArray *)arg1 ;
@end

