/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol _TVRCAudioBuffer <NSObject>
@required
-(void)setPacketCount:(unsigned long long)arg1;
-(void)setGain:(float)arg1;
-(void)setSampleRate:(double)arg1;
-(void)setTimestamp:(double)arg1;
-(void)writeAudioData:(void*)arg1 length:(unsigned long long)arg2;
-(void)writePacketDescriptions:(void*)arg1 length:(unsigned long long)arg2;

@end

