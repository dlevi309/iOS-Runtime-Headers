/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCDatagramChannelIDS.h>

@class VCDatagramChannelIDS, VCEmulatedNetwork;

@interface VCDatagramChannelIDSEmulated : VCDatagramChannelIDS {

	long long _mode;
	VCDatagramChannelIDS* _idsChannel;
	VCEmulatedNetwork* _network;
	tagVCMemoryPool* _datagramMetaDataPool;
	int _packetCount;
	BOOL _isStarted;

}
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(id)defaultLink;
-(void)readyToRead;
-(int)start;
-(void)osChannelInfoLog;
-(void)setChannelPreferences:(id)arg1 ;
-(id)connectedLinks;
-(void)writeDatagrams:(const void*)arg1 datagramsSize:(unsigned*)arg2 datagramsInfo:(SCD_Struct_VC86*)arg3 datagramsCount:(int)arg4 options:(/*function pointer*/void**)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)writeDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 datagramInfo:(SCD_Struct_VC86)arg3 options:(SCD_Struct_VC88*)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setReadHandler:(/*^block*/id)arg1 ;
-(void)setWiFiAssist:(BOOL)arg1 ;
-(void)requestSessionInfoWithOptions:(id)arg1 ;
-(void)invalidate;
-(unsigned)token;
-(id)destination;
-(void)dealloc;
-(id)initWithIDSDatagramChannel:(id)arg1 mode:(long long)arg2 ;
-(void)optInStreamIDs:(id)arg1 ;
-(void)optOutStreamIDs:(id)arg1 ;
-(BOOL)writeToEmulatedNetworkWithDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 datagramInfo:(SCD_Struct_VC86)arg3 options:(SCD_Struct_VC88*)arg4 ;
-(void)setupEmulatedNetwork;
@end

