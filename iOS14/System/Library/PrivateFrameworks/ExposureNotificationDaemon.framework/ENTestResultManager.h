/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSURLSession, ENConfigurationStore, ENExposureDatabase, ENTemporaryExposureKeyManager;

@interface ENTestResultManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _sessionsByUUID;
	NSURLSession* _URLSession;
	ENConfigurationStore* _configurationStore;
	ENExposureDatabase* _exposureDatabase;
	ENTemporaryExposureKeyManager* _temporaryExposureKeyManager;

}

@property (nonatomic,readonly) ENConfigurationStore * configurationStore;                                //@synthesize configurationStore=_configurationStore - In the implementation block
@property (nonatomic,readonly) ENExposureDatabase * exposureDatabase;                                    //@synthesize exposureDatabase=_exposureDatabase - In the implementation block
@property (nonatomic,readonly) ENTemporaryExposureKeyManager * temporaryExposureKeyManager;              //@synthesize temporaryExposureKeyManager=_temporaryExposureKeyManager - In the implementation block
-(void)invalidate;
-(ENExposureDatabase *)exposureDatabase;
-(ENConfigurationStore *)configurationStore;
-(ENTemporaryExposureKeyManager *)temporaryExposureKeyManager;
-(id)initWithConfigurationStore:(id)arg1 exposureDatabase:(id)arg2 temporaryExposureKeyManager:(id)arg3 queue:(id)arg4 ;
-(void)startTestVerficationSessionWithCode:(id)arg1 region:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)metadataForSessionWithUUID:(id)arg1 error:(id*)arg2 ;
-(void)finishSessionWithUUID:(id)arg1 userDidConsent:(BOOL)arg2 metadata:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_existingSessionForVerificationCode:(id)arg1 region:(id)arg2 ;
-(id)_createSessionWithVerificationCode:(id)arg1 region:(id)arg2 error:(id*)arg3 ;
-(id)_sessionWithUUID:(id)arg1 error:(id*)arg2 ;
-(void)_invalidateSession:(id)arg1 ;
-(id)_getTemporaryExposureKeysForUpload:(BOOL)arg1 requireConsentForRegion:(id)arg2 error:(id*)arg3 ;
-(BOOL)_getRevisionToken:(id*)arg1 forSession:(id)arg2 error:(id*)arg3 ;
-(BOOL)_setRevisionToken:(id)arg1 forSession:(id)arg2 error:(id*)arg3 ;
-(id)_revisionTokenKeyForSession:(id)arg1 ;
@end

