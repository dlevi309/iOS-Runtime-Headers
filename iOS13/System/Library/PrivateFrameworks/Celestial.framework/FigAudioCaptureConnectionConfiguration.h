/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureConnectionConfiguration.h>

@interface FigAudioCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {

	BOOL _builtInMicrophoneStereoAudioCaptureEnabled;
	int _builtInMicrophonePosition;

}

@property (assign,nonatomic) BOOL builtInMicrophoneStereoAudioCaptureEnabled;              //@synthesize builtInMicrophoneStereoAudioCaptureEnabled=_builtInMicrophoneStereoAudioCaptureEnabled - In the implementation block
@property (assign,nonatomic) int builtInMicrophonePosition;                                //@synthesize builtInMicrophonePosition=_builtInMicrophonePosition - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBuiltInMicrophoneStereoAudioCaptureEnabled:(BOOL)arg1 ;
-(void)setBuiltInMicrophonePosition:(int)arg1 ;
-(BOOL)builtInMicrophoneStereoAudioCaptureEnabled;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)builtInMicrophonePosition;
@end

