/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface AWDWiFiMetricsKnownNetworksEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _bundleID;
	unsigned _colocatedState;
	unsigned _eventType;
	int _networkScore;
	unsigned _networkSecurity;
	unsigned _networkTypeBitMap;
	NSData* _oui;
	unsigned _switchToCount;
	unsigned _switchedAwayFromCount;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) unsigned eventType;                          //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkTypeBitMap; 
@property (assign,nonatomic) unsigned networkTypeBitMap;                  //@synthesize networkTypeBitMap=_networkTypeBitMap - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkSecurity; 
@property (assign,nonatomic) unsigned networkSecurity;                    //@synthesize networkSecurity=_networkSecurity - In the implementation block
@property (nonatomic,readonly) BOOL hasOui; 
@property (nonatomic,retain) NSData * oui;                                //@synthesize oui=_oui - In the implementation block
@property (assign,nonatomic) BOOL hasColocatedState; 
@property (assign,nonatomic) unsigned colocatedState;                     //@synthesize colocatedState=_colocatedState - In the implementation block
@property (assign,nonatomic) BOOL hasSwitchedAwayFromCount; 
@property (assign,nonatomic) unsigned switchedAwayFromCount;              //@synthesize switchedAwayFromCount=_switchedAwayFromCount - In the implementation block
@property (assign,nonatomic) BOOL hasSwitchToCount; 
@property (assign,nonatomic) unsigned switchToCount;                      //@synthesize switchToCount=_switchToCount - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkScore; 
@property (assign,nonatomic) int networkScore;                            //@synthesize networkScore=_networkScore - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)eventType;
-(BOOL)hasBundleID;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setEventType:(unsigned)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(void)setOui:(NSData *)arg1 ;
-(BOOL)hasOui;
-(NSData *)oui;
-(void)setColocatedState:(unsigned)arg1 ;
-(void)setHasColocatedState:(BOOL)arg1 ;
-(BOOL)hasColocatedState;
-(unsigned)colocatedState;
-(void)setNetworkTypeBitMap:(unsigned)arg1 ;
-(void)setHasNetworkTypeBitMap:(BOOL)arg1 ;
-(BOOL)hasNetworkTypeBitMap;
-(void)setNetworkSecurity:(unsigned)arg1 ;
-(void)setHasNetworkSecurity:(BOOL)arg1 ;
-(BOOL)hasNetworkSecurity;
-(void)setSwitchedAwayFromCount:(unsigned)arg1 ;
-(void)setHasSwitchedAwayFromCount:(BOOL)arg1 ;
-(BOOL)hasSwitchedAwayFromCount;
-(void)setSwitchToCount:(unsigned)arg1 ;
-(void)setHasSwitchToCount:(BOOL)arg1 ;
-(BOOL)hasSwitchToCount;
-(void)setNetworkScore:(int)arg1 ;
-(void)setHasNetworkScore:(BOOL)arg1 ;
-(BOOL)hasNetworkScore;
-(unsigned)networkTypeBitMap;
-(unsigned)networkSecurity;
-(unsigned)switchedAwayFromCount;
-(unsigned)switchToCount;
-(int)networkScore;
@end

