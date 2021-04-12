/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <CoreFoundation/NSData.h>

@interface RCAudioFileData : NSData {

	OpaqueAudioFileIDRef _audioFile;
	unsigned long long _audioFileSize;

}
+(id)audioFileDataWithURL:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(id)_initWithURL:(id)arg1 error:(id*)arg2 ;
@end

