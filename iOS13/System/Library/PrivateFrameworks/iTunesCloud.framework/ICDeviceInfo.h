/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSString, NSData, NSNumber;

@interface ICDeviceInfo : NSObject {

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
	NSString* _pairedDeviceGUID;
	NSString* _pairedDeviceMediaGUID;
	NSString* _serialNumber;
	CGSize _mainScreenSize;
	NSNumber* _hasCellularDataCapabilityNumber;
	NSNumber* _hasTelephonyCapabilityNumber;
	NSNumber* _hasWiFiCapabilityValue;
	NSNumber* _hasWAPICapabilityValue;
	NSNumber* _has720pCapabilityValue;
	NSNumber* _has1080pCapabilityValue;
	NSNumber* _screenClassValue;
	NSNumber* _isInternalBuildNumber;
	NSString* _systemReleaseType;
	os_unfair_lock_s _lock;

}

@property (getter=isMultiUserDevice,nonatomic,readonly) BOOL multiUserDevice; 
@property (nonatomic,copy,readonly) NSString * deviceModel; 
@property (nonatomic,copy,readonly) NSString * rawDeviceModel; 
@property (nonatomic,copy,readonly) NSString * hardwarePlatform; 
@property (nonatomic,copy,readonly) NSString * deviceGUID; 
@property (nonatomic,copy,readonly) NSData * deviceFairPlayGUIDData; 
@property (nonatomic,copy,readonly) NSString * pairedDeviceGUID; 
@property (nonatomic,copy,readonly) NSString * pairedDeviceMediaGUID; 
@property (nonatomic,copy,readonly) NSString * serialNumber; 
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
@property (nonatomic,copy,readonly) NSString * productVersion; 
@property (nonatomic,copy,readonly) NSString * productPlatform; 
@property (nonatomic,copy,readonly) NSString * buildVersion; 
@property (getter=isInternalBuild,nonatomic,readonly) BOOL internalBuild; 
@property (nonatomic,copy,readonly) NSString * systemReleaseType; 
@property (nonatomic,readonly) unsigned fairPlayDeviceType; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * currentLocale; 
+(id)defaultInfo;
+(id)currentDeviceInfo;
-(BOOL)isMultiUserDevice;
-(void)dealloc;
-(NSString *)name;
-(id)_init;
-(NSString *)currentLocale;
-(NSString *)productVersion;
-(NSString *)serialNumber;
-(int)deviceClass;
-(NSString *)buildVersion;
-(NSString *)deviceModel;
-(BOOL)isInternalBuild;
-(NSString *)productPlatform;
-(BOOL)isWatch;
-(BOOL)hasTelephonyCapability;
-(BOOL)hasCellularDataCapability;
-(BOOL)isAppleTV;
-(BOOL)isAudioAccessory;
-(BOOL)hasWAPICapability;
-(BOOL)hasWiFiCapability;
-(NSString *)deviceGUID;
-(BOOL)has720pCapability;
-(BOOL)has1080pCapability;
-(NSString *)hardwarePlatform;
-(NSString *)systemReleaseType;
-(int)screenClass;
-(NSString *)pairedDeviceMediaGUID;
-(NSData *)deviceFairPlayGUIDData;
-(id)_activePairedDevice;
-(BOOL)isIPhone;
-(BOOL)isIPad;
-(BOOL)isIPod;
-(int)_gestaltDeviceClass;
-(NSString *)rawDeviceModel;
-(NSString *)pairedDeviceGUID;
-(CGSize)mainScreenSize;
-(unsigned)fairPlayDeviceType;
@end

