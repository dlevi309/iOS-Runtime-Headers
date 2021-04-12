/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
*/


@protocol OS_dispatch_queue;
@class NSObject, PKHost;

@interface PMMAppsSettingsMonitor : NSObject {

	BOOL _applicationPredictionExtensionEnabled;
	BOOL _zeroKeywordEnabled;
	BOOL _magicalMomentsEnabled;
	int _notifyRegistrationToken;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _handler;
	PKHost* _pluginKitHost;
	id _driver;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id handler;                                                //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) PKHost * pluginKitHost;                                  //@synthesize pluginKitHost=_pluginKitHost - In the implementation block
@property (nonatomic,retain) id driver;                                               //@synthesize driver=_driver - In the implementation block
@property (assign,nonatomic) BOOL applicationPredictionExtensionEnabled;              //@synthesize applicationPredictionExtensionEnabled=_applicationPredictionExtensionEnabled - In the implementation block
@property (assign,nonatomic) BOOL zeroKeywordEnabled;                                 //@synthesize zeroKeywordEnabled=_zeroKeywordEnabled - In the implementation block
@property (assign,nonatomic) int notifyRegistrationToken;                             //@synthesize notifyRegistrationToken=_notifyRegistrationToken - In the implementation block
@property (assign,nonatomic) BOOL magicalMomentsEnabled;                              //@synthesize magicalMomentsEnabled=_magicalMomentsEnabled - In the implementation block
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(id)driver;
-(void)setDriver:(id)arg1 ;
-(void)_registerForNotifications;
-(int)notifyRegistrationToken;
-(void)_determinePredictedApplicationExtensionEnabled;
-(void)_updatePredictedApplicationExtensions:(id)arg1 error:(id)arg2 ;
-(BOOL)_determineZeroKeywordEnabled;
-(void)_registerForZeroKeywordDisabledNotification;
-(void)_updateAppSettingsEnabled;
-(void)fetchAppsSuggestionsEnabled:(/*^block*/id)arg1 ;
-(PKHost *)pluginKitHost;
-(void)setPluginKitHost:(PKHost *)arg1 ;
-(BOOL)applicationPredictionExtensionEnabled;
-(void)setApplicationPredictionExtensionEnabled:(BOOL)arg1 ;
-(BOOL)zeroKeywordEnabled;
-(void)setZeroKeywordEnabled:(BOOL)arg1 ;
-(void)setNotifyRegistrationToken:(int)arg1 ;
-(BOOL)magicalMomentsEnabled;
-(void)setMagicalMomentsEnabled:(BOOL)arg1 ;
@end

