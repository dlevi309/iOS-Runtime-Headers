/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@class NSURL, NSDictionary;

@interface SSRVoiceProfileModelContext : NSObject {

	NSURL* _configFilePath;
	NSURL* _voiceProfileModelFilePath;
	NSDictionary* _compareModelFilePaths;

}

@property (nonatomic,readonly) NSURL * configFilePath;                            //@synthesize configFilePath=_configFilePath - In the implementation block
@property (nonatomic,readonly) NSURL * voiceProfileModelFilePath;                 //@synthesize voiceProfileModelFilePath=_voiceProfileModelFilePath - In the implementation block
@property (nonatomic,readonly) NSDictionary * compareModelFilePaths;              //@synthesize compareModelFilePaths=_compareModelFilePaths - In the implementation block
-(NSURL *)configFilePath;
-(NSURL *)voiceProfileModelFilePath;
-(NSDictionary *)compareModelFilePaths;
-(id)initWithConfigFilePath:(id)arg1 withModelPath:(id)arg2 withCompareModelFilePaths:(id)arg3 ;
@end

