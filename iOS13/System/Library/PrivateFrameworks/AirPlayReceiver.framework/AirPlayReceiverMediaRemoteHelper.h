/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
*/


#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@interface AirPlayReceiverMediaRemoteHelper : NSObject {

	CFArrayRef _mediaRemoteSupportedCommands;
	unsigned _mediaRemotePlaybackState;
	/*^block*/id _mediaRemoteCommandHandler;
	void* _mediaRemotePlayer;
	void* _mediaRemotePlayerPathRef;
	unsigned char _usePerPlayerAPI;
	const void* _receiverSessionHelperID;

}
-(void)dealloc;
-(void)setPlayerState:(unsigned)arg1 ;
-(void)setMRNowPlayingInfo:(CFDictionaryRef)arg1 policy:(unsigned char)arg2 ;
-(void)setCommandHandlerBlockForSession:(AirPlayReceiverSessionPrivate*)arg1 ;
-(void)resetCommandHandlerBlockForSession:(AirPlayReceiverSessionPrivate*)arg1 ;
-(int)setSupportedCommands;
-(int)setSupportedCommandsFromSerializedArray:(CFArrayRef)arg1 ;
-(void)setDefaultSupportedCommands;
-(void)setCanBeNowPlayingApplication:(unsigned char)arg1 ;
-(void)makeNowPlayingPlayer;
-(int)updateAPNowPlayingInfo:(CFDictionaryRef)arg1 ;
-(void)updateNowPlayingProgress:(CFDictionaryRef)arg1 ;
-(void)updateNowPlayingClient:(CFDataRef)arg1 ;
-(id)initWithPlayerId:(CFStringRef)arg1 ;
@end

