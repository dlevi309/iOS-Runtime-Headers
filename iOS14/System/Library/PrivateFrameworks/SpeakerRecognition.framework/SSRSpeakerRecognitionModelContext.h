/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@class NSURL, NSDictionary;

@interface SSRSpeakerRecognitionModelContext : NSObject {

	NSURL* _configFilePath;
	NSDictionary* _voiceProfilesModelFilePaths;

}

@property (nonatomic,readonly) NSURL * configFilePath;                                  //@synthesize configFilePath=_configFilePath - In the implementation block
@property (nonatomic,readonly) NSDictionary * voiceProfilesModelFilePaths;              //@synthesize voiceProfilesModelFilePaths=_voiceProfilesModelFilePaths - In the implementation block
-(NSURL *)configFilePath;
-(NSDictionary *)voiceProfilesModelFilePaths;
-(id)initWithConfigFilePath:(id)arg1 withModelFilePaths:(id)arg2 ;
@end

