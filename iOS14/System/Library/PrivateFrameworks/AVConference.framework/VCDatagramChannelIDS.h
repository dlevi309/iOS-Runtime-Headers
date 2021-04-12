/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>

@class IDSDatagramChannel, NSString, NSArray, IDSDataChannelLinkContext;

@interface VCDatagramChannelIDS : VCObject {

	unsigned _token;
	IDSDatagramChannel* _idsChannel;
	NSString* _destination;
	int _driverSocket;
	/*^block*/id _eventHandler;

}

@property (readonly) NSArray * connectedLinks; 
@property (readonly) IDSDataChannelLinkContext * defaultLink; 
@property (readonly) unsigned token;                                       //@synthesize token=_token - In the implementation block
@property (readonly) NSString * destination;                               //@synthesize destination=_destination - In the implementation block
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(IDSDataChannelLinkContext *)defaultLink;
-(void)readyToRead;
-(int)start;
-(void)osChannelInfoLog;
-(void)setChannelPreferences:(id)arg1 ;
-(NSArray *)connectedLinks;
-(void)writeDatagrams:(const void*)arg1 datagramsSize:(unsigned*)arg2 datagramsInfo:(SCD_Struct_VC86*)arg3 datagramsCount:(int)arg4 options:(/*function pointer*/void**)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)writeDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 datagramInfo:(SCD_Struct_VC86)arg3 options:(SCD_Struct_VC88*)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setReadHandler:(/*^block*/id)arg1 ;
-(void)setWiFiAssist:(BOOL)arg1 ;
-(void)startActiveProbingWithOptions:(id)arg1 ;
-(void)stopActiveProbingWithOptions:(id)arg1 ;
-(void)flushLinkProbingStatusWithOptions:(id)arg1 ;
-(void)requestSessionInfoWithOptions:(id)arg1 ;
-(id)sharedIDSService;
-(void)invalidate;
-(unsigned)token;
-(NSString *)destination;
-(void)dealloc;
-(id)initWithSocketDescriptor:(int)arg1 token:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithDestination:(id)arg1 token:(unsigned)arg2 error:(id*)arg3 ;
-(id)datagramChannelWithDestination:(id)arg1 error:(id*)arg2 ;
-(int)setupDriverSocket;
-(void)queryProbingResultsWithOptions:(id)arg1 ;
-(void)optInStreamIDs:(id)arg1 ;
-(void)optOutStreamIDs:(id)arg1 ;
@end

