/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSRequestDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSSet, NSObject, SSKeyValueStore, SSURLBag, SSPromise;

@interface SSDevice : NSObject <SSRequestDelegate> {

	NSString* _appleTVProductVersion;
	NSSet* _automaticDownloadKinds;
	id _cloudMediaLibraryIdentifier;
	long long _deviceType;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSKeyValueStore* _keyValueStore;
	NSString* _legacyUserAgent;
	NSString* _localStoreFrontIdentifier;
	id _mediaLibraryIdentifier;
	NSString* _phoneNumber;
	NSString* _productType;
	NSString* _productVersion;
	id _softwareLibraryIdentifier;
	NSString* _udid;
	SSURLBag* _urlBag;
	NSString* _userAgent;
	NSString* _clientName;
	double _batteryLevel;
	unsigned _batteryMonitorNotification;
	IONotificationPortRef _batteryMonitorPort;
	BOOL _pluggedIn;
	int _pluggedInToken;
	long long _powerMonitorCount;

}

@property (readonly) NSString * compatibleProductType; 
@property (readonly) long long deviceType; 
@property (readonly) unsigned deviceTypeIdentifier; 
@property (readonly) NSString * phoneNumber; 
@property (readonly) NSString * productType; 
@property (readonly) NSString * productVersion; 
@property (readonly) float screenScale; 
@property (readonly) NSString * serialNumber; 
@property (nonatomic,readonly) SSPromise * storeFrontIdentifierPromise; 
@property (readonly) NSString * thinnedApplicationVariantIdentifier; 
@property (readonly) NSString * uniqueDeviceIdentifier; 
@property (getter=isPluggedIn,readonly) BOOL pluggedIn; 
@property (readonly) double batteryLevel; 
@property (copy) NSString * cloudMediaLibraryIdentifier; 
@property (copy) NSString * mediaLibraryIdentifier; 
@property (copy) NSString * softwareLibraryIdentifier; 
@property (readonly) NSString * clientVersion; 
@property (readonly) NSString * clientName; 
@property (readonly) NSString * storeFrontIdentifier; 
@property (readonly) NSString * legacyUserAgent; 
@property (readonly) NSString * userAgent; 
@property (readonly) NSSet * automaticDownloadKinds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)setCachedAvailableItemKinds:(id)arg1 ;
+(BOOL)deviceIsiPod;
+(id)currentDevice;
+(void)setPromptWithIdentifier:(id)arg1 needsDisplay:(BOOL)arg2 ;
+(BOOL)promptNeedsDisplay:(id)arg1 ;
+(BOOL)deviceIsAppleTV;
+(BOOL)deviceIsInternalBuild;
+(id)copyCachedAvailableItemKinds;
+(BOOL)deviceIsSeedBuild;
+(BOOL)deviceIsAudioAccessory;
+(BOOL)deviceIsiPhone;
+(void)setLastPromptAttemptDate:(id)arg1 forPromptWithIdentifier:(id)arg2 ;
+(BOOL)deviceIsiPad;
+(BOOL)deviceIsAppleWatch;
-(BOOL)_is720pCapable;
-(NSSet *)automaticDownloadKinds;
-(long long)_deviceTypeForProductType:(id)arg1 ;
-(long long)deviceType;
-(NSString *)storeFrontIdentifier;
-(id)_userAgentClientNameForInfoPlist:(id)arg1 ;
-(NSString *)serialNumber;
-(BOOL)_is1080pCapable;
-(void)sdk_loadStoreFrontIdentifier:(/*^block*/id)arg1 ;
-(void)synchronizeAutomaticDownloadKinds;
-(void)getCellularNetworkingAllowedWithBlock:(/*^block*/id)arg1 ;
-(id)copyStoreFrontRequestHeaders;
-(id)init;
-(NSString *)clientName;
-(void)_cacheKeyValueStoreValues;
-(NSString *)productVersion;
-(NSString *)uniqueDeviceIdentifier;
-(id)carrierBundleStatusForService:(long long)arg1 ;
-(void)minusAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setCloudMediaLibraryIdentifier:(NSString *)arg1 ;
-(void)setStoreFrontWithResponseHeaders:(id)arg1 ;
-(void)loadStoreFrontWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startPowerMonitoring;
-(NSString *)clientVersion;
-(NSString *)productType;
-(double)batteryLevel;
-(NSString *)phoneNumber;
-(void)unionAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)_userAgentClientNameForBundleID:(id)arg1 ;
-(id)userAgentWithClientName:(id)arg1 version:(id)arg2 ;
-(id)_diskCapacityString;
-(long long)_deviceType;
-(void)_invalidatePhoneNumber;
-(void)showPromptWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setStoreFrontIdentifier:(id)arg1 forRequest:(id)arg2 response:(id)arg3 account:(id)arg4 ;
-(void)getCarrierBundleStatusForService:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_invalidateAutomaticDownloadKinds;
-(void)setStoreFrontIdentifier:(id)arg1 account:(id)arg2 ;
-(void)setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2 ;
-(id)synchedStoreFrontIdentifier;
-(id)userAgentWithBundleIdentifier:(id)arg1 version:(id)arg2 ;
-(void)setCellularNetworkingAllowed:(BOOL)arg1 ;
-(NSString *)mediaLibraryIdentifier;
-(BOOL)supportsDeviceCapability:(long long)arg1 ;
-(id)_fairPlayDeviceTypeString;
-(id)_newLegacyUserAgent:(BOOL*)arg1 ;
-(SSPromise *)storeFrontIdentifierPromise;
-(long long)_deviceTypeForUnknownIPhone:(id)arg1 ;
-(int)_deviceClass;
-(unsigned)deviceTypeIdentifier;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(void)setAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setSoftwareLibraryIdentifier:(NSString *)arg1 ;
-(void)_updateAutomaticDownloadKinds:(id)arg1 withValue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSString *)thinnedApplicationVariantIdentifier;
-(void)reloadStoreFrontIdentifier;
-(BOOL)isStoreFrontIdentifierTransient;
-(BOOL)isPluggedIn;
-(void)setStoreFrontIdentifier:(id)arg1 accountIdentifier:(id)arg2 isTransient:(BOOL)arg3 ;
-(long long)_deviceTypeForUnknownIPod:(id)arg1 ;
-(NSString *)compatibleProductType;
-(void)_postStoreFrontDidChangeNotification;
-(long long)_deviceTypeForUnknownIPad:(id)arg1 ;
-(id)_newModernUserAgentWithClientName:(id)arg1 version:(id)arg2 isCachable:(BOOL*)arg3 ;
-(void)setStoreFrontIdentifier:(id)arg1 account:(id)arg2 isTransient:(BOOL)arg3 ;
-(id)_copyProductType;
-(int)_screenClass;
-(id)_productVersion;
-(id)userAgentWithBundleRef:(CFBundleRef)arg1 isCachable:(BOOL*)arg2 ;
-(NSString *)userAgent;
-(void)sdk_loadStorefrontCountryCode:(/*^block*/id)arg1 ;
-(void)_invalidateSoftwareCUID;
-(void)stopPowerMonitoring;
-(void)_reloadPluggedInState;
-(id)_copyCarrierBundleEligibilityWithStatus:(id)arg1 ;
-(BOOL)getMachineIdentifier:(id*)arg1 otp:(id*)arg2 forAccountIdentifier:(id)arg3 ;
-(void)_updateBatteryLevelFromService:(unsigned)arg1 ;
-(id)_userAgentClientNameForAppleTVBundleID:(id)arg1 ;
-(id)_appleTVProductVersion;
-(id)_copyKeyValueStoreValueForDomain:(id)arg1 key:(id)arg2 ;
-(NSString *)cloudMediaLibraryIdentifier;
-(long long)_deviceTypeForUnknownAppleTV:(id)arg1 ;
-(float)screenScale;
-(void)setMediaLibraryIdentifier:(NSString *)arg1 ;
-(NSString *)legacyUserAgent;
-(void)enableAllAutomaticDownloadKindsWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSString *)softwareLibraryIdentifier;
-(BOOL)_getDeviceType:(unsigned*)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)getAvailableItemKindsWithBlock:(/*^block*/id)arg1 ;
-(void)setStoreFrontIdentifier:(id)arg1 accountIdentifier:(id)arg2 ;
-(id)_userAgentClientVersionForInfoPlist:(id)arg1 clientName:(id)arg2 ;
@end

