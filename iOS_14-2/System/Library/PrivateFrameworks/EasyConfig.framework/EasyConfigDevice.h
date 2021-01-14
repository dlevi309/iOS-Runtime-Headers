/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EasyConfig.framework/EasyConfig
*/

#import <EasyConfig/EasyConfig-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDictionary, NSString;

@interface EasyConfigDevice : NSObject <NSCopying> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _userQueue;
	NSDictionary* _scanRecord;
	BOOL _started;
	int _firstErr;
	BonjourBrowserRef _airplayBrowser;
	NSDictionary* _airplayBonjourInfo;
	BonjourBrowserRef _raopBrowser;
	NSDictionary* _raopBonjourInfo;
	BonjourBrowserRef _mfiConfigBrowser;
	NSDictionary* _mfiConfigBonjourInfo;
	BonjourBrowserRef _hapBrowser;
	NSDictionary* _hapBonjourInfo;
	unsigned _configSeed;
	HTTPClientPrivateRef _httpClient;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	int _state;
	double _securityStartTime;
	double _securityFinishTime;
	MFiSAPRef _mfiSAP;
	PairingSessionPrivateRef _pairingSession;
	/*^block*/id _promptForSetupCodeBlock;
	unsigned long long _deviceIdentifier;
	unsigned long long _features;
	NSString* _model;
	NSString* _name;
	NSDictionary* _configuration;
	NSDictionary* _configResponse;
	unsigned _pairSetupFlags;
	unsigned _pairVerifyFlags;
	BOOL _pausesAfterApply;
	BOOL _skipPairSetup;
	BOOL _supportsHAP;
	BOOL _supportsHAP2;
	BOOL _supportsMFi;
	BOOL _supportsPairSetup;
	BOOL _supportsTLV;
	BOOL _preConfigMetricsSet;
	SCD_Struct_Ea6 _preConfigMetrics;
	BOOL _postConfigMetricsSet;
	SCD_Struct_Ea7 _postConfigMetrics;
	double _configStartTime;
	double _findPreConfigStartTime;
	double _findPreConfigFoundTime;
	double _findPostConfigStartTime;
	double _findPostConfigFoundTime;
	double _applyConfigStartTime;
	double _applyConfigFinishTime;
	double _postConfigCheckStartTime;
	double _postConfigCheckFinishTime;
	NSDictionary* _deviceInfo;
	double _promptForSetupCodeTime;
	unsigned _enterSetupCodeMs;
	BOOL _hasPairingDelegate;
	SCD_Struct_Ea8* _pairingDelegate;
	/*^block*/id _progressHandler;

}

@property (nonatomic,copy) NSDictionary * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) unsigned long long deviceIdentifier;                     //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize userQueue=_userQueue - In the implementation block
@property (assign,nonatomic) unsigned long long features;                             //@synthesize features=_features - In the implementation block
@property (nonatomic,copy) NSString * model;                                          //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,nonatomic) unsigned pairSetupFlags;                                 //@synthesize pairSetupFlags=_pairSetupFlags - In the implementation block
@property (assign,nonatomic) unsigned pairVerifyFlags;                                //@synthesize pairVerifyFlags=_pairVerifyFlags - In the implementation block
@property (assign,nonatomic) BOOL pausesAfterApply;                                   //@synthesize pausesAfterApply=_pausesAfterApply - In the implementation block
@property (assign,nonatomic) BOOL skipPairSetup;                                      //@synthesize skipPairSetup=_skipPairSetup - In the implementation block
+(id)deviceWithInfo:(id)arg1 ;
+(id)deviceWithScanRecord:(id)arg1 ;
+(BOOL)supportedScanRecord:(id)arg1 ;
-(unsigned long long)deviceIdentifier;
-(void)setDeviceIdentifier:(unsigned long long)arg1 ;
-(NSString *)model;
-(id)init;
-(unsigned long long)features;
-(void)_handleError:(int)arg1 ;
-(void)start;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)pairVerifyFlags;
-(void)_start;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)stop;
-(void)setFeatures:(unsigned long long)arg1 ;
-(NSString *)name;
-(void)setPairVerifyFlags:(unsigned)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(NSDictionary *)configuration;
-(void)setProgressHandler:(id)arg1 ;
-(void)setPairingDelegate:(const void*)arg1 ;
-(void)trySetupCode:(id)arg1 ;
-(void)setPromptForSetupCodeHandler:(/*^block*/id)arg1 ;
-(void)resumePostConfig;
-(void)setPostConfigMetrics:(const SCD_Struct_Ea7*)arg1 ;
-(void)setPreConfigMetrics:(const SCD_Struct_Ea6*)arg1 ;
-(void)setPausesAfterApply:(BOOL)arg1 ;
-(void)setPairSetupFlags:(unsigned)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)_stop:(int)arg1 ;
-(id)progressHandler;
-(unsigned)pairSetupFlags;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(void)setSkipPairSetup:(BOOL)arg1 ;
-(int)_pairSetupStart;
-(BOOL)updated:(id)arg1 ;
-(BOOL)removed:(id)arg1 ;
-(void)_trySetupCode:(id)arg1 ;
-(int)_findDevicePreConfigStart;
-(void)_findDevicePreConfigEvent:(unsigned)arg1 info:(id)arg2 ;
-(int)_configureStart:(id)arg1 ;
-(int)_mfiSAPStart;
-(int)_mfiSAPNext:(HTTPMessagePrivate*)arg1 ;
-(int)_pairSetupNext:(HTTPMessagePrivate*)arg1 ;
-(int)_pairVerifyStart;
-(int)_pairVerifyNext:(HTTPMessagePrivate*)arg1 ;
-(int)_applyConfigStart;
-(void)_applyConfigCompletion:(HTTPMessagePrivate*)arg1 ;
-(int)_findDevicePostConfigStart;
-(void)_findDevicePostConfigEvent:(unsigned)arg1 info:(id)arg2 ;
-(void)_postConfigCheckStart:(id)arg1 ;
-(void)_postConfigCheckCompletion:(HTTPMessagePrivate*)arg1 ;
-(void)_logEnded;
-(void)_postNote:(id)arg1 info:(id)arg2 ;
-(void)_postProgress:(int)arg1 info:(id)arg2 ;
-(void)_postProgress:(int)arg1 withResponse:(id)arg2 ;
-(int)_setupClient:(id)arg1 ;
-(int)_startBonjourWithTimeout:(int)arg1 handler:(/*^block*/id)arg2 ;
-(int)_timeoutTimerStart:(int)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)pausesAfterApply;
-(BOOL)skipPairSetup;
@end

