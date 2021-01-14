/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary, NSObject;

@interface VCTransport : NSObject {

	tagHANDLE* tpHandle;
	NSMutableDictionary* iceBlocks;
	NSObject*<OS_dispatch_queue> delegateQueue;
	NSMutableDictionary* dataReceivedHandlers;
	NSObject*<OS_dispatch_queue> dataReceivedHandlerQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)cleanup;
-(void)dealloc;
-(void)setReportingAgent:(opaqueRTCReportingRef)arg1 ;
-(int)getSignalStrengthBars:(int*)arg1 displayBars:(int*)arg2 maxDisplayBars:(int*)arg3 ;
-(int)updateQualityIndicator:(int)arg1 isIPv6:(BOOL)arg2 ;
-(int)stopConnectivityCheckForCallID:(unsigned)arg1 ;
-(int)discardRelayBindingForCallID:(unsigned)arg1 ;
-(int)updateICERoleForCallID:(unsigned)arg1 role:(int)arg2 remoteCallID:(unsigned)arg3 sessionID:(CFStringRef)arg4 ;
-(int)setForceIPv6ForCallID:(unsigned)arg1 ;
-(int)startConnectionCheckForCallID:(unsigned)arg1 remoteConnectionDataBlob:(id)arg2 relayDictionary:(id)arg3 iceTimeout:(double)arg4 securityIdentity:(SecIdentityRef)arg5 skeState:(SKEStateOpaqueRef)arg6 usedRelay:(int*)arg7 ;
-(int)setSKEState:(SKEStateOpaqueRef)arg1 forCallID:(unsigned)arg2 ;
-(void)registerICEBlockForCallID:(unsigned)arg1 connectedBlock:(/*^block*/id)arg2 newCandidatesBlock:(/*^block*/id)arg3 newNominationBlock:(/*^block*/id)arg4 removeIPPortBlock:(/*^block*/id)arg5 ;
-(int)setForceRelayForCallID:(unsigned)arg1 ;
-(int)flushBasebandQueue:(void*)arg1 ;
-(int)updateBasebandForConnection:(tagCONNRESULT*)arg1 notificationRegistrationToken:(unsigned)arg2 callType:(unsigned char)arg3 ;
-(int)getRemoteICEVersion:(unsigned)arg1 remoteICEVersion:(unsigned*)arg2 ;
-(int)updateInterfaceList:(unsigned)arg1 shouldFilterCellInterface:(BOOL)arg2 isUpdateNeeded:(int*)arg3 ;
-(BOOL)ipPortStillExists:(tagIPPORT*)arg1 requiresWifi:(BOOL)arg2 ;
-(int)getConnectionDataForCallID:(unsigned)arg1 version:(unsigned char)arg2 useCompressedData:(BOOL)arg3 pConnectionData:(void*)arg4 connectDataSizeInBytes:(int*)arg5 relayDictionary:(CFDictionaryRef)arg6 interfaceUpdate:(BOOL)arg7 nonCellularCandidateTimeout:(double)arg8 ;
-(int)processRemoteInterfaceChangeMessageWithLocalCallID:(unsigned)arg1 remoteCallID:(unsigned)arg2 remoteData:(void*)arg3 remoteLen:(int)arg4 remoteCandidateVersion:(unsigned short)arg5 ;
-(int)discardRelayBindingForCallID:(unsigned)arg1 withChannelNumber:(int)arg2 ;
-(int)setICETimeout:(double)arg1 ;
-(int)getLoopbackIP:(tagIPPORT*)arg1 ;
-(id)getRemoteCIDForDstIPPort:(tagIPPORT*)arg1 callID:(unsigned)arg2 ;
-(int)getNextBestCandidate:(tagCANDIDATE*)arg1 callID:(unsigned)arg2 isLocal:(int)arg3 IPPortToExclude:(tagIPPORT*)arg4 ;
-(int)detailedErrorCodeForConnectionWithCallID:(unsigned)arg1 ;
-(void)registerDataReceivedHandler:(/*^block*/id)arg1 forCallID:(unsigned)arg2 ;
-(int)sendData:(id)arg1 localCallID:(unsigned)arg2 remoteCallID:(unsigned)arg3 encrypted:(BOOL)arg4 OFTType:(int)arg5 ;
-(void)iceConnectedForCallID:(unsigned)arg1 result:(tagCONNRESULT*)arg2 didReceivePacket:(int)arg3 useRelay:(int)arg4 secretKey:(CFDataRef)arg5 skeResult:(int)arg6 ;
-(void)iceNewCandidatesForCallID:(unsigned)arg1 blob:(char*)arg2 size:(int)arg3 newCandidateVersion:(unsigned short)arg4 ;
-(void)iceShouldNominateNewCandidate:(tagCANDIDATEPAIR*)arg1 forCallID:(unsigned)arg2 interfaceMask:(int)arg3 nominated:(int*)arg4 demote:(int*)arg5 connectionPriority:(int*)arg6 replaceOnly:(int*)arg7 ;
-(void)iceRemoveIPPort:(tagIPPORT*)arg1 forCallID:(unsigned)arg2 isLocalInterface:(BOOL)arg3 ;
-(void)receivedDataPacket:(char*)arg1 length:(int)arg2 forCallID:(unsigned)arg3 encrypted:(BOOL)arg4 OFTType:(int)arg5 ;
-(int)setupDTLSSecurity:(unsigned)arg1 connectionResult:(tagCONNRESULT*)arg2 completionHandler:(/*^block*/id)arg3 ;
-(int)sendUDPPacketReliableEncrypted:(id)arg1 localIPPort:(tagIPPORT*)arg2 destinationIPPort:(tagIPPORT*)arg3 oftType:(int)arg4 ;
-(int)updateQoS:(BOOL)arg1 ;
-(void)setARPLHandler:(/*^block*/id)arg1 ;
-(int)getCellTechForCallID:(unsigned)arg1 localCellTech:(int*)arg2 isLocalCellularQoSEnabled:(int*)arg3 remoteCellTech:(int*)arg4 isRemoteCellularQoSEnabled:(int*)arg5 ;
@end
