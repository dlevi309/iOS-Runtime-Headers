/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVBufferedOutputStream.h>

@class AVOutputContextCommunicationChannel, NSError, AVOutputContext;

@interface MRAVOutputStream : MRAVBufferedOutputStream {

	AVOutputContextCommunicationChannel* _communicationChannel;
	NSError* _streamError;
	BOOL _channelOpen;
	BOOL _channelIsOpen;
	AVOutputContext* _outputContext;
	long long _connectionType;

}

@property (nonatomic,readonly) AVOutputContext * outputContext;                                         //@synthesize outputContext=_outputContext - In the implementation block
@property (nonatomic,readonly) AVOutputContextCommunicationChannel * communicationChannel;              //@synthesize communicationChannel=_communicationChannel - In the implementation block
@property (getter=isChannelOpen,nonatomic,readonly) BOOL channelOpen;                                   //@synthesize channelOpen=_channelOpen - In the implementation block
@property (nonatomic,readonly) long long connectionType;                                                //@synthesize connectionType=_connectionType - In the implementation block
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)streamError;
-(long long)connectionType;
-(AVOutputContextCommunicationChannel *)communicationChannel;
-(id)initWithCommunicationChannel:(id)arg1 ;
-(void)_outputContextDidCloseCommunicationChannelNotification:(id)arg1 ;
-(id)description;
-(id)initWithURL:(id)arg1 append:(BOOL)arg2 ;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
-(id)initToMemory;
-(AVOutputContext *)outputContext;
-(BOOL)hasSpaceAvailable;
-(BOOL)isChannelOpen;
-(id)initWithOutputContext:(id)arg1 connectionType:(long long)arg2 userInfo:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
@end

