/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSString, NSMutableData;

@interface CannedAudioInjector : NSObject {

	NSString* _cannedMoviePath;
	NSMutableData* _samples;
	int _position;
	BOOL _fromBeginning;
	opaque_pthread_mutex_t _samplesMutex;
	opaque_pthread_cond_t _samplesConditional;
	AudioStreamBasicDescription _internalFormat;

}

@property (nonatomic,retain) NSString * cannedMoviePath;              //@synthesize cannedMoviePath=_cannedMoviePath - In the implementation block
@property (nonatomic,retain) NSMutableData * samples;                 //@synthesize samples=_samples - In the implementation block
@property (assign,nonatomic) int position;                            //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) BOOL fromBeginning;                      //@synthesize fromBeginning=_fromBeginning - In the implementation block
+(BOOL)isAudioAvailable:(id)arg1 ;
-(void)dealloc;
-(int)position;
-(NSMutableData *)samples;
-(void)setPosition:(int)arg1 ;
-(void)setSamples:(NSMutableData *)arg1 ;
-(int)readRawAudioSamples;
-(int)decodeAudio;
-(NSString *)cannedMoviePath;
-(id)initWithPath:(id)arg1 withDescription:(AudioStreamBasicDescription)arg2 fromBeginning:(BOOL)arg3 ;
-(void)injectToBuffer:(char*)arg1 size:(int)arg2 time:(double)arg3 muted:(BOOL)arg4 ;
-(void)setCannedMoviePath:(NSString *)arg1 ;
-(BOOL)fromBeginning;
-(void)setFromBeginning:(BOOL)arg1 ;
@end

