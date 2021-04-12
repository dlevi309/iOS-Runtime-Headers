/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@protocol OS_dispatch_queue;
@class NSObject, _MRDeviceInfoMessageProtobuf, NSNumber, NSMutableArray, NSMutableDictionary, _MROriginProtobuf, _MRNowPlayingPlayerPathProtobuf;

@interface MRNowPlayingOriginClientRequests : NSObject <MRNowPlayingClientState> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	_MRDeviceInfoMessageProtobuf* _deviceInfo;
	NSNumber* _volumeCapabilities;
	NSNumber* _volume;
	NSMutableArray* _nowPlayingClients;
	NSMutableDictionary* _transactionCallbacks;
	NSMutableArray* _deviceInfoCompletions;
	NSMutableArray* _volumeCompletions;
	NSMutableArray* _volumeCapabilitiesCompletions;
	_MROriginProtobuf* _origin;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;

}

@property (nonatomic,readonly) _MROriginProtobuf * origin;                                //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) _MRDeviceInfoMessageProtobuf * deviceInfo; 
@property (nonatomic,retain) NSNumber * volumeCapabilities; 
@property (nonatomic,retain) NSNumber * volume; 
-(id)debugDescription;
-(_MROriginProtobuf *)origin;
-(NSNumber *)volume;
-(void)setVolume:(NSNumber *)arg1 ;
-(void)removeClient:(id)arg1 ;
-(_MRDeviceInfoMessageProtobuf *)deviceInfo;
-(void)setDeviceInfo:(_MRDeviceInfoMessageProtobuf *)arg1 ;
-(id)initWithOrigin:(id)arg1 ;
-(NSNumber *)volumeCapabilities;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(void)setVolumeCapabilities:(NSNumber *)arg1 ;
-(void)restoreNowPlayingClientState;
-(id)nowPlayingClients;
-(id)nowPlayingClientRequestsForPlayerPath:(id)arg1 ;
-(id)existingNowPlayingClientRequestsForPlayerPath:(id)arg1 ;
-(void)setTransactionCallback:(/*^block*/id)arg1 forName:(unsigned long long)arg2 ;
-(/*^block*/id)transactionCallbackForName:(unsigned long long)arg1 ;
-(void)handleDeviceInfoRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)handleVolumeRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)handleVolumeCapabilitiesRequestWithCompletion:(/*^block*/id)arg1 ;
@end

