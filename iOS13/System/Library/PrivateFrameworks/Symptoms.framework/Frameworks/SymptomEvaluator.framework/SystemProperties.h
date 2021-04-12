/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSString, NSNumber;

@interface SystemProperties : NSObject {

	BOOL _internalBuild;
	BOOL _seedBuild;
	BOOL _carrierBuild;
	BOOL _basebandCapability;
	BOOL _internalBuildDisabledByOverride;
	int _dualSIMCapability;
	int _deviceClass;
	NSString* _buildVariant;
	NSString* _productType;
	NSString* _productName;
	NSString* _productVersion;
	NSString* _buildVersion;
	NSString* _buildVersionPrefix;
	NSString* _buildPlatform;
	NSString* _basebandChipset;
	NSNumber* _carrierSeedBuildOverride;
	NSNumber* _seedBuildOverride;

}

@property (nonatomic,readonly) NSString * productType;                          //@synthesize productType=_productType - In the implementation block
@property (nonatomic,readonly) int deviceClass;                                 //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) NSString * deviceClassString; 
@property (nonatomic,readonly) BOOL basebandCapability;                         //@synthesize basebandCapability=_basebandCapability - In the implementation block
@property (nonatomic,readonly) int dualSIMCapability;                           //@synthesize dualSIMCapability=_dualSIMCapability - In the implementation block
@property (nonatomic,readonly) BOOL internalBuild;                              //@synthesize internalBuild=_internalBuild - In the implementation block
@property (nonatomic,readonly) BOOL seedBuild;                                  //@synthesize seedBuild=_seedBuild - In the implementation block
@property (nonatomic,readonly) BOOL carrierBuild;                               //@synthesize carrierBuild=_carrierBuild - In the implementation block
@property (nonatomic,readonly) BOOL customerSeedBuild; 
@property (nonatomic,readonly) BOOL carrierSeedBuild; 
@property (nonatomic,readonly) NSString * productName;                          //@synthesize productName=_productName - In the implementation block
@property (nonatomic,readonly) NSString * productVersion;                       //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,readonly) NSString * buildVersion;                         //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,readonly) NSString * buildVersionPrefix;                   //@synthesize buildVersionPrefix=_buildVersionPrefix - In the implementation block
@property (nonatomic,readonly) NSString * buildPlatform;                        //@synthesize buildPlatform=_buildPlatform - In the implementation block
@property (nonatomic,readonly) NSString * buildVariant;                         //@synthesize buildVariant=_buildVariant - In the implementation block
@property (nonatomic,readonly) NSString * basebandChipset;                      //@synthesize basebandChipset=_basebandChipset - In the implementation block
@property (assign,nonatomic) BOOL internalBuildDisabledByOverride;              //@synthesize internalBuildDisabledByOverride=_internalBuildDisabledByOverride - In the implementation block
@property (nonatomic,retain) NSNumber * carrierSeedBuildOverride;               //@synthesize carrierSeedBuildOverride=_carrierSeedBuildOverride - In the implementation block
@property (nonatomic,retain) NSNumber * seedBuildOverride;                      //@synthesize seedBuildOverride=_seedBuildOverride - In the implementation block
+(id)sharedInstance;
+(unsigned long long)retrieveDeviceConfigTypePreferenceForKey:(CFStringRef)arg1 ;
+(void)deleteDeviceConfigTypePreferenceForKey:(CFStringRef)arg1 ;
+(int)systemPropertiesDeviceClassFromMGQDeviceClass:(int)arg1 ;
+(void)setDeviceConfigTypeForSerialNumber:(id)arg1 ;
+(void)saveDeviceConfigType:(unsigned long long)arg1 forKey:(CFStringRef)arg2 ;
+(unsigned long long)retrieveDeviceConfigTypeForKey:(CFStringRef)arg1 ;
+(unsigned long long)retrieveDeviceConfigTypePreference;
+(void)deleteDeviceConfigTypePreference;
-(id)init;
-(id)description;
-(NSString *)productVersion;
-(NSString *)productType;
-(int)deviceClass;
-(NSString *)buildVersion;
-(NSString *)productName;
-(BOOL)internalBuild;
-(BOOL)carrierBuild;
-(int)dualSIMCapability;
-(BOOL)seedBuild;
-(NSNumber *)carrierSeedBuildOverride;
-(void)setCarrierSeedBuildOverride:(NSNumber *)arg1 ;
-(void)setInternalBuildDisabledByOverride:(BOOL)arg1 ;
-(NSNumber *)seedBuildOverride;
-(void)setSeedBuildOverride:(NSNumber *)arg1 ;
-(NSString *)deviceClassString;
-(NSString *)buildVariant;
-(const char*)dualSIMCapabilityString;
-(BOOL)carrierSeedBuild;
-(BOOL)customerSeedBuild;
-(int)refreshDualSIMCapability;
-(int)getDualSIMCapabilityFromCoreTelephony;
-(BOOL)basebandCapability;
-(NSString *)buildVersionPrefix;
-(NSString *)buildPlatform;
-(NSString *)basebandChipset;
-(BOOL)internalBuildDisabledByOverride;
@end

