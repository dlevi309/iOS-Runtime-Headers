/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

@class AVCPacketFilter;


@protocol AVCPacketRelayConnectionProtocol
@property (readonly) unsigned char type; 
@property (assign) BOOL isDemuxNeeded; 
@property (copy) id readHandler; 
@property (retain) AVCPacketFilter * packetFilter; 
@required
-(void)readyToRead;
-(int)start;
-(void)setReadHandler:(/*^block*/id)arg1;
-(int)stop;
-(id)readHandler;
-(unsigned char)type;
-(void)setPacketFilter:(id)arg1;
-(BOOL)sendData:(const void*)arg1 size:(unsigned)arg2 error:(id*)arg3;
-(BOOL)isDemuxNeeded;
-(void)setIsDemuxNeeded:(BOOL)arg1;
-(AVCPacketFilter *)packetFilter;

@end

