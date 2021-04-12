/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


@interface SHAudioUtilities : NSObject
+(unsigned long long)convertMachTimeToMillisecods:(unsigned long long)arg1 ;
+(id)bufferTail:(id)arg1 length:(double)arg2 ;
+(double)lengthOfBuffer:(id)arg1 ;
+(id)extractFromBuffer:(id)arg1 atPosition:(unsigned)arg2 length:(unsigned)arg3 ;
+(id)splitBuffer:(id)arg1 fromStartPosition:(unsigned)arg2 intoLengthsOfSize:(double)arg3 ;
+(id)splitBuffer:(id)arg1 atPosition:(unsigned)arg2 ;
+(BOOL)isAudioFormatSupported:(id)arg1 ;
+(id)audioBufferFromData:(void*)arg1 byteSize:(unsigned long long)arg2 inFormat:(id)arg3 ;
@end

