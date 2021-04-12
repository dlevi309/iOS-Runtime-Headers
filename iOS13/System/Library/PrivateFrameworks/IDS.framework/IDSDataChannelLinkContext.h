/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


#import <IDS/IDS-Structs.h>
@class _IDSDataChannelLinkContext, NSUUID, NSData;

@interface IDSDataChannelLinkContext : NSObject {

	_IDSDataChannelLinkContext* _internal;

}

@property (readonly) char linkID; 
@property (readonly) NSUUID * linkUUID; 
@property (readonly) NSUUID * QRSessionID; 
@property (readonly) unsigned char networkType; 
@property (readonly) long long connectionType; 
@property (readonly) unsigned RATType; 
@property (readonly) unsigned short maxMTU; 
@property (readonly) long long relayServerProvider; 
@property (readonly) NSData * relaySessionToken; 
@property (readonly) NSData * relaySessionKey; 
@property (readonly) unsigned char remoteNetworkType; 
@property (readonly) long long remoteConnectionType; 
@property (readonly) unsigned remoteRATType; 
@property (readonly) unsigned maxBitrate; 
@property (readonly) BOOL serverIsDegraded; 
@property (readonly) unsigned short localLinkFlags; 
@property (readonly) unsigned short remoteLinkFlags; 
-(id)description;
-(long long)connectionType;
-(unsigned char)networkType;
-(NSData *)relaySessionKey;
-(NSData *)relaySessionToken;
-(id)initWithDummyInformation;
-(id)initWithLinkID:(char)arg1 linkUUID:(id)arg2 QRSessionID:(id)arg3 networkType:(unsigned char)arg4 connectionType:(long long)arg5 RATType:(unsigned)arg6 MTU:(unsigned short)arg7 remoteNetworkType:(unsigned char)arg8 remoteConnectionType:(long long)arg9 remoteRATType:(unsigned)arg10 maxBitrate:(unsigned)arg11 relayServerProvider:(long long)arg12 relaySessionToken:(id)arg13 relaySessionKey:(id)arg14 serverIsDegraded:(BOOL)arg15 ;
-(id)initWithAttributes:(SCD_Struct_ID5*)arg1 maxBitrate:(unsigned)arg2 relayServerProvider:(long long)arg3 relaySessionToken:(id)arg4 relaySessionKey:(id)arg5 ;
-(char)linkID;
-(NSUUID *)linkUUID;
-(NSUUID *)QRSessionID;
-(unsigned)RATType;
-(unsigned short)maxMTU;
-(unsigned)maxBitrate;
-(unsigned char)remoteNetworkType;
-(long long)remoteConnectionType;
-(unsigned)remoteRATType;
-(long long)relayServerProvider;
-(BOOL)serverIsDegraded;
-(void)setRATType:(unsigned)arg1 ;
-(void)setMTU:(unsigned short)arg1 ;
-(void)setMaxBitrate:(unsigned)arg1 ;
-(unsigned short)remoteLinkFlags;
-(unsigned short)localLinkFlags;
@end

