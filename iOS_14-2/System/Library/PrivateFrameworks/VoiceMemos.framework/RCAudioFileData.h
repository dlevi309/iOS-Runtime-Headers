/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <CoreFoundation/NSData.h>

@interface RCAudioFileData : NSData {

	OpaqueAudioFileIDRef _audioFile;
	unsigned long long _audioFileSize;

}
+(id)audioFileDataWithURL:(id)arg1 error:(id*)arg2 ;
-(id)_initWithURL:(id)arg1 error:(id*)arg2 ;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

