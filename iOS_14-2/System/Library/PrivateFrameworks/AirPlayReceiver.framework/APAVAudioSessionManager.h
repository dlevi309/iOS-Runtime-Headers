/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
*/


#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@class AVAudioSession;

@interface APAVAudioSessionManager : NSObject {

	OpaqueFigSimpleMutexRef _mutex;
	AVAudioSession* _session;
	unsigned long long _type;
	BOOL _isSetUp;

}

@property (nonatomic,readonly) AVAudioSession * session;              //@synthesize session=_session - In the implementation block
+(id)mediaSessionManager;
+(id)ambientSessionManager;
-(id)initWithType:(unsigned long long)arg1 ;
-(BOOL)setActive:(BOOL)arg1 error:(id*)arg2 ;
-(AVAudioSession *)session;
-(void)resetSession;
-(void)dealloc;
-(void)setUpSession;
-(BOOL)setAudioMode:(CFStringRef)arg1 isLongForm:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)setDuckOthers:(unsigned char)arg1 error:(id*)arg2 ;
@end

