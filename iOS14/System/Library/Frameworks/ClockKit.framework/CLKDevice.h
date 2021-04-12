/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/


#import <ClockKit/ClockKit-Structs.h>
@class NRDevice, NSLock, NSMutableDictionary, NSUUID;

@interface CLKDevice : NSObject {

	BOOL _runningGraceOrLater;
	BOOL _isLuxo;
	BOOL _supportsTritium;
	BOOL _isZeusBlack;
	BOOL _isRunningDaytonaOrLater;
	BOOL _isRunningGloryFOrLater;
	BOOL _isRunningGloryGMOrLater;
	BOOL _limitedToPreGlory;
	BOOL _limitedToPreHunter;
	BOOL _isTinker;
	BOOL _isBridgeActive;
	BOOL _supportsCompanionSync;
	BOOL _isExplorer;
	BOOL _hasRichMediaComplications;
	BOOL _supportsUrsa;
	BOOL _supportsPolaris;
	int _pairedDeviceCapabilitiesChangeNotificationToken;
	int _cachedKeybagLockState;
	os_unfair_lock_s _protectedLock;
	unsigned long long _version;
	unsigned long long _sizeClass;
	double _screenScale;
	double _screenCornerRadius;
	unsigned long long _collectionType;
	unsigned long long _materialType;
	NRDevice* _nrDevice;
	NSLock* _capabilitiesLock;
	NSMutableDictionary* _supportedCapabilitiesCache;
	CGRect _screenBounds;

}

@property (nonatomic,readonly) BOOL isBridgeActive; 
@property (nonatomic,readonly) BOOL canCustomize; 
@property (nonatomic,readonly) BOOL isRadioPhoneComplicationEnabled; 
@property (nonatomic,readonly) BOOL isEcgPhoneComplicationEnabled; 
@property (nonatomic,readonly) int pairedDeviceCapabilitiesChangeNotificationToken;                //@synthesize pairedDeviceCapabilitiesChangeNotificationToken=_pairedDeviceCapabilitiesChangeNotificationToken - In the implementation block
@property (nonatomic,readonly) NSLock * capabilitiesLock;                                          //@synthesize capabilitiesLock=_capabilitiesLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * supportedCapabilitiesCache;                     //@synthesize supportedCapabilitiesCache=_supportedCapabilitiesCache - In the implementation block
@property (assign,nonatomic) int cachedKeybagLockState;                                            //@synthesize cachedKeybagLockState=_cachedKeybagLockState - In the implementation block
@property (assign,nonatomic) BOOL isTinker;                                                        //@synthesize isTinker=_isTinker - In the implementation block
@property (nonatomic,retain) NRDevice * nrDevice;                                                  //@synthesize nrDevice=_nrDevice - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s protectedLock;                                       //@synthesize protectedLock=_protectedLock - In the implementation block
@property (nonatomic,readonly) BOOL isPaired; 
@property (nonatomic,readonly) NSUUID * nrDeviceUUID; 
@property (nonatomic,readonly) unsigned nrDeviceVersion; 
@property (assign,nonatomic) BOOL isBridgeActive;                                                  //@synthesize isBridgeActive=_isBridgeActive - In the implementation block
@property (assign,nonatomic) unsigned long long sizeClass;                                         //@synthesize sizeClass=_sizeClass - In the implementation block
@property (assign,nonatomic) CGRect screenBounds;                                                  //@synthesize screenBounds=_screenBounds - In the implementation block
@property (assign,nonatomic) double screenScale;                                                   //@synthesize screenScale=_screenScale - In the implementation block
@property (assign,nonatomic) double screenCornerRadius;                                            //@synthesize screenCornerRadius=_screenCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL supportsCompanionSync;                                           //@synthesize supportsCompanionSync=_supportsCompanionSync - In the implementation block
@property (assign,nonatomic) BOOL isLuxo;                                                          //@synthesize isLuxo=_isLuxo - In the implementation block
@property (assign,nonatomic) BOOL isExplorer;                                                      //@synthesize isExplorer=_isExplorer - In the implementation block
@property (assign,nonatomic) BOOL hasRichMediaComplications;                                       //@synthesize hasRichMediaComplications=_hasRichMediaComplications - In the implementation block
@property (assign,nonatomic) BOOL supportsUrsa;                                                    //@synthesize supportsUrsa=_supportsUrsa - In the implementation block
@property (assign,nonatomic) unsigned long long materialType;                                      //@synthesize materialType=_materialType - In the implementation block
@property (assign,nonatomic) unsigned long long collectionType;                                    //@synthesize collectionType=_collectionType - In the implementation block
@property (assign,nonatomic) BOOL supportsPolaris;                                                 //@synthesize supportsPolaris=_supportsPolaris - In the implementation block
@property (nonatomic,readonly) unsigned long long version;                                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL supportsTritium;                                               //@synthesize supportsTritium=_supportsTritium - In the implementation block
@property (nonatomic,readonly) BOOL isZeusBlack;                                                   //@synthesize isZeusBlack=_isZeusBlack - In the implementation block
@property (getter=isRunningGraceOrLater,nonatomic,readonly) BOOL runningGraceOrLater;              //@synthesize runningGraceOrLater=_runningGraceOrLater - In the implementation block
@property (nonatomic,readonly) BOOL isLocked; 
@property (nonatomic,readonly) BOOL unlockedSinceBoot; 
@property (nonatomic,readonly) BOOL isRunningDaytonaOrLater;                                       //@synthesize isRunningDaytonaOrLater=_isRunningDaytonaOrLater - In the implementation block
@property (nonatomic,readonly) BOOL isRunningGloryFOrLater;                                        //@synthesize isRunningGloryFOrLater=_isRunningGloryFOrLater - In the implementation block
@property (nonatomic,readonly) BOOL isRunningGloryGMOrLater;                                       //@synthesize isRunningGloryGMOrLater=_isRunningGloryGMOrLater - In the implementation block
@property (nonatomic,readonly) BOOL limitedToPreGlory;                                             //@synthesize limitedToPreGlory=_limitedToPreGlory - In the implementation block
@property (nonatomic,readonly) BOOL limitedToPreHunter;                                            //@synthesize limitedToPreHunter=_limitedToPreHunter - In the implementation block
+(void)setBridgeActiveNRDevice:(id)arg1 ;
+(void)initialize;
+(id)deviceForNRDevice:(id)arg1 ;
+(id)currentDevice;
+(void)_deviceDidBecomeActive:(id)arg1 ;
+(void)setCurrentDevice:(id)arg1 ;
+(unsigned)NRProductVersionForNRDevice:(id)arg1 ;
+(id)activeNRDevice;
+(id)deviceForNRDeviceUUID:(id)arg1 ;
+(id)nrDeviceForNRDeviceUUID:(id)arg1 ;
+(id)CLKDeviceUUIDForNRDevice:(id)arg1 ;
+(BOOL)NRDeviceIsRunningDaytonaOrLater:(id)arg1 ;
+(id)deviceForNRDevice:(id)arg1 forced:(BOOL)arg2 ;
+(id)_createCurrentDeviceWithNRDevice:(id)arg1 ;
+(id)_cachedDeviceForUUID:(id)arg1 ;
+(void)resetCurrentDevice;
-(BOOL)isRadioPhoneComplicationEnabled;
-(BOOL)canCustomize;
-(BOOL)isEcgPhoneComplicationEnabled;
-(BOOL)isPaired;
-(BOOL)isLocked;
-(void)setSizeClass:(unsigned long long)arg1 ;
-(BOOL)isTinker;
-(double)screenCornerRadius;
-(void)setScreenBounds:(CGRect)arg1 ;
-(BOOL)unlockedSinceBoot;
-(BOOL)isLuxo;
-(unsigned long long)sizeClass;
-(unsigned long long)collectionType;
-(void)setScreenScale:(double)arg1 ;
-(void)setCollectionType:(unsigned long long)arg1 ;
-(BOOL)supportsCapability:(id)arg1 ;
-(CGRect)screenBounds;
-(NRDevice *)nrDevice;
-(unsigned long long)version;
-(double)screenScale;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithNRDevice:(id)arg1 ;
-(BOOL)isRunningGraceOrLater;
-(BOOL)supportsTritium;
-(BOOL)isRunningGloryGMOrLater;
-(BOOL)isExplorer;
-(NSUUID *)nrDeviceUUID;
-(unsigned long long)materialType;
-(unsigned)nrDeviceVersion;
-(BOOL)isRunningGloryFOrLater;
-(BOOL)isZeusBlack;
-(BOOL)limitedToPreGlory;
-(BOOL)supportsUrsa;
-(BOOL)isBridgeActive;
-(void)setIsBridgeActive:(BOOL)arg1 ;
-(void)setNrDevice:(NRDevice *)arg1 ;
-(void)_loadDeviceInfo;
-(void)handleDeviceDidPairNotification;
-(void)customCompanionSetup;
-(BOOL)_queryAndCacheNanoRegistryDeviceCapabilities;
-(void)updateTinkerState;
-(BOOL)isLimitedToPreGloryDeviceOfProductType:(id)arg1 ;
-(BOOL)isM8SOCInDeviceOfProductType:(id)arg1 ;
-(BOOL)_supportsCapabilityUncached:(id)arg1 ;
-(BOOL)_checkUpdateFlushCapabilitiesCache_locked;
-(void)updateKeybagLockStateCacheWithState:(int)arg1 ;
-(int)cachedKeybagLockState;
-(void)setCachedKeybagLockState:(int)arg1 ;
-(void)customWatchSetup;
-(BOOL)hasRichMediaComplications;
-(BOOL)supportsPolaris;
-(void)setScreenCornerRadius:(double)arg1 ;
-(void)setIsLuxo:(BOOL)arg1 ;
-(void)setMaterialType:(unsigned long long)arg1 ;
-(BOOL)isRunningDaytonaOrLater;
-(BOOL)limitedToPreHunter;
-(int)pairedDeviceCapabilitiesChangeNotificationToken;
-(NSLock *)capabilitiesLock;
-(NSMutableDictionary *)supportedCapabilitiesCache;
-(void)setSupportedCapabilitiesCache:(NSMutableDictionary *)arg1 ;
-(void)setIsTinker:(BOOL)arg1 ;
-(os_unfair_lock_s)protectedLock;
-(void)setProtectedLock:(os_unfair_lock_s)arg1 ;
-(BOOL)supportsCompanionSync;
-(void)setSupportsCompanionSync:(BOOL)arg1 ;
-(void)setIsExplorer:(BOOL)arg1 ;
-(void)setHasRichMediaComplications:(BOOL)arg1 ;
-(void)setSupportsUrsa:(BOOL)arg1 ;
-(void)setSupportsPolaris:(BOOL)arg1 ;
@end
