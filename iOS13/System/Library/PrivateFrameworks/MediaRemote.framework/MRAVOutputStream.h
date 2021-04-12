/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVBufferedOutputStream.h>

@class AVOutputContextCommunicationChannel, AVOutputContext;

@interface MRAVOutputStream : MRAVBufferedOutputStream {

	AVOutputContextCommunicationChannel* _communicationChannel;
	BOOL _channelOpen;
	BOOL _channelIsOpen;
	AVOutputContext* _outputContext;
	long long _connectionType;

}

@property (assign,nonatomic) BOOL channelIsOpen;                                                        //@synthesize channelIsOpen=_channelIsOpen - In the implementation block
@property (nonatomic,readonly) AVOutputContext * outputContext;                                         //@synthesize outputContext=_outputContext - In the implementation block
@property (nonatomic,readonly) AVOutputContextCommunicationChannel * communicationChannel;              //@synthesize communicationChannel=_communicationChannel - In the implementation block
@property (getter=isChannelOpen,nonatomic,readonly) BOOL channelOpen;                                   //@synthesize channelOpen=_channelOpen - In the implementation block
@property (nonatomic,readonly) long long connectionType;                                                //@synthesize connectionType=_connectionType - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithURL:(id)arg1 append:(BOOL)arg2 ;
-(id)initToMemory;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)hasSpaceAvailable;
-(long long)connectionType;
-(AVOutputContext *)outputContext;
-(id)initWithOutputContext:(id)arg1 connectionType:(long long)arg2 error:(id*)arg3 ;
-(BOOL)isChannelOpen;
-(void)_outputContextDidCloseCommunicationChannelNotification:(id)arg1 ;
-(id)initWithCommunicationChannel:(id)arg1 ;
-(AVOutputContextCommunicationChannel *)communicationChannel;
-(BOOL)channelIsOpen;
-(void)setChannelIsOpen:(BOOL)arg1 ;
@end

