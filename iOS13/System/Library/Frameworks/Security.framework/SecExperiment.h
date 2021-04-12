/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(const char*)arg1 ;
-(NSString *)identifier;
-(BOOL)experimentIsAllowedForProcess;
-(BOOL)isSamplingDisabledWithDefault:(BOOL)arg1 ;
-(BOOL)isSamplingDisabled;
-(id)copyExperimentConfiguration;
-(id)copyExperimentConfigurationFromUserDefaults;
-(id)copyRemoteExperimentAsset;
-(id)copyRandomExperimentConfigurationFromAsset:(id)arg1 ;
-(BOOL)samplingDisabled;
-(void)setSamplingDisabled:(BOOL)arg1 ;
-(SecExperimentConfig *)cachedConfig;
-(void)setCachedConfig:(SecExperimentConfig *)arg1 ;
@end

