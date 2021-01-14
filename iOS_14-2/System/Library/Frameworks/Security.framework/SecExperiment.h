/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@class NSString, SecExperimentConfig;

@interface SecExperiment : NSObject {

	BOOL _samplingDisabled;
	NSString* _name;
	SecExperimentConfig* _cachedConfig;

}

@property (retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL samplingDisabled;                 //@synthesize samplingDisabled=_samplingDisabled - In the implementation block
@property (retain) SecExperimentConfig * cachedConfig;              //@synthesize cachedConfig=_cachedConfig - In the implementation block
@property (readonly) NSString * identifier; 
-(BOOL)experimentIsAllowedForProcess;
-(BOOL)isSamplingDisabledWithDefault:(BOOL)arg1 ;
-(BOOL)isSamplingDisabled;
-(id)copyExperimentConfiguration;
-(id)copyExperimentConfigurationFromUserDefaults;
-(id)copyRemoteExperimentAsset;
-(SecExperimentConfig *)cachedConfig;
-(id)copyRandomExperimentConfigurationFromAsset:(id)arg1 ;
-(BOOL)samplingDisabled;
-(void)setSamplingDisabled:(BOOL)arg1 ;
-(void)setCachedConfig:(SecExperimentConfig *)arg1 ;
-(NSString *)name;
-(id)initWithName:(const char*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
@end

