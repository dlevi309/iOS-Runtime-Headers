/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSString;

@interface AVCTestMonitorInjectAudioConfig : NSObject {

	int _injectAudioConfigType;
	double _amplitude;
	NSString* _audioFileName;

}

@property (assign,nonatomic) int injectAudioConfigType;              //@synthesize injectAudioConfigType=_injectAudioConfigType - In the implementation block
@property (assign,nonatomic) double amplitude;                       //@synthesize amplitude=_amplitude - In the implementation block
@property (assign,nonatomic) NSString * audioFileName;               //@synthesize audioFileName=_audioFileName - In the implementation block
-(void)setAudioFileName:(NSString *)arg1 ;
-(NSString *)audioFileName;
-(double)amplitude;
-(void)setAmplitude:(double)arg1 ;
-(int)injectAudioConfigType;
-(void)setInjectAudioConfigType:(int)arg1 ;
@end

