/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol _TVRCAudioBuffer <NSObject>
@required
-(void)setTimestamp:(double)arg1;
-(void)setSampleRate:(double)arg1;
-(void)setGain:(float)arg1;
-(void)setPacketCount:(unsigned long long)arg1;
-(void)writeAudioData:(void*)arg1 length:(unsigned long long)arg2;
-(void)writePacketDescriptions:(void*)arg1 length:(unsigned long long)arg2;

@end

