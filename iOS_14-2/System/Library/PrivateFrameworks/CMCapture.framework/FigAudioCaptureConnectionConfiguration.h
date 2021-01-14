/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureConnectionConfiguration.h>

@interface FigAudioCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {

	BOOL _builtInMicrophoneStereoAudioCaptureEnabled;
	int _builtInMicrophonePosition;

}

@property (assign,nonatomic) BOOL builtInMicrophoneStereoAudioCaptureEnabled;              //@synthesize builtInMicrophoneStereoAudioCaptureEnabled=_builtInMicrophoneStereoAudioCaptureEnabled - In the implementation block
@property (assign,nonatomic) int builtInMicrophonePosition;                                //@synthesize builtInMicrophonePosition=_builtInMicrophonePosition - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)builtInMicrophoneStereoAudioCaptureEnabled;
-(void)setBuiltInMicrophonePosition:(int)arg1 ;
-(id)description;
-(void)setBuiltInMicrophoneStereoAudioCaptureEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)builtInMicrophonePosition;
-(BOOL)isEqual:(id)arg1 ;
@end

