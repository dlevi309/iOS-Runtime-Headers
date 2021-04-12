/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSAudioFileManager : NSObject
+(id)_sharedAudioLoggingQueue;
+(void)_readDataFromFileHandle:(id)arg1 toFileHandle:(id)arg2 ;
+(id)_createAudioFileWriterForOpportuneSpeakListenerWithLoggingDir:(id)arg1 inputFormat:(AudioStreamBasicDescription)arg2 outputFormat:(AudioStreamBasicDescription)arg3 ;
+(id)_createAudioFileWriterWithLoggingDir:(id)arg1 inputFormat:(AudioStreamBasicDescription)arg2 outputFormat:(AudioStreamBasicDescription)arg3 ;
+(id)_getDateLabel;
+(void)pruneNumberOfLogFilesTo:(unsigned long long)arg1 ;
+(void)generateDeviceAudioLogging:(id)arg1 speechId:(id)arg2 ;
+(id)createAudioFileWriterForOpportuneSpeakListenerWithInputFormat:(AudioStreamBasicDescription)arg1 outputFormat:(AudioStreamBasicDescription)arg2 ;
+(id)createAudioFileWriterForRemoteVADWithInputFormat:(AudioStreamBasicDescription)arg1 outputFormat:(AudioStreamBasicDescription)arg2 ;
+(id)createAudioFileWriterFromWithInputFormat:(AudioStreamBasicDescription)arg1 outputFormat:(AudioStreamBasicDescription)arg2 ;
+(id)createSelectiveChannelAudioFileWriterWithChannelBitset:(unsigned long long)arg1 ;
+(void)removeLogFilesOlderThanNDays:(float)arg1 ;
+(id)audioFileWriterForAttentiveSiri;
@end

