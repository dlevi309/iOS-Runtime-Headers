/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


#import <VoiceTrigger/VoiceTrigger-Structs.h>
@interface VTAudioFileReader : NSObject {

	OpaqueExtAudioFileRef _fFile;

}
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(id)readSamples:(unsigned long long)arg1 ;
@end

