/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)config;
-(id)initWithConfiguration:(id)arg1 ;
-(unsigned)hostHash;
-(BOOL)shouldRunWithSamplingRate:(id)arg1 ;
-(BOOL)isSampled;
-(unsigned)fleetSampleRate;
-(void)setFleetSampleRate:(unsigned)arg1 ;
-(unsigned)deviceSampleRate;
-(void)setDeviceSampleRate:(unsigned)arg1 ;
-(NSDictionary *)configurationData;
-(void)setConfigurationData:(NSDictionary *)arg1 ;
-(void)setConfig:(NSDictionary *)arg1 ;
@end

