/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _handlingAirPlayDevicesTimeOut;
	unsigned _type;
	NSString* _uniqueIdentifier;
	AVOutputContext* _avOutputContext;

}

@property (nonatomic,copy) NSArray * outputDevices; 
@property (nonatomic,readonly) unsigned type;                                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;                                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) AVOutputContext * avOutputContext;                                        //@synthesize avOutputContext=_avOutputContext - In the implementation block
@property (nonatomic,readonly) NSArray * outputDeviceUIDs; 
@property (nonatomic,readonly) NSArray * personalDevices; 
@property (nonatomic,readonly) NSArray * personalDeviceUIDs; 
@property (nonatomic,readonly) NSArray * outputDevicesSnapshot; 
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable; 
@property (nonatomic,readonly) BOOL supportsVolumeControl; 
@property (assign,nonatomic) float volume; 
+(id)sharedAudioPresentationContext;
+(id)sharedSystemAudioContext;
+(id)createOutputContextWithUniqueIdentifier:(id)arg1 ;
+(id)sharedSystemScreenContext;
-(void)setOutputDevices:(NSArray *)arg1 ;
-(NSArray *)outputDeviceUIDs;
-(void)_handleOutputDeviceSupportsVolumeDidChangeNotification:(id)arg1 ;
-(void)_handleOutputDevicesDidChangeNotification:(id)arg1 ;
-(void)setVolume:(float)arg1 ;
-(void)removeOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)isVolumeControlAvailable;
-(void)removeAllOutputDevicesWithCallbackQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSString *)uniqueIdentifier;
-(void)addOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg1 ;
-(void)_handleOutputDeviceDidChangeNotification:(id)arg1 ;
-(NSArray *)personalDevices;
-(id)description;
-(NSArray *)personalDeviceUIDs;
-(void)attemptLogicalDeviceRecovery;
-(void)addOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)supportsVolumeControl;
-(NSArray *)outputDevices;
-(id)initWithAVOutputContext:(id)arg1 type:(unsigned)arg2 ;
-(void)setOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(/*^block*/id)arg4 ;
-(unsigned)type;
-(void)_handleDiscoverySessionOutputDevicesDidChangeNotification:(id)arg1 ;
-(NSArray *)outputDevicesSnapshot;
-(void)_outputContextChangeInitiatedNotification:(id)arg1 ;
-(float)volume;
-(void)_handleOutputDeviceCanSetVolumeDidChangeNotification:(id)arg1 ;
-(AVOutputContext *)avOutputContext;
-(void)setOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

