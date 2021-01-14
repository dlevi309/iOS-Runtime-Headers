/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@class NSNumber, NSString, NSDictionary, NSValue;

@interface AXMDeviceInfo : NSObject {

	BOOL _isInternalInstall;
	NSNumber* _supportsARM64;
	NSNumber* _supportsARMv6;
	NSNumber* _supportsARMv7;
	NSNumber* _supportsARMv7s;
	NSNumber* _supports720pPlayback;
	NSNumber* _supports1080pPlayback;
	NSString* _cpuArchitecture;
	NSNumber* _processorCount;
	NSNumber* _physicalMemory;
	NSNumber* _hasAmbientLightSensor;
	NSNumber* _hasDualLensCamera;
	NSDictionary* _displayZoomSizes;
	NSString* _buildVersion;
	NSString* _computerName;
	NSString* _deviceName;
	NSString* _deviceNameClassic;
	NSString* _deviceNameGS;
	NSString* _deviceNameLocalized;
	NSString* _deviceClass;
	NSString* _deviceVariant;
	NSString* _hardwareModel;
	NSString* _deviceModelNumber;
	NSString* _marketingName;
	NSString* _marketingProductName;
	NSString* _marketingVersion;
	NSString* _productName;
	NSString* _productType;
	NSString* _productVersion;
	NSValue* _mainScreenSizeWidth;
	NSValue* _mainScreenSizeHeight;
	NSNumber* _mainScreenOrientation;
	NSNumber* _mainScreenScale;

}

@property (nonatomic,retain) NSNumber * supportsARM64;                      //@synthesize supportsARM64=_supportsARM64 - In the implementation block
@property (nonatomic,retain) NSNumber * supportsARMv6;                      //@synthesize supportsARMv6=_supportsARMv6 - In the implementation block
@property (nonatomic,retain) NSNumber * supportsARMv7;                      //@synthesize supportsARMv7=_supportsARMv7 - In the implementation block
@property (nonatomic,retain) NSNumber * supportsARMv7s;                     //@synthesize supportsARMv7s=_supportsARMv7s - In the implementation block
@property (nonatomic,retain) NSNumber * supports720pPlayback;               //@synthesize supports720pPlayback=_supports720pPlayback - In the implementation block
@property (nonatomic,retain) NSNumber * supports1080pPlayback;              //@synthesize supports1080pPlayback=_supports1080pPlayback - In the implementation block
@property (nonatomic,retain) NSString * cpuArchitecture;                    //@synthesize cpuArchitecture=_cpuArchitecture - In the implementation block
@property (nonatomic,retain) NSNumber * processorCount;                     //@synthesize processorCount=_processorCount - In the implementation block
@property (nonatomic,retain) NSNumber * physicalMemory;                     //@synthesize physicalMemory=_physicalMemory - In the implementation block
@property (nonatomic,retain) NSNumber * hasAmbientLightSensor;              //@synthesize hasAmbientLightSensor=_hasAmbientLightSensor - In the implementation block
@property (nonatomic,retain) NSNumber * hasDualLensCamera;                  //@synthesize hasDualLensCamera=_hasDualLensCamera - In the implementation block
@property (nonatomic,retain) NSDictionary * displayZoomSizes;               //@synthesize displayZoomSizes=_displayZoomSizes - In the implementation block
@property (nonatomic,retain) NSString * buildVersion;                       //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,retain) NSString * computerName;                       //@synthesize computerName=_computerName - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                         //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * deviceNameClassic;                  //@synthesize deviceNameClassic=_deviceNameClassic - In the implementation block
@property (nonatomic,retain) NSString * deviceNameGS;                       //@synthesize deviceNameGS=_deviceNameGS - In the implementation block
@property (nonatomic,retain) NSString * deviceNameLocalized;                //@synthesize deviceNameLocalized=_deviceNameLocalized - In the implementation block
@property (nonatomic,retain) NSString * deviceClass;                        //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,retain) NSString * deviceVariant;                      //@synthesize deviceVariant=_deviceVariant - In the implementation block
@property (nonatomic,retain) NSString * hardwareModel;                      //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (nonatomic,retain) NSString * deviceModelNumber;                  //@synthesize deviceModelNumber=_deviceModelNumber - In the implementation block
@property (nonatomic,retain) NSString * marketingName;                      //@synthesize marketingName=_marketingName - In the implementation block
@property (nonatomic,retain) NSString * marketingProductName;               //@synthesize marketingProductName=_marketingProductName - In the implementation block
@property (nonatomic,retain) NSString * marketingVersion;                   //@synthesize marketingVersion=_marketingVersion - In the implementation block
@property (nonatomic,retain) NSString * productName;                        //@synthesize productName=_productName - In the implementation block
@property (nonatomic,retain) NSString * productType;                        //@synthesize productType=_productType - In the implementation block
@property (nonatomic,retain) NSString * productVersion;                     //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,retain) NSValue * mainScreenSizeWidth;                 //@synthesize mainScreenSizeWidth=_mainScreenSizeWidth - In the implementation block
@property (nonatomic,retain) NSValue * mainScreenSizeHeight;                //@synthesize mainScreenSizeHeight=_mainScreenSizeHeight - In the implementation block
@property (nonatomic,retain) NSNumber * mainScreenOrientation;              //@synthesize mainScreenOrientation=_mainScreenOrientation - In the implementation block
@property (nonatomic,retain) NSNumber * mainScreenScale;                    //@synthesize mainScreenScale=_mainScreenScale - In the implementation block
+(id)sharedInstance;
-(NSString *)deviceName;
-(NSString *)productName;
-(void)setProductName:(NSString *)arg1 ;
-(NSString *)productVersion;
-(NSString *)marketingName;
-(NSString *)productType;
-(NSString *)deviceClass;
-(void)setProductType:(NSString *)arg1 ;
-(void)setProductVersion:(NSString *)arg1 ;
-(void)setBuildVersion:(NSString *)arg1 ;
-(NSNumber *)processorCount;
-(NSNumber *)physicalMemory;
-(void)setDeviceClass:(NSString *)arg1 ;
-(NSString *)hardwareModel;
-(NSString *)buildVersion;
-(NSNumber *)mainScreenScale;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)_init;
-(NSString *)deviceModelNumber;
-(void)setHardwareModel:(NSString *)arg1 ;
-(void)setMarketingName:(NSString *)arg1 ;
-(NSString *)deviceNameClassic;
-(NSString *)deviceNameGS;
-(NSString *)deviceNameLocalized;
-(NSString *)computerName;
-(NSString *)deviceVariant;
-(NSString *)cpuArchitecture;
-(NSValue *)mainScreenSizeWidth;
-(NSValue *)mainScreenSizeHeight;
-(NSNumber *)hasDualLensCamera;
-(NSNumber *)mainScreenOrientation;
-(NSNumber *)hasAmbientLightSensor;
-(NSString *)marketingProductName;
-(NSString *)marketingVersion;
-(id)systemReport;
-(id)_jetsamInfo;
-(NSNumber *)supportsARM64;
-(NSNumber *)supportsARMv6;
-(NSNumber *)supportsARMv7;
-(NSNumber *)supportsARMv7s;
-(NSNumber *)supports720pPlayback;
-(NSNumber *)supports1080pPlayback;
-(NSDictionary *)displayZoomSizes;
-(id)privilegedSystemReport;
-(void)setSupportsARM64:(NSNumber *)arg1 ;
-(void)setSupportsARMv6:(NSNumber *)arg1 ;
-(void)setSupportsARMv7:(NSNumber *)arg1 ;
-(void)setSupportsARMv7s:(NSNumber *)arg1 ;
-(void)setSupports720pPlayback:(NSNumber *)arg1 ;
-(void)setSupports1080pPlayback:(NSNumber *)arg1 ;
-(void)setCpuArchitecture:(NSString *)arg1 ;
-(void)setProcessorCount:(NSNumber *)arg1 ;
-(void)setPhysicalMemory:(NSNumber *)arg1 ;
-(void)setHasAmbientLightSensor:(NSNumber *)arg1 ;
-(void)setHasDualLensCamera:(NSNumber *)arg1 ;
-(void)setDisplayZoomSizes:(NSDictionary *)arg1 ;
-(void)setComputerName:(NSString *)arg1 ;
-(void)setDeviceNameClassic:(NSString *)arg1 ;
-(void)setDeviceNameGS:(NSString *)arg1 ;
-(void)setDeviceNameLocalized:(NSString *)arg1 ;
-(void)setDeviceVariant:(NSString *)arg1 ;
-(void)setDeviceModelNumber:(NSString *)arg1 ;
-(void)setMarketingProductName:(NSString *)arg1 ;
-(void)setMarketingVersion:(NSString *)arg1 ;
-(void)setMainScreenSizeWidth:(NSValue *)arg1 ;
-(void)setMainScreenSizeHeight:(NSValue *)arg1 ;
-(void)setMainScreenOrientation:(NSNumber *)arg1 ;
-(void)setMainScreenScale:(NSNumber *)arg1 ;
@end

