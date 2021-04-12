/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
*/

#import <MultipeerConnectivity/MultipeerConnectivity-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDMultipeerSessionPeerConnectivityInfo : PBCodable <NSCopying> {

	unsigned long long _timeAll;
	unsigned long long _timeDTLS;
	unsigned long long _timeICE;
	unsigned long long _timeOSPF;
	unsigned long long _timestamp;
	int _channelPriority;
	unsigned _interfaceType;
	NSString* _sessionID;
	BOOL _authentication;
	BOOL _encryption;
	BOOL _remoteAuthentication;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionID; 
@property (nonatomic,retain) NSString * sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasInterfaceType; 
@property (assign,nonatomic) unsigned interfaceType;                    //@synthesize interfaceType=_interfaceType - In the implementation block
@property (assign,nonatomic) BOOL hasTimeICE; 
@property (assign,nonatomic) unsigned long long timeICE;                //@synthesize timeICE=_timeICE - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDTLS; 
@property (assign,nonatomic) unsigned long long timeDTLS;               //@synthesize timeDTLS=_timeDTLS - In the implementation block
@property (assign,nonatomic) BOOL hasTimeOSPF; 
@property (assign,nonatomic) unsigned long long timeOSPF;               //@synthesize timeOSPF=_timeOSPF - In the implementation block
@property (assign,nonatomic) BOOL hasTimeAll; 
@property (assign,nonatomic) unsigned long long timeAll;                //@synthesize timeAll=_timeAll - In the implementation block
@property (assign,nonatomic) BOOL hasChannelPriority; 
@property (assign,nonatomic) int channelPriority;                       //@synthesize channelPriority=_channelPriority - In the implementation block
@property (assign,nonatomic) BOOL hasAuthentication; 
@property (assign,nonatomic) BOOL authentication;                       //@synthesize authentication=_authentication - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteAuthentication; 
@property (assign,nonatomic) BOOL remoteAuthentication;                 //@synthesize remoteAuthentication=_remoteAuthentication - In the implementation block
@property (assign,nonatomic) BOOL hasEncryption; 
@property (assign,nonatomic) BOOL encryption;                           //@synthesize encryption=_encryption - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setInterfaceType:(unsigned)arg1 ;
-(void)setHasInterfaceType:(BOOL)arg1 ;
-(BOOL)hasInterfaceType;
-(unsigned)interfaceType;
-(BOOL)hasSessionID;
-(BOOL)encryption;
-(BOOL)hasEncryption;
-(BOOL)remoteAuthentication;
-(void)setRemoteAuthentication:(BOOL)arg1 ;
-(void)setEncryption:(BOOL)arg1 ;
-(void)setTimeICE:(unsigned long long)arg1 ;
-(void)setTimeDTLS:(unsigned long long)arg1 ;
-(void)setTimeOSPF:(unsigned long long)arg1 ;
-(void)setTimeAll:(unsigned long long)arg1 ;
-(void)setChannelPriority:(int)arg1 ;
-(void)setAuthentication:(BOOL)arg1 ;
-(void)setHasTimeICE:(BOOL)arg1 ;
-(BOOL)hasTimeICE;
-(void)setHasTimeDTLS:(BOOL)arg1 ;
-(BOOL)hasTimeDTLS;
-(void)setHasTimeOSPF:(BOOL)arg1 ;
-(BOOL)hasTimeOSPF;
-(void)setHasTimeAll:(BOOL)arg1 ;
-(BOOL)hasTimeAll;
-(void)setHasChannelPriority:(BOOL)arg1 ;
-(BOOL)hasChannelPriority;
-(void)setHasAuthentication:(BOOL)arg1 ;
-(BOOL)hasAuthentication;
-(void)setHasRemoteAuthentication:(BOOL)arg1 ;
-(BOOL)hasRemoteAuthentication;
-(void)setHasEncryption:(BOOL)arg1 ;
-(unsigned long long)timeICE;
-(unsigned long long)timeDTLS;
-(unsigned long long)timeOSPF;
-(unsigned long long)timeAll;
-(int)channelPriority;
-(BOOL)authentication;
@end

