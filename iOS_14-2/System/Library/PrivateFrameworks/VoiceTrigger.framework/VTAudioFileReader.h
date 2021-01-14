/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


#import <VoiceTrigger/VoiceTrigger-Structs.h>
@interface VTAudioFileReader : NSObject {

	OpaqueExtAudioFileRef _fFile;

}
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(void)dealloc;
-(id)readSamples:(unsigned long long)arg1 ;
@end

