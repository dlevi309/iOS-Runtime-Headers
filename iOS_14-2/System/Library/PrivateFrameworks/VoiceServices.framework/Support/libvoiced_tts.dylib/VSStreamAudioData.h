/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
@class VSMappedData, NSMutableArray;

@interface VSStreamAudioData : NSObject {

	VSMappedData* _mappedData;
	NSMutableArray* _mappedAudioInfo;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,retain) VSMappedData * mappedData;                       //@synthesize mappedData=_mappedData - In the implementation block
@property (nonatomic,retain) NSMutableArray * mappedAudioInfo;                //@synthesize mappedAudioInfo=_mappedAudioInfo - In the implementation block
@property (nonatomic,readonly) AudioStreamBasicDescription asbd;              //@synthesize asbd=_asbd - In the implementation block
-(AudioStreamBasicDescription)asbd;
-(double)duration;
-(VSMappedData *)mappedData;
-(BOOL)writeWaveToFilePath:(id)arg1 ;
-(void)appendAudioData:(id)arg1 packetCount:(unsigned long long)arg2 packetDescriptions:(id)arg3 ;
-(void)enumerateAudioWithBlock:(/*^block*/id)arg1 ;
-(void)setMappedData:(VSMappedData *)arg1 ;
-(id)initWithASBD:(AudioStreamBasicDescription)arg1 ;
-(NSMutableArray *)mappedAudioInfo;
-(void)setMappedAudioInfo:(NSMutableArray *)arg1 ;
@end

