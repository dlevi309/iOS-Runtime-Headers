/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(AVAudioFormat *)format;
-(unsigned)byteLength;
-(void)setByteLength:(unsigned)arg1 ;
-(id)initWithFormat:(id)arg1 byteCapacity:(unsigned)arg2 ;
-(unsigned)byteCapacity;
-(const AudioBufferList*)audioBufferList;
-(AudioBufferList*)mutableAudioBufferList;
@end

