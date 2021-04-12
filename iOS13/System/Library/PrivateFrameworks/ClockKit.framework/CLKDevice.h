/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/


#import <ClockKit/ClockKit-Structs.h>
@class NRDevice, NSCache, NSUUID;

@interface CLKDevice : NSObject {

	BOOL _runningGraceOrLater;
	BOOL _isLuxo;
	BOOL _supportsTritium;
	BOOL _isZeusBlack;
	BOOL _limitedToPreGlory;
	BOOL _isBridgeActive;
	BOOL _isExplorer;
	BOOL _hasRichMediaComplications;
	BOOL _supportsUrsa;
	int _pairedDeviceCapabilitiesChangeNotificationToken;
	os_unfair_lock_s _capabilitiesLock;
	int _cachedKeybagLockState;
	unsigned long long _version;
	unsigned long long _sizeClass;
	double _screenScale;
	double _screenCornerRadius;
	unsigned long long _collectionType;
	unsigned long long _materialType;
	NRDevice* _nrDevice;
	NSCache* _supportedCapabilitiesCache;
	CGRect _screenBounds;

}

@property (nonatomic,readonly) int pairedDeviceCapabilitiesChangeNotificationToken;                //@synthesize pairedDeviceCapabilitiesChangeNotificationToken=_pairedDeviceCapabilitiesChangeNotificationToken - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s capabilitiesLock;                                  //@synthesize capabilitiesLock=_capabilitiesLock - In the implementation block
@property (nonatomic,retain) NSCache * supportedCapabilitiesCache;                                 //@synthesize supportedCapabilitiesCache=_supportedCapabilitiesCache - In the implementation block
@property (assign,nonatomic) int cachedKeybagLockState;                                            //@synthesize cachedKeybagLockState=_cachedKeybagLockState - In the implementation block
@property (nonatomic,retain) NRDevice * nrDevice;                                                  //@synthesize nrDevice=_nrDevice - In the implementation block
@property (assign,nonatomic) BOOL isBridgeActive;                                                  //@synthesize isBridgeActive=_isBridgeActive - In the implementation block
@property (assign,nonatomic) unsigned long long sizeClass;                                         //@synthesize sizeClass=_sizeClass - In the implementation block
@property (assign,nonatomic) CGRect screenBounds;                                                  //@synthesize screenBounds=_screenBounds - In the implementation block
@property (assign,nonatomic) double screenScale;                                                   //@synthesize screenScale=_screenScale - In the implementation block
@property (assign,nonatomic) double screenCornerRadius;                                            //@synthesize screenCornerRadius=_screenCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL isLuxo;                                                          //@synthesize isLuxo=_isLuxo - In the implementation block
@property (assign,nonatomic) BOOL isExplorer;                                                      //@synthesize isExplorer=_isExplorer - In the implementation block
@property (assign,nonatomic) BOOL hasRichMediaComplications;                                       //@synthesize hasRichMediaComplications=_hasRichMediaComplications - In the implementation block
@property (assign,nonatomic) BOOL supportsUrsa;                                                    //@synthesize supportsUrsa=_supportsUrsa - In the implementation block
@property (assign,nonatomic) unsigned long long materialType;                                      //@synthesize materialType=_materialType - In the implementation block
@property (assign,nonatomic) unsigned long long collectionType;                                    //@synthesize collectionType=_collectionType - In the implementation block
@property (nonatomic,readonly) unsigned long long version;                                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL supportsTritium;                                               //@synthesize supportsTritium=_supportsTritium - In the implementation block
@property (nonatomic,readonly) BOOL isZeusBlack;                                                   //@synthesize isZeusBlack=_isZeusBlack - In the implementation block
@property (getter=isRunningGraceOrLater,nonatomic,readonly) BOOL runningGraceOrLater;              //@synthesize runningGraceOrLater=_runningGraceOrLater - In the implementation block
@property (nonatomic,readonly) BOOL isLocked; 
@property (nonatomic,readonly) BOOL unlockedSinceBoot; 
@property (nonatomic,readonly) NSUUID * nrDeviceUUID; 
@property (nonatomic,readonly) unsigned nrDeviceVersion; 
@property (nonatomic,readonly) BOOL limitedToPreGlory;                                             //@synthesize limitedToPreGlory=_limitedToPreGlory - In the implementation block
+(void)initialize;
+(id)currentDevice;
+(void)setCurrentDevice:(id)arg1 ;
+(id)deviceForNRDevice:(id)arg1 ;
+(id)activeNRDevice;
+(id)deviceForNRDevice:(id)arg1 forced:(BOOL)arg2 ;
+(void)_deviceDidBecomeActive;
+(void)_resetCurrentDevice;
+(id)nrDeviceForNRDeviceUUID:(id)arg1 ;
+(id)_cachedDeviceForUUID:(id)arg1 ;
+(id)deviceForNRDeviceUUID:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)version;
-(BOOL)isLocked;
-(CGRect)screenBounds;
-(void)setScreenBounds:(CGRect)arg1 ;
-(void)setScreenScale:(double)arg1 ;
-(double)screenScale;
-(unsigned long long)collectionType;
-(void)setCollectionType:(unsigned long long)arg1 ;
-(BOOL)supportsCapability:(id)arg1 ;
-(BOOL)unlockedSinceBoot;
-(id)initWithNRDevice:(id)arg1 ;
-(NRDevice *)nrDevice;
-(unsigned long long)sizeClass;
-(void)setSizeClass:(unsigned long long)arg1 ;
-(void)setNrDevice:(NRDevice *)arg1 ;
-(void)_loadDeviceInfo;
-(BOOL)_queryAndCacheNanoRegistryDeviceCapabilities;
-(NSUUID *)nrDeviceUUID;
-(void)updateKeybagLockStateCacheWithState:(int)arg1 ;
-(int)cachedKeybagLockState;
-(void)setCachedKeybagLockState:(int)arg1 ;
-(BOOL)isRunningGraceOrLater;
-(BOOL)isExplorer;
-(BOOL)hasRichMediaComplications;
-(BOOL)supportsUrsa;
-(unsigned)nrDeviceVersion;
-(double)screenCornerRadius;
-(void)setScreenCornerRadius:(double)arg1 ;
-(BOOL)isLuxo;
-(void)setIsLuxo:(BOOL)arg1 ;
-(BOOL)supportsTritium;
-(BOOL)isZeusBlack;
-(unsigned long long)materialType;
-(void)setMaterialType:(unsigned long long)arg1 ;
-(BOOL)limitedToPreGlory;
-(int)pairedDeviceCapabilitiesChangeNotificationToken;
-(os_unfair_lock_s)capabilitiesLock;
-(NSCache *)supportedCapabilitiesCache;
-(void)setSupportedCapabilitiesCache:(NSCache *)arg1 ;
-(BOOL)isBridgeActive;
-(void)setIsBridgeActive:(BOOL)arg1 ;
-(void)setIsExplorer:(BOOL)arg1 ;
-(void)setHasRichMediaComplications:(BOOL)arg1 ;
-(void)setSupportsUrsa:(BOOL)arg1 ;
@end

