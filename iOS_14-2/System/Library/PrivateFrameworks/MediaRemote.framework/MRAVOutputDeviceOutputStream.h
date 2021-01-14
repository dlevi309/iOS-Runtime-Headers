/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVBufferedOutputStream.h>

@protocol MRAVOutputStreamDelegate;
@class AVOutputDevice, AVOutputDeviceCommunicationChannel, NSError;

@interface MRAVOutputDeviceOutputStream : MRAVBufferedOutputStream {

	AVOutputDevice* _outputDevice;
	AVOutputDeviceCommunicationChannel* _communicationChannel;
	NSError* _streamError;
	BOOL _channelOpen;
	BOOL _channelIsOpen;
	id<MRAVOutputStreamDelegate> _streamDelegate;

}

@property (nonatomic,readonly) AVOutputDeviceCommunicationChannel * communicationChannel;              //@synthesize communicationChannel=_communicationChannel - In the implementation block
@property (assign,nonatomic) BOOL channelIsOpen;                                                       //@synthesize channelIsOpen=_channelIsOpen - In the implementation block
@property (assign,nonatomic,__weak) id<MRAVOutputStreamDelegate> streamDelegate;                       //@synthesize streamDelegate=_streamDelegate - In the implementation block
@property (getter=isChannelOpen,nonatomic,readonly) BOOL channelOpen;                                  //@synthesize channelOpen=_channelOpen - In the implementation block
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)streamError;
-(id<MRAVOutputStreamDelegate>)streamDelegate;
-(void)_outputDeviceDidCloseCommunicationChannelNotification:(id)arg1 ;
-(AVOutputDeviceCommunicationChannel *)communicationChannel;
-(BOOL)channelIsOpen;
-(void)setChannelIsOpen:(BOOL)arg1 ;
-(id)description;
-(id)initWithURL:(id)arg1 append:(BOOL)arg2 ;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
-(id)initToMemory;
-(BOOL)hasSpaceAvailable;
-(BOOL)isChannelOpen;
-(void)setStreamDelegate:(id<MRAVOutputStreamDelegate>)arg1 ;
-(id)initWithOutputDevice:(id)arg1 connectionType:(long long)arg2 allowAuthenticationPrompt:(BOOL)arg3 userInfo:(id)arg4 error:(id*)arg5 ;
-(void)dealloc;
@end

