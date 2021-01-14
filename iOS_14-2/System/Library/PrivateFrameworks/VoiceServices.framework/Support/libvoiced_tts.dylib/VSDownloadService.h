/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@class VSMobileAssetsManager, VSSiriServerConfiguration, VSPreferencesInterface;

@interface VSDownloadService : NSObject {

	unsigned long long _type;
	VSMobileAssetsManager* _mobileAssetManager;
	VSSiriServerConfiguration* _serverConfig;
	VSPreferencesInterface* _preferenceInterface;

}

@property (nonatomic,retain) VSMobileAssetsManager * mobileAssetManager;                //@synthesize mobileAssetManager=_mobileAssetManager - In the implementation block
@property (nonatomic,retain) VSSiriServerConfiguration * serverConfig;                  //@synthesize serverConfig=_serverConfig - In the implementation block
@property (nonatomic,retain) VSPreferencesInterface * preferenceInterface;              //@synthesize preferenceInterface=_preferenceInterface - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                 //@synthesize type=_type - In the implementation block
+(id)inProgressDownloadVoiceKeys;
+(void)addInProgressDownloadVoiceKey:(id)arg1 ;
+(void)removeInProgressDownloadVoiceKey:(id)arg1 ;
+(id)inProgressDownloadResourceKeys;
+(id)downloadQueue;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)updateVoiceIfNeeded:(id)arg1 ;
-(VSMobileAssetsManager *)mobileAssetManager;
-(void)cancelAllResourceDownloads;
-(void)setMobileAssetManager:(VSMobileAssetsManager *)arg1 ;
-(void)setServerConfig:(VSSiriServerConfiguration *)arg1 ;
-(void)updateVoiceResourcesWithPriorityForLanguages:(id)arg1 ;
-(void)updateVoicesAndVoiceResources;
-(VSSiriServerConfiguration *)serverConfig;
-(VSPreferencesInterface *)preferenceInterface;
-(unsigned long long)type;
-(void)cancelDownloadForAssets:(id)arg1 ;
-(void)downloadNextInProgressDownloadResource;
-(void)setPreferenceInterface:(VSPreferencesInterface *)arg1 ;
@end

