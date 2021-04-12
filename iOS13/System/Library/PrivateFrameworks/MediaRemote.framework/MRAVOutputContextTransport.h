/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRExternalDeviceTransport.h>

@protocol OS_dispatch_queue;
@class NSObject, AVOutputContext, _MRDeviceInfoMessageProtobuf, NSError, MRAVInputStream, MRAVOutputStream, MRAVOutputDevice, AVOutputDevice;

@interface MRAVOutputContextTransport : MRExternalDeviceTransport {

	unsigned long long _state;
	NSObject*<OS_dispatch_queue> _serialQueue;
	AVOutputContext* _outputContext;
	_MRDeviceInfoMessageProtobuf* _deviceInfo;
	NSError* _error;
	MRAVInputStream* _inputStream;
	MRAVOutputStream* _outputStream;
	BOOL _useSystemAuthenticationPrompt;
	MRAVOutputDevice* _outputDevice;
	AVOutputDevice* _avOutputDevice;

}

@property (nonatomic,readonly) MRAVOutputDevice * outputDevice;              //@synthesize outputDevice=_outputDevice - In the implementation block
@property (nonatomic,readonly) AVOutputDevice * avOutputDevice;              //@synthesize avOutputDevice=_avOutputDevice - In the implementation block
-(void)dealloc;
-(id)description;
-(id)name;
-(long long)port;
-(id)error;
-(void)reset;
-(id)uid;
-(id)hostname;
-(BOOL)getInputStream:(id*)arg1 outputStream:(id*)arg2 ;
-(id)deviceInfo;
-(MRAVOutputDevice *)outputDevice;
-(void)_outputContextDevicesDidChangeNotification:(id)arg1 ;
-(AVOutputDevice *)avOutputDevice;
-(BOOL)requiresCustomPairing;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1 ;
-(BOOL)shouldUseSystemAuthenticationPrompt;
-(void)_unregisterNotificationsForOutputContext:(id)arg1 ;
-(void)_destroyRemoteControlContext;
-(void)_onQueue_initializeOutputContext;
-(void)_onQueue_resetStreams;
-(id)_onQueue_createRemoteControlContextWithID:(id)arg1 ;
-(void)_registerNotificationsForOutputContext:(id)arg1 ;
-(id)initWithOutputDevice:(id)arg1 avOutputDevice:(id)arg2 connectionType:(long long)arg3 ;
@end

