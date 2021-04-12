/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRExternalClientConnection.h>

@class NSDictionary;

@interface MRExternalJSONClientConnection : MRExternalClientConnection {

	NSDictionary* _artwork;
	NSDictionary* _deviceInfo;
	NSDictionary* _volume;
	NSDictionary* _playerPath;
	NSDictionary* _playbackQueue;
	NSDictionary* _supportedCommands;

}
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3 ;
-(id)_encodeDeviceInfo:(id)arg1 ;
-(id)_encodeVolumeDidChange:(id)arg1 ;
-(id)_processDeviceInfo:(id)arg1 ;
-(id)_processSetState:(id)arg1 ;
-(id)_createProtocolMessage:(Class)arg1 underlyingCodableMessage:(id)arg2 ;
-(id)_protocolMessageFromData:(id)arg1 ;
-(id)messageQueue:(id)arg1 dataForMessage:(id)arg2 ;
@end

