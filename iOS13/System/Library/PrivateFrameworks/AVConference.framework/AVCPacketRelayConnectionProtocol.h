/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

@class AVCPacketFilter;


@protocol AVCPacketRelayConnectionProtocol
@property (readonly) unsigned char type; 
@property (assign) BOOL isDemuxNeeded; 
@property (copy) id readHandler; 
@property (retain) AVCPacketFilter * packetFilter; 
@required
-(unsigned char)type;
-(int)stop;
-(int)start;
-(id)readHandler;
-(void)setReadHandler:(/*^block*/id)arg1;
-(void)readyToRead;
-(void)setPacketFilter:(id)arg1;
-(BOOL)sendData:(const void*)arg1 size:(unsigned)arg2 error:(id*)arg3;
-(BOOL)isDemuxNeeded;
-(void)setIsDemuxNeeded:(BOOL)arg1;
-(AVCPacketFilter *)packetFilter;

@end

