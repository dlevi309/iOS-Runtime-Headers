/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRExternalDeviceTransport.h>
#import <libobjc.A.dylib/MRAVOutputStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, _MRDeviceInfoMessageProtobuf, NSError, MRAVOutputDeviceInputStream, MRAVOutputDeviceOutputStream, AVOutputDevice, NSString;

@interface MRAVOutputDeviceTransport : MRExternalDeviceTransport <MRAVOutputStreamDelegate> {

	unsigned long long _state;
	NSObject*<OS_dispatch_queue> _workerQueue;
	_MRDeviceInfoMessageProtobuf* _deviceInfo;
	NSError* _error;
	MRAVOutputDeviceInputStream* _inputStream;
	MRAVOutputDeviceOutputStream* _outputStream;
	BOOL _useSystemAuthenticationPrompt;
	AVOutputDevice* _avOutputDevice;

}

@property (nonatomic,readonly) AVOutputDevice * avOutputDevice;              //@synthesize avOutputDevice=_avOutputDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)port;
-(id)uid;
-(id)deviceInfo;
-(void)setError:(id)arg1 ;
-(id)error;
-(void)_onQueue_resetStreams;
-(BOOL)shouldUseSystemAuthenticationPrompt;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1 ;
-(BOOL)getInputStream:(id*)arg1 outputStream:(id*)arg2 userInfo:(id)arg3 ;
-(BOOL)requiresCustomPairing;
-(id)name;
-(NSString *)description;
-(id)hostname;
-(AVOutputDevice *)avOutputDevice;
-(void)reset;
-(void)outputStream:(id)arg1 didCloseCommunicationChannel:(id)arg2 ;
-(id)initWithAVOutputDevice:(id)arg1 connectionType:(long long)arg2 ;
@end

