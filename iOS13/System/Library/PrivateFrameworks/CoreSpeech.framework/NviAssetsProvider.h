/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

@class NSString;


@protocol NviAssetsProvider <NSObject>
@property (nonatomic,readonly) NSString * nviConfigRoot; 
@property (nonatomic,readonly) NSString * hepConfigFilepath; 
@optional
-(float)dirAzimuthEMAParam;
-(float)vadSoSThresholdInMs;
-(float)vadSoSConvergenceInMs;
-(id)kwdConfigPath;
-(id)kwdThresholdsMap;
-(BOOL)isDirectionalityAvailable;
-(float)dirAzimuthMatchThreshold;
-(BOOL)isAsdAvailable;
-(id)anchorAsdConfigFile;
-(id)anchorAsdConfigRoot;
-(id)payloadAsdFrontendConfigFile;
-(id)payloadAsdFrontendConfigRoot;
-(id)payloadAsdModelPath;
-(NSString *)nviConfigRoot;
-(NSString *)hepConfigFilepath;

@required
-(id)init;
-(id)initWithTaskIdentifier:(id)arg1;
-(BOOL)isDirectionalityLoggingEnabled;
-(id)signalProvidersMapForContext:(id)arg1;
-(id)signalProviderToDatasourceMap;
-(BOOL)isSignalProviderDisabledInCFPrefs:(unsigned long long)arg1;

@end

