/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/


@class RCConfigurationSettings, RCDeviceInfo, NSURL, RCAsyncSerialQueue, RCKeyValueStore, NSMutableDictionary;

@interface RCConfigurationManager : NSObject {

	RCConfigurationSettings* _configurationSettings;
	RCDeviceInfo* _deviceInfo;
	NSURL* _contentDirectoryURL;
	RCAsyncSerialQueue* _configRequestSerialQueue;
	RCKeyValueStore* _localStore;
	NSMutableDictionary* _configResourceByRequestKey;

}

@property (nonatomic,retain) RCConfigurationSettings * configurationSettings;               //@synthesize configurationSettings=_configurationSettings - In the implementation block
@property (nonatomic,retain) RCDeviceInfo * deviceInfo;                                     //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,retain) NSURL * contentDirectoryURL;                                   //@synthesize contentDirectoryURL=_contentDirectoryURL - In the implementation block
@property (nonatomic,retain) RCAsyncSerialQueue * configRequestSerialQueue;                 //@synthesize configRequestSerialQueue=_configRequestSerialQueue - In the implementation block
@property (nonatomic,retain) RCKeyValueStore * localStore;                                  //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * configResourceByRequestKey;              //@synthesize configResourceByRequestKey=_configResourceByRequestKey - In the implementation block
-(void)setLocalStore:(RCKeyValueStore *)arg1 ;
-(RCKeyValueStore *)localStore;
-(void)_fetchMultiConfigurationFromEndpointURL:(id)arg1 settings:(id)arg2 changeTagsByRequestKey:(id)arg3 completion:(/*^block*/id)arg4 ;
-(RCDeviceInfo *)deviceInfo;
-(BOOL)_isValidConfigurationResource:(id)arg1 allowedToReachEndpoint:(BOOL)arg2 useBackgroundRefreshRate:(BOOL)arg3 ;
-(void)setConfigRequestSerialQueue:(RCAsyncSerialQueue *)arg1 ;
-(void)setDeviceInfo:(RCDeviceInfo *)arg1 ;
-(NSURL *)contentDirectoryURL;
-(void)setContentDirectoryURL:(NSURL *)arg1 ;
-(NSMutableDictionary *)configResourceByRequestKey;
-(void)fetchMultiConfigurationWithSettings:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_decodeConfigurationResource:(id)arg1 ;
-(RCAsyncSerialQueue *)configRequestSerialQueue;
-(BOOL)_areAllConfigurationResourcesAvailable:(id)arg1 requestKeys:(id)arg2 ;
-(id)_encodeConfigurationResource:(id)arg1 ;
-(id)initWithContentDirectoryURL:(id)arg1 ;
-(void)_saveConfigurationResource:(id)arg1 ;
-(RCConfigurationSettings *)configurationSettings;
-(void)fetchSingleConfigurationWithSettings:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_areAllConfigurationResourcesInvalid:(id)arg1 allowedToReachEndpoint:(BOOL)arg2 useBackgroundRefreshRate:(BOOL)arg3 requestKeys:(id)arg4 ;
-(void)_removeConfigurationResourceForRequestKey:(id)arg1 ;
-(void)_loadConfigurationResourcesFromStore;
-(void)fetchConfigurationWithSettings:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setConfigurationSettings:(RCConfigurationSettings *)arg1 ;
-(BOOL)_isAllowedToReachEndpointWithSettings:(id)arg1 configurationResource:(id)arg2 endpointURL:(id)arg3 ;
-(void)_fetchConfigurationFromFallbackURLWithSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_endpointURLForEnvironment:(unsigned long long)arg1 requestKey:(id)arg2 ;
-(void)setConfigResourceByRequestKey:(NSMutableDictionary *)arg1 ;
@end

