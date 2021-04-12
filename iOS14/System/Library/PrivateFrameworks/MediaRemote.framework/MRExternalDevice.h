/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


#import <MediaRemote/MediaRemote-Structs.h>
@class NSArray, MRSupportedProtocolMessages, NSString, MROrigin, MRDeviceInfo;

@interface MRExternalDevice : NSObject {

	BOOL _wantsEndpointChangeNotifications;
	BOOL _valid;
	BOOL _usingSystemPairing;
	unsigned _connectionState;
	NSArray* _personalOutputDevices;

}

@property (nonatomic,readonly) MRSupportedProtocolMessages * supportedMessages; 
@property (assign,getter=isUsingSystemPairing,nonatomic) BOOL usingSystemPairing;              //@synthesize usingSystemPairing=_usingSystemPairing - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * hostName; 
@property (nonatomic,readonly) long long port; 
@property (nonatomic,readonly) MROrigin * customOrigin; 
@property (nonatomic,readonly) MRDeviceInfo * deviceInfo; 
@property (nonatomic,readonly) NSArray * personalOutputDevices;                                //@synthesize personalOutputDevices=_personalOutputDevices - In the implementation block
@property (assign,nonatomic) BOOL wantsNowPlayingNotifications; 
@property (assign,nonatomic) BOOL wantsNowPlayingArtworkNotifications; 
@property (assign,nonatomic) BOOL wantsVolumeNotifications; 
@property (assign,nonatomic) BOOL wantsOutputDeviceNotifications; 
@property (assign,nonatomic) BOOL wantsSystemEndpointNotifications; 
@property (assign,nonatomic) BOOL wantsEndpointChangeNotifications;                            //@synthesize wantsEndpointChangeNotifications=_wantsEndpointChangeNotifications - In the implementation block
@property (nonatomic,copy) NSArray * subscribedPlayerPaths; 
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                      //@synthesize valid=_valid - In the implementation block
@property (nonatomic,readonly) unsigned connectionState;                                       //@synthesize connectionState=_connectionState - In the implementation block
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
-(BOOL)isPaired;
-(long long)port;
-(void)modifyByAddingDeviceUIDs:(id)arg1 removingDeviceUIDs:(id)arg2 settingDeviceUIDs:(id)arg3 addingClusterAwareDeviceUIDs:(id)arg4 removingClusterAwareDeviceUIDs:(id)arg5 settingClusterAwareDeviceUIDs:(id)arg6 withReplyQueue:(id)arg7 completion:(/*^block*/id)arg8 ;
-(MRDeviceInfo *)deviceInfo;
-(unsigned)connectionState;
-(void)unpair;
-(void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)name;
-(NSString *)hostName;
-(BOOL)isValid;
-(void)sendClientUpdatesConfigMessage;
-(id)errorForCurrentState;
-(id)currentClientUpdatesConfigMessage;
-(void)connectWithOptions:(unsigned)arg1 userInfo:(id)arg2 ;
-(MRSupportedProtocolMessages *)supportedMessages;
-(void)setUsingSystemPairing:(BOOL)arg1 ;
-(void)sendCustomData:(id)arg1 withName:(id)arg2 ;
-(MROrigin *)customOrigin;
-(NSArray *)subscribedPlayerPaths;
-(void)setSubscribedPlayerPaths:(NSArray *)arg1 ;
-(NSArray *)personalOutputDevices;
-(BOOL)wantsNowPlayingNotifications;
-(BOOL)wantsNowPlayingArtworkNotifications;
-(BOOL)isUsingSystemPairing;
-(id)_init;
-(BOOL)wantsVolumeNotifications;
-(BOOL)wantsOutputDeviceNotifications;
-(BOOL)wantsEndpointChangeNotifications;
-(void)setWantsEndpointChangeNotifications:(BOOL)arg1 ;
-(BOOL)wantsSystemEndpointNotifications;
-(void)setWantsSystemEndpointNotifications:(BOOL)arg1 ;
-(void)setPairingCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setNameCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setPairingAllowedCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setCustomDataCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)ping:(double)arg1 callback:(/*^block*/id)arg2 withQueue:(id)arg3 ;
-(void)sendButtonEvent:(MRHIDButtonEvent)arg1 ;
-(void)connectWithOptions:(unsigned)arg1 ;
-(void)disconnect:(id)arg1 ;
-(void)setWantsVolumeNotifications:(BOOL)arg1 ;
-(void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setWantsOutputDeviceNotifications:(BOOL)arg1 ;
-(void)setWantsNowPlayingNotifications:(BOOL)arg1 ;
-(void)setWantsNowPlayingArtworkNotifications:(BOOL)arg1 ;
-(void)setVolumeCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setConnectionStateCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
@end

