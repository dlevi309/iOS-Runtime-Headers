/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDFaceTimeCallConnected : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectDuration;
	unsigned _connectionType;
	unsigned _currentNatType;
	NSString* _guid;
	unsigned _isVideo;
	unsigned _localNetworkConnection;
	unsigned _onLockScreen;
	unsigned _relayConnectDuration;
	unsigned _remoteNatType;
	unsigned _remoteNetworkConnection;
	unsigned _usesRelay;
	SCD_Struct_AW13 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                               //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnectDuration; 
@property (assign,nonatomic) unsigned connectDuration;                      //@synthesize connectDuration=_connectDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteNetworkConnection; 
@property (assign,nonatomic) unsigned remoteNetworkConnection;              //@synthesize remoteNetworkConnection=_remoteNetworkConnection - In the implementation block
@property (assign,nonatomic) BOOL hasLocalNetworkConnection; 
@property (assign,nonatomic) unsigned localNetworkConnection;               //@synthesize localNetworkConnection=_localNetworkConnection - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                       //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasUsesRelay; 
@property (assign,nonatomic) unsigned usesRelay;                            //@synthesize usesRelay=_usesRelay - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentNatType; 
@property (assign,nonatomic) unsigned currentNatType;                       //@synthesize currentNatType=_currentNatType - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteNatType; 
@property (assign,nonatomic) unsigned remoteNatType;                        //@synthesize remoteNatType=_remoteNatType - In the implementation block
@property (assign,nonatomic) BOOL hasRelayConnectDuration; 
@property (assign,nonatomic) unsigned relayConnectDuration;                 //@synthesize relayConnectDuration=_relayConnectDuration - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideo; 
@property (assign,nonatomic) unsigned isVideo;                              //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) BOOL hasOnLockScreen; 
@property (assign,nonatomic) unsigned onLockScreen;                         //@synthesize onLockScreen=_onLockScreen - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)guid;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(unsigned)connectionType;
-(BOOL)hasConnectDuration;
-(void)setHasConnectDuration:(BOOL)arg1 ;
-(void)setConnectionType:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(unsigned)connectDuration;
-(BOOL)hasConnectionType;
-(void)mergeFrom:(id)arg1 ;
-(void)setOnLockScreen:(unsigned)arg1 ;
-(id)description;
-(void)setConnectDuration:(unsigned)arg1 ;
-(unsigned)isVideo;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setIsVideo:(unsigned)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)remoteNetworkConnection;
-(unsigned)localNetworkConnection;
-(unsigned)relayConnectDuration;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasGuid;
-(void)setGuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)usesRelay;
-(unsigned)onLockScreen;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setRemoteNetworkConnection:(unsigned)arg1 ;
-(void)setLocalNetworkConnection:(unsigned)arg1 ;
-(void)setUsesRelay:(unsigned)arg1 ;
-(void)setCurrentNatType:(unsigned)arg1 ;
-(void)setRemoteNatType:(unsigned)arg1 ;
-(void)setRelayConnectDuration:(unsigned)arg1 ;
-(unsigned)currentNatType;
-(unsigned)remoteNatType;
-(void)setHasIsVideo:(BOOL)arg1 ;
-(BOOL)hasIsVideo;
-(void)setHasOnLockScreen:(BOOL)arg1 ;
-(BOOL)hasOnLockScreen;
-(void)setHasRemoteNetworkConnection:(BOOL)arg1 ;
-(BOOL)hasRemoteNetworkConnection;
-(void)setHasLocalNetworkConnection:(BOOL)arg1 ;
-(BOOL)hasLocalNetworkConnection;
-(void)setHasUsesRelay:(BOOL)arg1 ;
-(BOOL)hasUsesRelay;
-(void)setHasCurrentNatType:(BOOL)arg1 ;
-(BOOL)hasCurrentNatType;
-(void)setHasRemoteNatType:(BOOL)arg1 ;
-(BOOL)hasRemoteNatType;
-(void)setHasRelayConnectDuration:(BOOL)arg1 ;
-(BOOL)hasRelayConnectDuration;
@end

