/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@class NSUserDefaults;

@interface SNUserDefaults : NSObject {

	NSUserDefaults* _userDefaults;

}

@property (nonatomic,retain) NSUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
+(id)instance;
+(id)userDefaults;
+(unsigned)builtInMicrophoneAnalysisChannelNumberOrDefault:(unsigned)arg1 ;
+(id)builtInMicrophoneAnalysisChannelNumber;
+(BOOL)enableSecondPassRecordingInDaemon;
+(id)daemonRecordingPath;
+(long long)recordingDirectoryMaximumSizeBytes;
+(double)recordingTimeToLiveSeconds;
+(BOOL)deleteRecordingsWithoutDetection;
+(BOOL)enableFileServer;
+(id)fileServerRootDirectory;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(id)init;
-(NSUserDefaults *)userDefaults;
@end

