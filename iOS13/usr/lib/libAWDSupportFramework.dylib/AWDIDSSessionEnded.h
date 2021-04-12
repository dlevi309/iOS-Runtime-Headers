/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSSessionEnded : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _callDuration;
	unsigned _conferenceMiscError;
	unsigned _connectDuration;
	unsigned _connectionType;
	unsigned _currentNatType;
	unsigned _dataRate;
	unsigned _endedReason;
	unsigned _gameKitError;
	int _genericError;
	int _gksError;
	int _gksReturnCode;
	NSString* _guid;
	unsigned _isInitiator;
	unsigned _isNetworkActive;
	unsigned _isNetworkEnabled;
	unsigned _isNetworkReachable;
	int _linkQuality;
	unsigned _localNetworkConnection;
	unsigned _networkCheckResult;
	unsigned _relayConnectDuration;
	unsigned _remoteNatType;
	unsigned _remoteNetworkConnection;
	unsigned _usesRelay;
	SCD_Struct_AW20 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                               //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasEndedReason; 
@property (assign,nonatomic) unsigned endedReason;                          //@synthesize endedReason=_endedReason - In the implementation block
@property (assign,nonatomic) BOOL hasGenericError; 
@property (assign,nonatomic) int genericError;                              //@synthesize genericError=_genericError - In the implementation block
@property (assign,nonatomic) BOOL hasGameKitError; 
@property (assign,nonatomic) unsigned gameKitError;                         //@synthesize gameKitError=_gameKitError - In the implementation block
@property (assign,nonatomic) BOOL hasConferenceMiscError; 
@property (assign,nonatomic) unsigned conferenceMiscError;                  //@synthesize conferenceMiscError=_conferenceMiscError - In the implementation block
@property (assign,nonatomic) BOOL hasCallDuration; 
@property (assign,nonatomic) unsigned callDuration;                         //@synthesize callDuration=_callDuration - In the implementation block
@property (assign,nonatomic) BOOL hasIsNetworkEnabled; 
@property (assign,nonatomic) unsigned isNetworkEnabled;                     //@synthesize isNetworkEnabled=_isNetworkEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsNetworkActive; 
@property (assign,nonatomic) unsigned isNetworkActive;                      //@synthesize isNetworkActive=_isNetworkActive - In the implementation block
@property (assign,nonatomic) BOOL hasIsNetworkReachable; 
@property (assign,nonatomic) unsigned isNetworkReachable;                   //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkCheckResult; 
@property (assign,nonatomic) unsigned networkCheckResult;                   //@synthesize networkCheckResult=_networkCheckResult - In the implementation block
@property (assign,nonatomic) BOOL hasDataRate; 
@property (assign,nonatomic) unsigned dataRate;                             //@synthesize dataRate=_dataRate - In the implementation block
@property (assign,nonatomic) BOOL hasGksError; 
@property (assign,nonatomic) int gksError;                                  //@synthesize gksError=_gksError - In the implementation block
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
@property (assign,nonatomic) BOOL hasIsInitiator; 
@property (assign,nonatomic) unsigned isInitiator;                          //@synthesize isInitiator=_isInitiator - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                               //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasGksReturnCode; 
@property (assign,nonatomic) int gksReturnCode;                             //@synthesize gksReturnCode=_gksReturnCode - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned)connectionType;
-(unsigned)isInitiator;
-(void)setIsInitiator:(unsigned)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)isNetworkReachable;
-(unsigned)callDuration;
-(int)linkQuality;
-(void)setLinkQuality:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(BOOL)hasGuid;
-(void)setCallDuration:(unsigned)arg1 ;
-(BOOL)hasCallDuration;
-(void)setHasCallDuration:(BOOL)arg1 ;
-(void)setIsNetworkReachable:(unsigned)arg1 ;
-(unsigned)connectDuration;
-(void)setConnectDuration:(unsigned)arg1 ;
-(void)setHasConnectDuration:(BOOL)arg1 ;
-(BOOL)hasConnectDuration;
-(void)setGenericError:(int)arg1 ;
-(int)genericError;
-(void)setRemoteNetworkConnection:(unsigned)arg1 ;
-(void)setLocalNetworkConnection:(unsigned)arg1 ;
-(void)setUsesRelay:(unsigned)arg1 ;
-(void)setCurrentNatType:(unsigned)arg1 ;
-(void)setRemoteNatType:(unsigned)arg1 ;
-(void)setRelayConnectDuration:(unsigned)arg1 ;
-(unsigned)remoteNetworkConnection;
-(unsigned)localNetworkConnection;
-(unsigned)usesRelay;
-(unsigned)currentNatType;
-(unsigned)remoteNatType;
-(unsigned)relayConnectDuration;
-(void)setEndedReason:(unsigned)arg1 ;
-(void)setGameKitError:(unsigned)arg1 ;
-(void)setConferenceMiscError:(unsigned)arg1 ;
-(void)setIsNetworkEnabled:(unsigned)arg1 ;
-(void)setIsNetworkActive:(unsigned)arg1 ;
-(void)setNetworkCheckResult:(unsigned)arg1 ;
-(void)setDataRate:(unsigned)arg1 ;
-(void)setGksError:(int)arg1 ;
-(void)setGksReturnCode:(int)arg1 ;
-(unsigned)endedReason;
-(unsigned)gameKitError;
-(unsigned)conferenceMiscError;
-(unsigned)isNetworkEnabled;
-(unsigned)isNetworkActive;
-(unsigned)networkCheckResult;
-(unsigned)dataRate;
-(int)gksError;
-(int)gksReturnCode;
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
-(void)setHasEndedReason:(BOOL)arg1 ;
-(BOOL)hasEndedReason;
-(void)setHasGenericError:(BOOL)arg1 ;
-(BOOL)hasGenericError;
-(void)setHasGameKitError:(BOOL)arg1 ;
-(BOOL)hasGameKitError;
-(void)setHasConferenceMiscError:(BOOL)arg1 ;
-(BOOL)hasConferenceMiscError;
-(void)setHasIsNetworkEnabled:(BOOL)arg1 ;
-(BOOL)hasIsNetworkEnabled;
-(void)setHasIsNetworkActive:(BOOL)arg1 ;
-(BOOL)hasIsNetworkActive;
-(void)setHasIsNetworkReachable:(BOOL)arg1 ;
-(BOOL)hasIsNetworkReachable;
-(void)setHasNetworkCheckResult:(BOOL)arg1 ;
-(BOOL)hasNetworkCheckResult;
-(void)setHasDataRate:(BOOL)arg1 ;
-(BOOL)hasDataRate;
-(void)setHasGksError:(BOOL)arg1 ;
-(BOOL)hasGksError;
-(void)setHasIsInitiator:(BOOL)arg1 ;
-(BOOL)hasIsInitiator;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasLinkQuality;
-(void)setHasGksReturnCode:(BOOL)arg1 ;
-(BOOL)hasGksReturnCode;
@end

