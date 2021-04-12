/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBNetworkSession : PBCodable <NSCopying> {

	unsigned long long _sessionID;
	int _cellularRadioAccessTechnology;
	BOOL _wifiReachable;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) unsigned long long sessionID;                       //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasWifiReachable; 
@property (assign,nonatomic) BOOL wifiReachable;                                 //@synthesize wifiReachable=_wifiReachable - In the implementation block
@property (assign,nonatomic) BOOL hasCellularRadioAccessTechnology; 
@property (assign,nonatomic) int cellularRadioAccessTechnology;                  //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)sessionID;
-(void)setSessionID:(unsigned long long)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(void)setWifiReachable:(BOOL)arg1 ;
-(int)cellularRadioAccessTechnology;
-(void)setCellularRadioAccessTechnology:(int)arg1 ;
-(BOOL)wifiReachable;
-(void)setHasCellularRadioAccessTechnology:(BOOL)arg1 ;
-(BOOL)hasCellularRadioAccessTechnology;
-(void)setHasWifiReachable:(BOOL)arg1 ;
-(BOOL)hasWifiReachable;
@end

