/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@protocol OS_dispatch_queue;
@class NSObject, MRDeviceInfo, NSNumber, NSMutableArray, NSMutableDictionary, MROrigin, MRPlayerPath;

@interface MRNowPlayingOriginClientRequests : NSObject <MRNowPlayingClientState> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	MRDeviceInfo* _deviceInfo;
	NSNumber* _volumeCapabilities;
	NSNumber* _volume;
	NSMutableArray* _nowPlayingClients;
	NSMutableDictionary* _transactionCallbacks;
	NSMutableArray* _deviceInfoCompletions;
	NSMutableArray* _volumeCompletions;
	NSMutableArray* _volumeCapabilitiesCompletions;
	MROrigin* _origin;
	MRPlayerPath* _playerPath;

}

@property (nonatomic,readonly) MROrigin * origin;                        //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) MRPlayerPath * playerPath;                //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) MRDeviceInfo * deviceInfo; 
@property (nonatomic,retain) NSNumber * volumeCapabilities; 
@property (nonatomic,retain) NSNumber * volume; 
-(void)setVolumeCapabilities:(NSNumber *)arg1 ;
-(NSNumber *)volumeCapabilities;
-(void)restoreNowPlayingClientState;
-(/*^block*/id)transactionCallbackForName:(unsigned long long)arg1 ;
-(MRDeviceInfo *)deviceInfo;
-(void)setVolume:(NSNumber *)arg1 ;
-(MROrigin *)origin;
-(void)setDeviceInfo:(MRDeviceInfo *)arg1 ;
-(id)debugDescription;
-(id)nowPlayingClientRequestsForPlayerPath:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void)handleVolumeCapabilitiesRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)handleDeviceInfoRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)existingNowPlayingClientRequestsForPlayerPath:(id)arg1 ;
-(MRPlayerPath *)playerPath;
-(void)handleVolumeRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithOrigin:(id)arg1 ;
-(NSNumber *)volume;
-(void)setTransactionCallback:(/*^block*/id)arg1 forName:(unsigned long long)arg2 ;
@end

