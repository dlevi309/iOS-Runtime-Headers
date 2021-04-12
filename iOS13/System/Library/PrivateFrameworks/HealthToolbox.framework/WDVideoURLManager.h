/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@interface WDVideoURLManager : NSObject
+(void)_fetchPreferredURLForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)_parseJSON:(id)arg1 ;
+(id)preferredLanguageFromLanguages:(id)arg1 languagePreferences:(id)arg2 ;
+(id)_baseURLForIdentifier:(id)arg1 ;
+(void)_fetchRawManifestForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)fetchURLForVideoWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
+(BOOL)isVideoPlaybackEnabled;
@end

