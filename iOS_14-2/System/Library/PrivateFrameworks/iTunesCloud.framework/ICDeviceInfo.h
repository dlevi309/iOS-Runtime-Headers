/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICNanoPairedDeviceStatusObserver.h>

@class NSString, NSData, NSNumber;

@interface ICDeviceInfo : NSObject <ICNanoPairedDeviceStatusObserver> {

	atomic_flag _hasRegisteredForNameNotifications;
	MGNotificationTokenStructRef _nameNotificationToken;
	NSString* _productVersion;
	NSString* _deviceModel;
	NSString* _rawDeviceModel;
	NSString* _hardwarePlatform;
	NSString* _buildVersion;
	int _deviceClass;
	unsigned _fairPlayDeviceType;
	NSString* _currentLocale;
	NSData* _deviceGUIDData;
	NSString* _deviceGUID;
	NSString* _name;
	NSString* _serialNumber;
	NSData* _macAddressData;
	CGSize _mainScreenSize;
	NSNumber* _hasCellularDataCapabilityNumber;
	NSNumber* _hasTelephonyCapabilityNumber;
	NSNumber* _hasWiFiCapabilityValue;
	NSNumber* _hasWAPICapabilityValue;
	NSNumber* _has720pCapabilityValue;
	NSNumber* _has1080pCapabilityValue;
	NSNumber* _screenClassValue;
	NSNumber* _isInternalBuildNumber;
	NSNumber* _supportsMusicStreamingValue;
	NSString* _systemReleaseType;
	os_unfair_lock_s _lock;

}

@property (getter=isMultiUserDevice,nonatomic,readonly) BOOL multiUserDevice; 
@property (nonatomic,copy,readonly) NSString * deviceModel; 
@property (nonatomic,copy,readonly) NSString * rawDeviceModel; 
@property (nonatomic,copy,readonly) NSString * hardwarePlatform; 
@property (nonatomic,copy,readonly) NSString * deviceGUID; 
@property (nonatomic,copy,readonly) NSData * deviceFairPlayGUIDData; 
@property (nonatomic,copy,readonly) NSString * serialNumber; 
@property (nonatomic,copy,readonly) NSString * macAddress; 
@property (nonatomic,copy,readonly) NSData * macAddressData; 
@property (nonatomic,readonly) CGSize mainScreenSize; 
@property (nonatomic,readonly) BOOL hasCellularDataCapability; 
@property (nonatomic,readonly) BOOL hasTelephonyCapability; 
@property (nonatomic,readonly) BOOL hasWiFiCapability; 
@property (nonatomic,readonly) BOOL hasWAPICapability; 
@property (nonatomic,readonly) BOOL has720pCapability; 
@property (nonatomic,readonly) BOOL has1080pCapability; 
@property (nonatomic,readonly) int screenClass; 
@property (nonatomic,readonly) int deviceClass; 
@property (nonatomic,readonly) BOOL isIPhone; 
@property (nonatomic,readonly) BOOL isAppleTV; 
@property (nonatomic,readonly) BOOL isIPad; 
@property (nonatomic,readonly) BOOL isIPod; 
@property (nonatomic,readonly) BOOL isWatch; 
@property (nonatomic,readonly) BOOL isAudioAccessory; 
@property (nonatomic,readonly) BOOL isMac; 
@property (nonatomic,copy,readonly) NSString * productVersion; 
@property (nonatomic,copy,readonly) NSString * productPlatform; 
@property (nonatomic,copy,readonly) NSString * buildVersion; 
@property (getter=isInternalBuild,nonatomic,readonly) BOOL internalBuild; 
@property (nonatomic,copy,readonly) NSString * systemReleaseType; 
@property (nonatomic,readonly) unsigned fairPlayDeviceType; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * currentLocale; 
@property (nonatomic,readonly) BOOL supportsSideLoadedMediaContent; 
@property (nonatomic,readonly) BOOL supportsMusicStreaming; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultInfo;
+(id)currentDeviceInfo;
-(BOOL)isMultiUserDevice;
-(NSString *)currentLocale;
-(BOOL)isMac;
-(NSString *)serialNumber;
-(NSString *)deviceModel;
-(BOOL)hasWAPICapability;
-(BOOL)hasCellularDataCapability;
-(NSString *)productVersion;
-(BOOL)isIPad;
-(BOOL)isIPhone;
-(BOOL)isIPod;
-(int)deviceClass;
-(NSData *)deviceFairPlayGUIDData;
-(BOOL)isAudioAccessory;
-(NSString *)name;
-(int)_gestaltDeviceClass;
-(NSString *)rawDeviceModel;
-(CGSize)mainScreenSize;
-(unsigned)fairPlayDeviceType;
-(BOOL)supportsSideLoadedMediaContent;
-(BOOL)supportsMusicStreaming;
-(NSString *)macAddress;
-(BOOL)isInternalBuild;
-(BOOL)hasTelephonyCapability;
-(NSString *)deviceGUID;
-(NSString *)buildVersion;
-(NSString *)systemReleaseType;
-(BOOL)isAppleTV;
-(BOOL)isWatch;
-(int)screenClass;
-(id)_init;
-(BOOL)hasWiFiCapability;
-(NSString *)hardwarePlatform;
-(BOOL)has720pCapability;
-(NSData *)macAddressData;
-(BOOL)has1080pCapability;
-(void)dealloc;
-(NSString *)productPlatform;
@end

