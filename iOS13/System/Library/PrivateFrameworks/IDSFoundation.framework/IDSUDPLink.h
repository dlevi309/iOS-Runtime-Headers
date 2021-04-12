/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSLink.h>

@protocol IDSLinkDelegate;
@class IDSSockAddrWrapper, NSDictionary, NSString, NSIndexSet;

@interface IDSUDPLink : NSObject <IDSLink> {

	int _socket;
	int _cellularSocket;
	int _addressFamily;
	IDSSockAddrWrapper* _localAddress;
	IDSSockAddrWrapper* _destinationAddress;
	BOOL _hasFixedDestination;
	NSDictionary* _destinationAddressToDeviceIDMap;
	unsigned short _port;
	unsigned short _cellularPort;
	BOOL _wantsAWDL;
	BOOL _wantsWiFi;
	BOOL _wantsCellular;
	BOOL _useDefaultInterfaceOnly;
	BOOL _allowsLinkLocal;
	BOOL _skipTransportThread;
	BOOL _needToConnect;
	BOOL _hasTemporaryError;
	BOOL _isInvalidated;
	double _lastDestinationSent;
	double _lastDestinationReceived;
	unsigned long long _state;
	unsigned long long _totalBytesSent;
	unsigned long long _totalPacketsSent;
	unsigned long long _totalBytesReceived;
	unsigned long long _totalPacketsReceived;
	unsigned long long _previousBytesSent;
	unsigned long long _previousPacketsSent;
	unsigned long long _previousBytesReceived;
	unsigned long long _previousPacketsReceived;
	double _previousReportTime;
	NSString* _cbuuid;
	NSString* _deviceUniqueID;
	id<IDSLinkDelegate> _delegate;
	id<IDSLinkDelegate> _alternateDelegate;
	NSIndexSet* _cellularInterfaceIndices;
	BOOL _wifiAssistEnabled;

}

@property (assign,nonatomic) unsigned short port;                                  //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) unsigned short cellularPort;                          //@synthesize cellularPort=_cellularPort - In the implementation block
@property (nonatomic,readonly) int socket;                                         //@synthesize socket=_socket - In the implementation block
@property (nonatomic,readonly) int cellularSocket;                                 //@synthesize cellularSocket=_cellularSocket - In the implementation block
@property (assign,nonatomic) BOOL useDefaultInterfaceOnly;                         //@synthesize useDefaultInterfaceOnly=_useDefaultInterfaceOnly - In the implementation block
@property (nonatomic,readonly) BOOL isInvalidated;                                 //@synthesize isInvalidated=_isInvalidated - In the implementation block
@property (assign,nonatomic) double lastDestinationSent;                           //@synthesize lastDestinationSent=_lastDestinationSent - In the implementation block
@property (nonatomic,readonly) double lastDestinationReceived;                     //@synthesize lastDestinationReceived=_lastDestinationReceived - In the implementation block
@property (assign,nonatomic) BOOL allowsLinkLocal;                                 //@synthesize allowsLinkLocal=_allowsLinkLocal - In the implementation block
@property (assign,nonatomic) BOOL skipTransportThread;                             //@synthesize skipTransportThread=_skipTransportThread - In the implementation block
@property (nonatomic,retain) NSIndexSet * cellularInterfaceIndices;                //@synthesize cellularInterfaceIndices=_cellularInterfaceIndices - In the implementation block
@property (assign,nonatomic) BOOL wifiAssistEnabled;                               //@synthesize wifiAssistEnabled=_wifiAssistEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * cbuuid;                                              //@synthesize cbuuid=_cbuuid - In the implementation block
@property (retain) NSString * deviceUniqueID;                                      //@synthesize deviceUniqueID=_deviceUniqueID - In the implementation block
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned long long state;                                     //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long headerOverhead; 
@property (__weak) id<IDSLinkDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<IDSLinkDelegate> alternateDelegate;                          //@synthesize alternateDelegate=_alternateDelegate - In the implementation block
-(void)invalidate;
-(id<IDSLinkDelegate>)delegate;
-(void)setDelegate:(id<IDSLinkDelegate>)arg1 ;
-(unsigned short)port;
-(void)setPort:(unsigned short)arg1 ;
-(unsigned long long)state;
-(BOOL)isInvalidated;
-(BOOL)setTrafficClass:(int)arg1 ;
-(int)socket;
-(NSString *)cbuuid;
-(unsigned long long)sendPacketBufferArray:(/*function pointer*/void**)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(unsigned long long)sendPacketBuffer:(SCD_Struct_ID19*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2 ;
-(id)copyLinkStatsDict;
-(void)setCbuuid:(NSString *)arg1 ;
-(NSString *)deviceUniqueID;
-(void)setDeviceUniqueID:(NSString *)arg1 ;
-(NSString *)linkTypeString;
-(unsigned long long)headerOverhead;
-(id<IDSLinkDelegate>)alternateDelegate;
-(void)setAlternateDelegate:(id<IDSLinkDelegate>)arg1 ;
-(void)setWiFiAssistState:(BOOL)arg1 ;
-(NSIndexSet *)cellularInterfaceIndices;
-(void)setCellularInterfaceIndices:(NSIndexSet *)arg1 ;
-(BOOL)wifiAssistEnabled;
-(void)setWifiAssistEnabled:(BOOL)arg1 ;
-(id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(void)setCellularPort:(unsigned short)arg1 ;
-(id)newSocketWithIPVersion:(unsigned long long)arg1 wantsAWDL:(BOOL)arg2 wantsWiFi:(BOOL)arg3 wantsCellular:(BOOL)arg4 clientUUID:(unsigned char)arg5 ;
-(void)removeSocket;
-(id)copyCurrentNetworkInterfaces;
-(unsigned short)cellularPort;
-(BOOL)_isInterfaceIndexCellular:(int)arg1 ;
-(void)_processIncomingPacketOnSocket:(int)arg1 ;
-(unsigned long long)_sendBytes:(const void*)arg1 length:(unsigned long long)arg2 destinationAddress:(const sockaddr*)arg3 ;
-(unsigned long long)_sendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(int)_findSocketForInterfaceIndex:(int)arg1 ;
-(int)_createNewUDPSocketWithIPVersion:(unsigned long long)arg1 localPort:(unsigned short*)arg2 wantsAWDL:(BOOL)arg3 clientUUID:(unsigned char)arg4 ;
-(void)_processIncomingPacket;
-(void)_processIncomingCellularPacket;
-(id)_createNetworkInterfaceArrayWithIPVersion:(unsigned long long)arg1 wantsAWDL:(BOOL)arg2 wantsWiFi:(BOOL)arg3 wantsCellular:(BOOL)arg4 allowsLinkLocal:(BOOL)arg5 useDefaultInterfaceOnly:(BOOL)arg6 defaultPairedDevice:(BOOL)arg7 ;
-(unsigned long long)_sendBytesArray:(const void*)arg1 lengthArray:(unsigned long long*)arg2 arraySize:(int)arg3 localInterfaceIndex:(int)arg4 localAddress:(const sockaddr*)arg5 destinationAddress:(const sockaddr*)arg6 trafficClass:(unsigned short)arg7 ;
-(BOOL)_setTrafficClassOnSocket:(int)arg1 trafficClassValue:(int)arg2 ;
-(BOOL)setDestinationAddress:(id)arg1 isFixedDestination:(BOOL)arg2 fromAddress:(id)arg3 ;
-(BOOL)setDestinationAddressToDeviceIDMap:(id)arg1 ;
-(void)reconnectWithLocalAddress:(id)arg1 ;
-(id)newSocketWithIPVersion:(unsigned long long)arg1 wantsAWDL:(BOOL)arg2 wantsWiFi:(BOOL)arg3 wantsCellular:(BOOL)arg4 ;
-(unsigned long long)sendPacketBuffer:(SCD_Struct_ID19*)arg1 destination:(id)arg2 toDeviceID:(id)arg3 ;
-(unsigned long long)sendPacketBuffer:(SCD_Struct_ID19*)arg1 sourceInterface:(id)arg2 destination:(id)arg3 toDeviceID:(id)arg4 ;
-(BOOL)useDefaultInterfaceOnly;
-(void)setUseDefaultInterfaceOnly:(BOOL)arg1 ;
-(double)lastDestinationSent;
-(void)setLastDestinationSent:(double)arg1 ;
-(double)lastDestinationReceived;
-(BOOL)skipTransportThread;
-(void)setSkipTransportThread:(BOOL)arg1 ;
-(int)cellularSocket;
-(BOOL)allowsLinkLocal;
-(void)setAllowsLinkLocal:(BOOL)arg1 ;
@end
