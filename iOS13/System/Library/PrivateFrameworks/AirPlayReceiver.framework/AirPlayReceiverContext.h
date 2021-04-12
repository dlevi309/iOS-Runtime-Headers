/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
*/


#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@class AirPlayReceiverMediaRemoteHelper;

@interface AirPlayReceiverContext : NSObject {

	AirPlayReceiverSessionPrivate* _session;
	CFArrayRef _audioSessions;
	unsigned char _receiverUIStarted;
	unsigned _receiverUISessionID;
	unsigned char _audioSessionActive;
	float _outputVolume;
	unsigned _powerAssertion;
	AirPlayReceiverMediaRemoteHelper* _mediaRemoteHelper;

}
-(void)_handleAVAudioSessionInterruptionEnded;
-(void)_handleAVAudioSessionInterruptionBegan;
@end

