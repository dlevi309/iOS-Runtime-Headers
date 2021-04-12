/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSLink.h>

@protocol IDSLinkDelegate;
@class NSString, NSIndexSet;

@interface IDSTCPLink : NSObject <IDSLink> {

	int _addressFamily;
	BOOL _isSSL;
	IDSTCPConnection_* _conns;
	/*^block*/id _getPacketLength;
	IDSTCPLinkCounter_ _counters;
	IDSTCPLinkCounter_ _previousCounters;
	double _previousReportTime;
	NSString* _cbuuid;
	NSString* _deviceUniqueID;
	id<IDSLinkDelegate> _delegate;
	id<IDSLinkDelegate> _alternateDelegate;
	unsigned long long _state;
	NSIndexSet* _cellularInterfaceIndices;
	BOOL _wifiAssistEnabled;

}

@property (nonatomic,readonly) BOOL isSSL;                                         //@synthesize isSSL=_isSSL - In the implementation block
@property (nonatomic,retain) NSIndexSet * cellularInterfaceIndices;                //@synthesize cellularInterfaceIndices=_cellularInterfaceIndices - In the implementation block
@property (assign,nonatomic) BOOL wifiAssistEnabled;                               //@synthesize wifiAssistEnabled=_wifiAssistEnabled - In the implementation block
@property (retain) NSString * cbuuid;                                              //@synthesize cbuuid=_cbuuid - In the implementation block
@property (retain) NSString * deviceUniqueID;                                      //@synthesize deviceUniqueID=_deviceUniqueID - In the implementation block
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned long long state;                                     //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long headerOverhead; 
@property (__weak) id<IDSLinkDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<IDSLinkDelegate> alternateDelegate;                          //@synthesize alternateDelegate=_alternateDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isSSL;
-(void)setCbuuid:(NSString *)arg1 ;
-(IDSTCPConnection_*)_getIDSTCPConnection:(SCD_Struct_ID4*)arg1 ;
-(id)copyLinkStatsDict;
-(unsigned long long)sendPacketBufferArray:(/*function pointer*/void**)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(unsigned long long)sendPacketBuffer:(SCD_Struct_ID4*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2 ;
-(NSString *)deviceUniqueID;
-(id<IDSLinkDelegate>)delegate;
-(void)setDeviceUniqueID:(NSString *)arg1 ;
-(NSString *)linkTypeString;
-(unsigned long long)headerOverhead;
-(id<IDSLinkDelegate>)alternateDelegate;
-(void)setAlternateDelegate:(id<IDSLinkDelegate>)arg1 ;
-(id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 isSSL:(BOOL)arg3 getPacketLength:(/*^block*/id)arg4 ;
-(BOOL)wifiAssistEnabled;
-(long long)getPacketLength:(SCD_Struct_ID4*)arg1 isChannelData:(BOOL*)arg2 ;
-(BOOL)connect:(int)arg1 localAddress:(sockaddr*)arg2 portRange:(unsigned short)arg3 remoteAddress:(sockaddr*)arg4 clientUUID:(unsigned char)arg5 completionHandler:(/*^block*/id)arg6 ;
-(BOOL)disconnect:(sockaddr_in*)arg1 remoteAddress:(sockaddr_in*)arg2 ;
-(void)processIncomingPacket:(SCD_Struct_ID4*)arg1 ;
-(void)setWiFiAssistState:(BOOL)arg1 ;
-(NSIndexSet *)cellularInterfaceIndices;
-(void)setCellularInterfaceIndices:(NSIndexSet *)arg1 ;
-(void)setWifiAssistEnabled:(BOOL)arg1 ;
-(NSString *)cbuuid;
-(void)setDelegate:(id<IDSLinkDelegate>)arg1 ;
-(unsigned long long)state;
-(void)invalidate;
-(void)dealloc;
@end

