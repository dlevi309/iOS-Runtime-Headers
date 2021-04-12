/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@class NSMutableDictionary, NSDictionary;

@interface CACLanguageAssetManager : NSObject {

	BOOL _isRegisteredForCallback;
	BOOL _isInstallationStatusStale;
	NSMutableDictionary* _downloadProgressDictionary;
	NSMutableDictionary* _lastReportedProgressDictionary;
	NSMutableDictionary* _downloadErrorDictionary;
	NSDictionary* _cachedInstallationStatus;

}

@property (assign,nonatomic) BOOL isRegisteredForCallback;                                      //@synthesize isRegisteredForCallback=_isRegisteredForCallback - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * downloadProgressDictionary;                  //@synthesize downloadProgressDictionary=_downloadProgressDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lastReportedProgressDictionary;              //@synthesize lastReportedProgressDictionary=_lastReportedProgressDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * downloadErrorDictionary;                     //@synthesize downloadErrorDictionary=_downloadErrorDictionary - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedInstallationStatus;                           //@synthesize cachedInstallationStatus=_cachedInstallationStatus - In the implementation block
@property (assign,nonatomic) BOOL isInstallationStatusStale;                                    //@synthesize isInstallationStatusStale=_isInstallationStatusStale - In the implementation block
+(void)initialize;
+(id)sharedManager;
-(id)init;
-(BOOL)isInstallationStatusStale;
-(void)setCachedInstallationStatus:(NSDictionary *)arg1 ;
-(void)setIsInstallationStatusStale:(BOOL)arg1 ;
-(void)markInstallationStatusStale;
-(NSDictionary *)cachedInstallationStatus;
-(id)installationStatus;
-(void)registerForCallback;
-(id)downloadProgressForLanguage:(id)arg1 ;
-(void)_downloadProgressCallback:(CFDictionaryRef)arg1 ;
-(NSMutableDictionary *)downloadErrorDictionary;
-(void)_handleErrorInDownloadForLanguage:(id)arg1 ;
-(NSMutableDictionary *)downloadProgressDictionary;
-(void)_sendProgressNotificationIfNeededForLanguage:(id)arg1 ;
-(NSMutableDictionary *)lastReportedProgressDictionary;
-(void)startDownloadOfLanguage:(id)arg1 ;
-(id)purgeInstalledAsset;
-(id)supportedLocaleIdentifiers;
-(unsigned long long)errorStatusForLanguage:(id)arg1 ;
-(BOOL)isRegisteredForCallback;
-(void)setIsRegisteredForCallback:(BOOL)arg1 ;
-(void)setDownloadProgressDictionary:(NSMutableDictionary *)arg1 ;
-(void)setLastReportedProgressDictionary:(NSMutableDictionary *)arg1 ;
-(void)setDownloadErrorDictionary:(NSMutableDictionary *)arg1 ;
@end

