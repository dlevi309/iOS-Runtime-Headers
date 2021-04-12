/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


#import <VoiceTrigger/VoiceTrigger-Structs.h>
@interface AudioFileWriter : NSObject {

	BOOL isWriting;
	OpaqueExtAudioFileRef fFile;

}
-(void)close;
-(void)dealloc;
-(id)initWithURL:(id)arg1 inputFormat:(AudioStreamBasicDescription)arg2 outputFormat:(AudioStreamBasicDescription)arg3 ;
-(short)addSamples:(void*)arg1 len:(long long)arg2 ;
@end

