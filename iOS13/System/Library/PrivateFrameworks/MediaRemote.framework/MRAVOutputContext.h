/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue;
@class NSArray, MRAVOutputDeviceSourceInfo, NSObject, NSString, AVOutputContext;

@interface MRAVOutputContext : NSObject {

	NSArray* _outputDevices;
	NSArray* _outputDevicesSnapshot;
	MRAVOutputDeviceSourceInfo* _outputDeviceSourceInfo;
	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _isVolumeControlAvailable;
	BOOL _attemptingLogicalDeviceRecovery;
	BOOL _postOutputDeviceChangedScheduled;
	BOOL _postOutputDevicesChangedScheduled;
	BOOL _handleOutputDeviceChangedScheduled;
	BOOL _handleOutputDevicesChangedScheduled;
	BOOL _handleDiscoverySessionOutputDevicesChangedScheduled;
	unsigned _type;
	NSString* _uniqueIdentifier;
	AVOutputContext* _avOutputContext;

}

@property (nonatomic,copy) NSArray * outputDevices; 
@property (nonatomic,readonly) unsigned type;                                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;                                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) AVOutputContext * avOutputContext;                                        //@synthesize avOutputContext=_avOutputContext - In the implementation block
@property (nonatomic,readonly) NSArray * outputDevicesSnapshot; 
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable; 
@property (nonatomic,readonly) BOOL supportsVolumeControl; 
@property (assign,nonatomic) float volume; 
+(id)_notificationQueue;
+(id)sharedSystemAudioContext;
+(id)sharedSystemScreenContext;
+(id)sharedAudioPresentationContext;
+(id)createOutputContextWithUniqueIdentifier:(id)arg1 ;
+(void)_initializeAVFNotificationForwarding;
+(id)_sharedOutputContextFromType:(unsigned)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned)type;
-(NSString *)uniqueIdentifier;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(id)localDevice;
-(NSArray *)outputDevices;
-(void)setOutputDevices:(NSArray *)arg1 ;
-(BOOL)isVolumeControlAvailable;
-(void)addOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)setOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)supportsVolumeControl;
-(void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg1 ;
-(id)initWithAVOutputContext:(id)arg1 type:(unsigned)arg2 ;
-(void)_reloadOutputDevicesForInitialLoad:(BOOL)arg1 ;
-(void)_scheduleOutputContextDevicesDidChangeNotification;
-(void)setOutputDevices:(id)arg1 withPassword:(id)arg2 callbackQueue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)setOutputDevices:(id)arg1 password:(id)arg2 initiator:(id)arg3 withCallbackQueue:(id)arg4 block:(/*^block*/id)arg5 ;
-(void)removeOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)addOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_handleOutputDeviceDidChangeNotification:(id)arg1 ;
-(void)_handleOutputDevicesDidChangeNotification:(id)arg1 ;
-(void)_handleDiscoverySessionOutputDevicesDidChangeNotification:(id)arg1 ;
-(void)_outputContextChangeInitiatedNotification:(id)arg1 ;
-(void)_handleOutputDeviceCanSetVolumeDidChangeNotification:(id)arg1 ;
-(void)_handleOutputDeviceSupportsVolumeDidChangeNotification:(id)arg1 ;
-(NSArray *)outputDevicesSnapshot;
-(void)setOutputDevicesSnapshot:(NSArray *)arg1 ;
-(void)_scheduleOutputContextDeviceDidChangeNotification;
-(void)setOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)removeAllOutputDevicesWithCallbackQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)attemptLogicalDeviceRecovery;
-(AVOutputContext *)avOutputContext;
@end

