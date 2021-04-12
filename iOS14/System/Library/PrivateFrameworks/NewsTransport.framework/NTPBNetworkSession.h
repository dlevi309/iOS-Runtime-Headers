/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBNetworkSession : PBCodable <NSCopying> {

	unsigned long long _sessionID;
	int _cellularRadioAccessTechnology;
	BOOL _wifiReachable;
	SCD_Struct_NT5 _has;

}

@property (nonatomic,readonly) int pbCellularRadioAccessTechnology; 
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) unsigned long long sessionID;                       //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasWifiReachable; 
@property (assign,nonatomic) BOOL wifiReachable;                                 //@synthesize wifiReachable=_wifiReachable - In the implementation block
@property (assign,nonatomic) BOOL hasCellularRadioAccessTechnology; 
@property (assign,nonatomic) int cellularRadioAccessTechnology;                  //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
-(int)pbCellularRadioAccessTechnology;
-(BOOL)hasSessionID;
-(id)dictionaryRepresentation;
-(void)setHasCellularRadioAccessTechnology:(BOOL)arg1 ;
-(BOOL)hasCellularRadioAccessTechnology;
-(unsigned long long)sessionID;
-(void)setSessionID:(unsigned long long)arg1 ;
-(int)cellularRadioAccessTechnology;
-(void)setCellularRadioAccessTechnology:(int)arg1 ;
-(void)setWifiReachable:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasWifiReachable;
-(BOOL)wifiReachable;
-(void)setHasSessionID:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasWifiReachable:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

