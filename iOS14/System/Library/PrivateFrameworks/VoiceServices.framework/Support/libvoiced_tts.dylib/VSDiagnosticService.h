/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@class NSString, NSDictionary;

@interface VSDiagnosticService : NSObject {

	NSString* _audioDumpPath;
	NSDictionary* _audioDumpFileAttributes;

}

@property (nonatomic,retain) NSString * audioDumpPath;                            //@synthesize audioDumpPath=_audioDumpPath - In the implementation block
@property (nonatomic,retain) NSDictionary * audioDumpFileAttributes;              //@synthesize audioDumpFileAttributes=_audioDumpFileAttributes - In the implementation block
+(id)defaultService;
-(id)initWithDirectory:(id)arg1 ;
-(void)dumpStreamAudio:(id)arg1 ;
-(void)collectTailspin:(/*^block*/id)arg1 ;
-(void)dumpCompressedAudio:(id)arg1 ;
-(unsigned long long)totalDiagnosticFileSize;
-(void)removeDirectory;
-(NSString *)audioDumpPath;
-(void)createDirectoryIfNeeded;
-(NSDictionary *)audioDumpFileAttributes;
-(void)removeOldFiles;
-(void)setAudioDumpPath:(NSString *)arg1 ;
-(void)setAudioDumpFileAttributes:(NSDictionary *)arg1 ;
@end

