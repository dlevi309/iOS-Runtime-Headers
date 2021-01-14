/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/


#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
@class NSString, NSNumber;

@interface SystemProperties : NSObject {

	BOOL _internalBuild;
	BOOL _seedBuild;
	BOOL _carrierBuild;
	BOOL _vendorBuild;
	BOOL _npiDevice;
	BOOL _isSymptomsdHelper;
	BOOL _largeBasebandLogs;
	BOOL _basebandCapability;
	BOOL _internalBuildDisabledByOverride;
	int _dualSIMCapability;
	int _deviceClass;
	NSString* _buildVariant;
	NSString* _serialNumber;
	NSString* _productType;
	NSString* _productName;
	NSString* _productVersion;
	NSString* _buildVersion;
	NSString* _buildVersionPrefix;
	NSString* _buildPlatform;
	NSString* _basebandChipset;
	NSNumber* _carrierSeedBuildOverride;
	NSNumber* _seedBuildOverride;
	NSNumber* _vendorBuildOverride;

}

@property (nonatomic,readonly) NSString * productType;                          //@synthesize productType=_productType - In the implementation block
@property (nonatomic,readonly) int deviceClass;                                 //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) NSString * deviceClassString; 
@property (nonatomic,readonly) BOOL basebandCapability;                         //@synthesize basebandCapability=_basebandCapability - In the implementation block
@property (nonatomic,readonly) int dualSIMCapability;                           //@synthesize dualSIMCapability=_dualSIMCapability - In the implementation block
@property (nonatomic,readonly) BOOL internalBuild;                              //@synthesize internalBuild=_internalBuild - In the implementation block
@property (nonatomic,readonly) BOOL vendorBuild;                                //@synthesize vendorBuild=_vendorBuild - In the implementation block
@property (nonatomic,readonly) BOOL seedBuild;                                  //@synthesize seedBuild=_seedBuild - In the implementation block
@property (nonatomic,readonly) BOOL carrierBuild;                               //@synthesize carrierBuild=_carrierBuild - In the implementation block
@property (nonatomic,readonly) BOOL customerSeedBuild; 
@property (nonatomic,readonly) BOOL carrierSeedBuild; 
@property (nonatomic,readonly) BOOL npiDevice;                                  //@synthesize npiDevice=_npiDevice - In the implementation block
@property (nonatomic,readonly) BOOL isSymptomsdHelper;                          //@synthesize isSymptomsdHelper=_isSymptomsdHelper - In the implementation block
@property (nonatomic,readonly) BOOL largeBasebandLogs;                          //@synthesize largeBasebandLogs=_largeBasebandLogs - In the implementation block
@property (nonatomic,readonly) NSString * productName;                          //@synthesize productName=_productName - In the implementation block
@property (nonatomic,readonly) NSString * productVersion;                       //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,readonly) NSString * buildVersion;                         //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,readonly) NSString * buildVersionPrefix;                   //@synthesize buildVersionPrefix=_buildVersionPrefix - In the implementation block
@property (nonatomic,readonly) NSString * buildPlatform;                        //@synthesize buildPlatform=_buildPlatform - In the implementation block
@property (nonatomic,readonly) NSString * buildVariant;                         //@synthesize buildVariant=_buildVariant - In the implementation block
@property (nonatomic,readonly) NSString * basebandChipset;                      //@synthesize basebandChipset=_basebandChipset - In the implementation block
@property (nonatomic,readonly) NSString * serialNumber;                         //@synthesize serialNumber=_serialNumber - In the implementation block
@property (assign,nonatomic) BOOL internalBuildDisabledByOverride;              //@synthesize internalBuildDisabledByOverride=_internalBuildDisabledByOverride - In the implementation block
@property (nonatomic,copy) NSNumber * carrierSeedBuildOverride;                 //@synthesize carrierSeedBuildOverride=_carrierSeedBuildOverride - In the implementation block
@property (nonatomic,copy) NSNumber * seedBuildOverride;                        //@synthesize seedBuildOverride=_seedBuildOverride - In the implementation block
@property (nonatomic,copy) NSNumber * vendorBuildOverride;                      //@synthesize vendorBuildOverride=_vendorBuildOverride - In the implementation block
+(id)sharedInstance;
+(unsigned long long)retrieveDeviceConfigTypePreferenceForKey:(CFStringRef)arg1 ;
+(void)deleteDeviceConfigTypePreferenceForKey:(CFStringRef)arg1 ;
+(int)systemPropertiesDeviceClassFromMGQDeviceClass:(int)arg1 ;
+(void)setDeviceConfigTypeForSerialNumber:(id)arg1 ;
+(void)saveDeviceConfigType:(unsigned long long)arg1 forKey:(CFStringRef)arg2 ;
+(unsigned long long)retrieveDeviceConfigTypeForKey:(CFStringRef)arg1 ;
+(unsigned long long)retrieveDeviceConfigTypePreference;
+(void)deleteDeviceConfigTypePreference;
-(BOOL)internalBuild;
-(NSString *)productName;
-(NSString *)serialNumber;
-(BOOL)carrierBuild;
-(id)init;
-(NSString *)productVersion;
-(NSString *)productType;
-(int)deviceClass;
-(BOOL)customerSeedBuild;
-(BOOL)seedBuild;
-(id)description;
-(BOOL)carrierSeedBuild;
-(int)dualSIMCapability;
-(NSString *)buildVersion;
-(BOOL)vendorBuild;
-(NSNumber *)carrierSeedBuildOverride;
-(void)setCarrierSeedBuildOverride:(NSNumber *)arg1 ;
-(void)setInternalBuildDisabledByOverride:(BOOL)arg1 ;
-(NSNumber *)seedBuildOverride;
-(void)setSeedBuildOverride:(NSNumber *)arg1 ;
-(NSNumber *)vendorBuildOverride;
-(void)setVendorBuildOverride:(NSNumber *)arg1 ;
-(BOOL)isSymptomsdHelper;
-(NSString *)deviceClassString;
-(NSString *)buildVariant;
-(const char*)dualSIMCapabilityString;
-(void)refreshDualSIMCapability;
-(BOOL)basebandCapability;
-(int)getDualSIMCapabilityFromCoreTelephony;
-(BOOL)npiDevice;
-(BOOL)largeBasebandLogs;
-(NSString *)buildVersionPrefix;
-(NSString *)buildPlatform;
-(NSString *)basebandChipset;
-(BOOL)internalBuildDisabledByOverride;
@end

