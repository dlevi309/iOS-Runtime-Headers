/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithType:(unsigned long long)arg1 ;
-(AVAudioSession *)session;
-(BOOL)setActive:(BOOL)arg1 error:(id*)arg2 ;
-(void)resetSession;
-(void)setUpSession;
-(BOOL)setSessionMode:(id)arg1 error:(id*)arg2 ;
@end

