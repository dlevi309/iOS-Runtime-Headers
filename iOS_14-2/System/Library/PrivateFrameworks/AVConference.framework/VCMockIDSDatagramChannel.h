/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <IDS/IDSDatagramChannel.h>

@class VCMockIDSDataChannelLinkContext, NSLock, NSDictionary;

@interface VCMockIDSDatagramChannel : IDSDatagramChannel {

	VCMockIDSDataChannelLinkContext* _linkContext;
	/*^block*/id _eventHandler;
	/*^block*/id _readHandler;
	/*^block*/id _readHandlerWithOptions;
	/*^block*/id _writeDatagramsBlock;
	/*^block*/id _writeDatagramBlock;
	/*^block*/id _readyToReadBlock;
	NSLock* _blockSettingLock;
	VCSingleLinkedList* _datagramPackets;
	CFAllocatorRef _datagramPacketAllocator;
	unsigned long long _datagramPacketNextSequenceNumber;
	BOOL _usingOptions;
	double _emulatedRxPLR;
	opaque_pthread_mutex_t _streamSubscriptionLock;
	NSDictionary* _subscribedStreamsByParticipantID;
	long long _participantGenerationCounter;

}
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(int)readyToRead;
-(void)start;
-(void)readDatagramWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)readDatagramsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)osChannelInfoLog;
-(void)setChannelPreferences:(id)arg1 ;
-(int)underlyingFileDescriptor;
-(void)writeDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 flags:(SCD_Struct_VC86)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeDatagrams:(const void*)arg1 datagramsSize:(unsigned*)arg2 datagramsInfo:(SCD_Struct_VC86*)arg3 datagramsCount:(int)arg4 options:(/*function pointer*/void**)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)writeDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 datagramInfo:(SCD_Struct_VC86)arg3 options:(SCD_Struct_VC88*)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setReadHandler:(/*^block*/id)arg1 ;
-(void)setWiFiAssist:(BOOL)arg1 ;
-(void)setReadHandlerWithOptions:(/*^block*/id)arg1 ;
-(void)startActiveProbingWithOptions:(id)arg1 ;
-(void)stopActiveProbingWithOptions:(id)arg1 ;
-(void)flushLinkProbingStatusWithOptions:(id)arg1 ;
-(void)queryStatusWithOptions:(id)arg1 ;
-(void)requestSessionInfoWithOptions:(id)arg1 ;
-(void)reportFirstPacketTimeForMKI:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(void)queryProbingResultsWithOptions:(id)arg1 ;
-(BOOL)isControlChannelDatagram:(VCMockIDSDatagramChannelPacket*)arg1 ;
-(id)newArrayOfStreamIdsForPacket:(VCMockIDSDatagramChannelPacket*)arg1 ;
-(BOOL)shouldReadPacket:(VCMockIDSDatagramChannelPacket*)arg1 ;
-(BOOL)enqueueDatagramPacket:(const void*)arg1 datagramSize:(unsigned)arg2 options:(SCD_Struct_VC88*)arg3 error:(id*)arg4 ;
-(void)dequeueDatagramPacket:(/*^block*/id)arg1 ;
-(void)readDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 datagramOptions:(SCD_Struct_VC88*)arg3 ;
-(id)initRequiresOptions:(BOOL)arg1 ;
-(void)setWriteDatagramsBlock:(/*^block*/id)arg1 ;
-(void)setWriteDatagramBlock:(/*^block*/id)arg1 ;
-(void)setReadyToReadBlock:(/*^block*/id)arg1 ;
@end

