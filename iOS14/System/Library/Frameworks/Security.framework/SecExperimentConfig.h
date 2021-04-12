/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@class NSString, NSDictionary;

@interface SecExperimentConfig : NSObject {

	unsigned _fleetSampleRate;
	unsigned _deviceSampleRate;
	NSString* _identifier;
	NSDictionary* _configurationData;
	NSDictionary* _config;

}

@property (retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSDictionary * config;                         //@synthesize config=_config - In the implementation block
@property (assign) unsigned fleetSampleRate;                      //@synthesize fleetSampleRate=_fleetSampleRate - In the implementation block
@property (assign) unsigned deviceSampleRate;                     //@synthesize deviceSampleRate=_deviceSampleRate - In the implementation block
@property (retain) NSDictionary * configurationData;              //@synthesize configurationData=_configurationData - In the implementation block
@property (readonly) BOOL isSampled; 
-(NSDictionary *)config;
-(void)setConfigurationData:(NSDictionary *)arg1 ;
-(unsigned)fleetSampleRate;
-(BOOL)shouldRunWithSamplingRate:(id)arg1 ;
-(void)setFleetSampleRate:(unsigned)arg1 ;
-(unsigned)deviceSampleRate;
-(void)setDeviceSampleRate:(unsigned)arg1 ;
-(NSDictionary *)configurationData;
-(id)initWithConfiguration:(id)arg1 ;
-(unsigned)hostHash;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setConfig:(NSDictionary *)arg1 ;
-(NSString *)identifier;
-(BOOL)isSampled;
@end

