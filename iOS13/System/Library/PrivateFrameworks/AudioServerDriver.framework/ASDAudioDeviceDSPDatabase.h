/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/


@class NSString, NSSet;

@interface ASDAudioDeviceDSPDatabase : NSObject {

	NSString* _deviceUID;
	NSSet* _dspConfigurations;
	NSSet* _referencedUnderlyingDeviceProperties;
	NSSet* _referencedDSPDeviceProperties;

}

@property (nonatomic,readonly) NSString * deviceUID;                                      //@synthesize deviceUID=_deviceUID - In the implementation block
@property (nonatomic,readonly) NSSet * dspConfigurations;                                 //@synthesize dspConfigurations=_dspConfigurations - In the implementation block
@property (nonatomic,readonly) NSSet * referencedUnderlyingDeviceProperties;              //@synthesize referencedUnderlyingDeviceProperties=_referencedUnderlyingDeviceProperties - In the implementation block
@property (nonatomic,readonly) NSSet * referencedDSPDeviceProperties;                     //@synthesize referencedDSPDeviceProperties=_referencedDSPDeviceProperties - In the implementation block
-(NSString *)deviceUID;
-(NSSet *)referencedUnderlyingDeviceProperties;
-(NSSet *)dspConfigurations;
-(id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 deviceUID:(id)arg3 ;
-(id)dspConfigurationForDevice:(id)arg1 ;
-(NSSet *)referencedDSPDeviceProperties;
@end

