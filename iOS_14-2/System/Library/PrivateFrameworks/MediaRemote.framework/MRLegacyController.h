/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/MRProtocolClientConnectionDelegate.h>

@protocol MRLegacyControllerDelegate, OS_dispatch_queue;
@class NSString, MRExternalDevice, NSObject;

@interface MRLegacyController : NSObject <MRProtocolClientConnectionDelegate> {

	id<MRLegacyControllerDelegate> _delegate;
	NSString* _outputDeviceUID;
	MRExternalDevice* _externalDevice;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) NSString * outputDeviceUID;                                    //@synthesize outputDeviceUID=_outputDeviceUID - In the implementation block
@property (nonatomic,retain) MRExternalDevice * externalDevice;                           //@synthesize externalDevice=_externalDevice - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<MRLegacyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tearDown;
-(MRExternalDevice *)externalDevice;
-(void)setExternalDevice:(MRExternalDevice *)arg1 ;
-(id<MRLegacyControllerDelegate>)delegate;
-(void)setOutputDeviceUID:(NSString *)arg1 ;
-(void)connect;
-(id)initWithAVOutputDevice:(id)arg1 ;
-(id)initWithOutputDeviceUID:(id)arg1 ;
-(void)setDelegate:(id<MRLegacyControllerDelegate>)arg1 ;
-(void)addOutputDeviceIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeOutputDeviceIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOutputDeviceIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getMasterVolumeWithCompletion:(/*^block*/id)arg1 ;
-(void)getOutputDeviceVolume:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getMasterVolumeCapabilitiesWithCompletion:(/*^block*/id)arg1 ;
-(void)getOutputDeviceVolumeCapabilities:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMasterVolume:(float)arg1 completion:(/*^block*/id)arg2 ;
-(void)setVolume:(float)arg1 forOutputDeviceID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)outputDeviceUID;
-(id)initWithOutputDevice:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setupExternalDevice;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithExternalDevice:(id)arg1 outputDeviceUID:(id)arg2 ;
-(void)modifyTopologyAddingDevices:(id)arg1 removingDevices:(id)arg2 settingDevices:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)handleVolumeCapabilitiesDidChangeNotification:(id)arg1 ;
@end

