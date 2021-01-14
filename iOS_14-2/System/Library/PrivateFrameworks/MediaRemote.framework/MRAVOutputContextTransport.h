/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRExternalDeviceTransport.h>

@protocol OS_dispatch_queue;
@class NSObject, AVOutputContext, MRDeviceInfo, NSError, MRAVInputStream, MRAVOutputStream, MRAVOutputDevice, AVOutputDevice;

@interface MRAVOutputContextTransport : MRExternalDeviceTransport {

	unsigned long long _state;
	NSObject*<OS_dispatch_queue> _serialQueue;
	AVOutputContext* _outputContext;
	MRDeviceInfo* _deviceInfo;
	NSError* _error;
	MRAVInputStream* _inputStream;
	MRAVOutputStream* _outputStream;
	BOOL _useSystemAuthenticationPrompt;
	MRAVOutputDevice* _outputDevice;
	AVOutputDevice* _avOutputDevice;

}

@property (nonatomic,readonly) MRAVOutputDevice * outputDevice;              //@synthesize outputDevice=_outputDevice - In the implementation block
@property (nonatomic,readonly) AVOutputDevice * avOutputDevice;              //@synthesize avOutputDevice=_avOutputDevice - In the implementation block
-(long long)port;
-(id)uid;
-(id)deviceInfo;
-(MRAVOutputDevice *)outputDevice;
-(id)error;
-(BOOL)shouldUseSystemAuthenticationPrompt;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1 ;
-(BOOL)getInputStream:(id*)arg1 outputStream:(id*)arg2 userInfo:(id)arg3 ;
-(BOOL)requiresCustomPairing;
-(id)name;
-(id)description;
-(id)hostname;
-(AVOutputDevice *)avOutputDevice;
-(void)reset;
-(void)_outputContextDevicesDidChangeNotification:(id)arg1 ;
-(id)initWithOutputDevice:(id)arg1 avOutputDevice:(id)arg2 connectionType:(long long)arg3 ;
-(void)dealloc;
@end

