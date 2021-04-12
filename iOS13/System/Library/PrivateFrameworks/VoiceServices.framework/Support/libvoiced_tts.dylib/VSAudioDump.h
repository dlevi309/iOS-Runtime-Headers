/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@class NSString;

@interface VSAudioDump : NSObject {

	NSString* _audioDumpPath;

}

@property (nonatomic,retain) NSString * audioDumpPath;              //@synthesize audioDumpPath=_audioDumpPath - In the implementation block
+(id)defaultAudioDumpStore;
-(id)initWithStorePath:(id)arg1 ;
-(void)dumpAudio:(id)arg1 ;
-(unsigned long long)totalAudioDumpSize;
-(void)deleteAudioDump;
-(NSString *)audioDumpPath;
-(void)createDirectoryIfNeeded;
-(void)cleanAudioDump;
-(void)setAudioDumpPath:(NSString *)arg1 ;
@end

