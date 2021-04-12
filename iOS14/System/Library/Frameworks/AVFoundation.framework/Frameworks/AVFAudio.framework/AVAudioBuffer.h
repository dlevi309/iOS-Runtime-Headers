/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVAudioFormat;

@interface AVAudioBuffer : NSObject <NSCopying, NSMutableCopying> {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioFormat * format; 
@property (nonatomic,readonly) const AudioBufferList* audioBufferList; 
@property (nonatomic,readonly) AudioBufferList* mutableAudioBufferList; 
-(AVAudioFormat *)format;
-(void)setByteLength:(unsigned)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)byteLength;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned)byteCapacity;
-(id)initWithFormat:(id)arg1 byteCapacity:(unsigned)arg2 ;
-(const AudioBufferList*)audioBufferList;
-(AudioBufferList*)mutableAudioBufferList;
@end

