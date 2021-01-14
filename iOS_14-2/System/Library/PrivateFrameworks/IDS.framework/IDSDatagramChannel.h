/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


#import <IDS/IDS-Structs.h>
@class _IDSDatagramChannel, NSArray, IDSDataChannelLinkContext;

@interface IDSDatagramChannel : NSObject {

	_IDSDatagramChannel* _internal;

}

@property (readonly) NSArray * connectedLinks; 
@property (readonly) IDSDataChannelLinkContext * defaultLink; 
+(id)realTimeContext;
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(id)initWithDestination:(id)arg1 ;
-(id)initWithSocketDescriptor:(int)arg1 ;
-(IDSDataChannelLinkContext *)defaultLink;
-(void)readyToRead;
-(void)start;
-(void)readDatagramWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)sendMetadata;
-(void)selectDefaultLink:(char)arg1 ;
-(void)readDatagramsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_reportFirstPacketTimeForMKI:(id)arg1 ;
-(void)sendMediaMembershipChangedInfo:(unsigned char)arg1 ;
-(void)addNewIDSDataChannelLinkWithAttributes:(char*)arg1 linkAttributesLength:(unsigned short)arg2 ;
-(void)osChannelInfoLog;
-(void)_logReceivingStats:(unsigned long long)arg1 ;
-(void)removeIDSDataChannelLinkContext:(char)arg1 linkUUID:(id)arg2 reason:(unsigned char)arg3 ;
-(SCD_Struct_ID10*)_setWiFiAssist:(BOOL)arg1 ;
-(void)sendMediaEncryptionInfoWithMKM:(id)arg1 MKS:(id)arg2 MKI:(id)arg3 isLocallyGenerated:(BOOL)arg4 ;
-(void)sendEventConnectedWithDummyLinkInfo;
-(void)processMetadataForDatagram:(char*)arg1 size:(unsigned long long)arg2 datagramInfo:(SCD_Struct_ID11*)arg3 options:(SCD_Struct_ID12*)arg4 ;
-(void)setChannelPreferences:(id)arg1 ;
-(void)_logSendingStats:(unsigned long long)arg1 ;
-(void)generateMetadataWithDatagramInfo:(SCD_Struct_ID11)arg1 options:(SCD_Struct_ID12*)arg2 currentDatagramCount:(unsigned char)arg3 totalDatagramCount:(unsigned char)arg4 byteBuffer:(SCD_Struct_ID13*)arg5 ;
-(void)writeDatagrams:(const void*)arg1 datagramSizes:(unsigned*)arg2 datagramInfo:(SCD_Struct_ID11)arg3 datagramCount:(int)arg4 options:(SCD_Struct_ID12*)arg5 completionHandler:(/*^block*/id)arg6 ;
-(NSArray *)connectedLinks;
-(void)_writeDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 datagramInfo:(SCD_Struct_ID11)arg3 options:(SCD_Struct_ID12*)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_buildPacketBufferMetaData:(SCD_Struct_ID10*)arg1 ;
-(id)cachedMetadata;
-(int)underlyingFileDescriptor;
-(void)writeDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 flags:(SCD_Struct_ID11)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeDatagrams:(const void*)arg1 datagramsSize:(unsigned*)arg2 datagramsInfo:(SCD_Struct_ID11*)arg3 datagramsCount:(int)arg4 options:(/*function pointer*/void**)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)writeDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 datagramInfo:(SCD_Struct_ID11)arg3 options:(SCD_Struct_ID12*)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setReadHandler:(/*^block*/id)arg1 ;
-(void)setWiFiAssist:(BOOL)arg1 ;
-(void)setReadHandlerWithOptions:(/*^block*/id)arg1 ;
-(void)startActiveProbingWithOptions:(id)arg1 ;
-(void)stopActiveProbingWithOptions:(id)arg1 ;
-(void)close;
-(void)flushLinkProbingStatusWithOptions:(id)arg1 ;
-(void)queryStatusWithOptions:(id)arg1 ;
-(void)requestSessionInfoWithOptions:(id)arg1 ;
-(void)reportFirstPacketTimeForMKI:(id)arg1 ;
-(id)description;
-(void)invalidate;
-(void)dealloc;
@end

