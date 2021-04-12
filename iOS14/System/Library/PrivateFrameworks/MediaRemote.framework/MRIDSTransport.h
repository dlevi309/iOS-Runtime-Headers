/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRExternalDeviceTransport.h>

@class MRIDSInputStream, MRIDSOutputStream, MRAVOutputDevice;

@interface MRIDSTransport : MRExternalDeviceTransport {

	MRIDSInputStream* _inputStream;
	MRIDSOutputStream* _outputStream;
	MRAVOutputDevice* _outputDevice;

}
-(long long)port;
-(id)uid;
-(id)deviceInfo;
-(id)error;
-(BOOL)shouldUseSystemAuthenticationPrompt;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1 ;
-(BOOL)getInputStream:(id*)arg1 outputStream:(id*)arg2 userInfo:(id)arg3 ;
-(id)name;
-(id)hostname;
-(void)_handleDeviceDisconnected:(id)arg1 ;
-(id)initWithOutputDevice:(id)arg1 ;
-(void)reset;
@end

