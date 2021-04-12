/*
* Generated on Thursday, January 14, 2021 at 2:29:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface AWDWifiMostUsedNetworks : PBCodable <NSCopying> {

	double _timeUsed;
	unsigned _apOUI;
	NSData* _apOui;
	NSString* _bundleID;
	int _networkScore;
	unsigned _networkScoreBitMap;
	unsigned _securityType;
	unsigned _switchToCount;
	unsigned _switchedAwayFromCount;
	unsigned _timeUsedMinutes;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) BOOL hasApOUI; 
@property (assign,nonatomic) unsigned apOUI;                              //@synthesize apOUI=_apOUI - In the implementation block
@property (assign,nonatomic) BOOL hasSecurityType; 
@property (assign,nonatomic) unsigned securityType;                       //@synthesize securityType=_securityType - In the implementation block
@property (assign,nonatomic) BOOL hasTimeUsed; 
@property (assign,nonatomic) double timeUsed;                             //@synthesize timeUsed=_timeUsed - In the implementation block
@property (nonatomic,readonly) BOOL hasApOui; 
@property (nonatomic,retain) NSData * apOui;                              //@synthesize apOui=_apOui - In the implementation block
@property (assign,nonatomic) BOOL hasTimeUsedMinutes; 
@property (assign,nonatomic) unsigned timeUsedMinutes;                    //@synthesize timeUsedMinutes=_timeUsedMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkScoreBitMap; 
@property (assign,nonatomic) unsigned networkScoreBitMap;                 //@synthesize networkScoreBitMap=_networkScoreBitMap - In the implementation block
@property (assign,nonatomic) BOOL hasSwitchedAwayFromCount; 
@property (assign,nonatomic) unsigned switchedAwayFromCount;              //@synthesize switchedAwayFromCount=_switchedAwayFromCount - In the implementation block
@property (assign,nonatomic) BOOL hasSwitchToCount; 
@property (assign,nonatomic) unsigned switchToCount;                      //@synthesize switchToCount=_switchToCount - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkScore; 
@property (assign,nonatomic) int networkScore;                            //@synthesize networkScore=_networkScore - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasBundleID;
-(BOOL)hasSecurityType;
-(void)setBundleID:(NSString *)arg1 ;
-(unsigned)securityType;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(void)setSecurityType:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)apOUI;
-(NSData *)apOui;
-(id)description;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setSwitchedAwayFromCount:(unsigned)arg1 ;
-(void)setNetworkScore:(int)arg1 ;
-(int)networkScore;
-(void)setHasSwitchedAwayFromCount:(BOOL)arg1 ;
-(BOOL)hasSwitchedAwayFromCount;
-(void)setSwitchToCount:(unsigned)arg1 ;
-(void)setHasSwitchToCount:(BOOL)arg1 ;
-(BOOL)hasSwitchToCount;
-(void)setHasNetworkScore:(BOOL)arg1 ;
-(BOOL)hasNetworkScore;
-(unsigned)switchedAwayFromCount;
-(unsigned)switchToCount;
-(void)setApOUI:(unsigned)arg1 ;
-(BOOL)hasApOUI;
-(void)setApOui:(NSData *)arg1 ;
-(void)setHasApOUI:(BOOL)arg1 ;
-(void)setTimeUsed:(double)arg1 ;
-(void)setHasTimeUsed:(BOOL)arg1 ;
-(BOOL)hasTimeUsed;
-(BOOL)hasApOui;
-(void)setTimeUsedMinutes:(unsigned)arg1 ;
-(void)setHasTimeUsedMinutes:(BOOL)arg1 ;
-(BOOL)hasTimeUsedMinutes;
-(void)setNetworkScoreBitMap:(unsigned)arg1 ;
-(void)setHasNetworkScoreBitMap:(BOOL)arg1 ;
-(BOOL)hasNetworkScoreBitMap;
-(double)timeUsed;
-(unsigned)timeUsedMinutes;
-(unsigned)networkScoreBitMap;
@end

