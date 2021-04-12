/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiNWActivityScanActivity : PBCodable <NSCopying> {

	unsigned _assocCount;
	unsigned _assocDur;
	unsigned _otherCount;
	unsigned _otherDur;
	unsigned _pnoBSSIDCount;
	unsigned _pnoBSSIDDur;
	unsigned _pnoSSIDCount;
	unsigned _pnoSSIDDur;
	unsigned _roamCount;
	unsigned _roamDur;
	unsigned _userCount;
	unsigned _userDur;
	SCD_Struct_Wi8 _has;

}

@property (assign,nonatomic) BOOL hasUserCount; 
@property (assign,nonatomic) unsigned userCount;                  //@synthesize userCount=_userCount - In the implementation block
@property (assign,nonatomic) BOOL hasUserDur; 
@property (assign,nonatomic) unsigned userDur;                    //@synthesize userDur=_userDur - In the implementation block
@property (assign,nonatomic) BOOL hasRoamCount; 
@property (assign,nonatomic) unsigned roamCount;                  //@synthesize roamCount=_roamCount - In the implementation block
@property (assign,nonatomic) BOOL hasRoamDur; 
@property (assign,nonatomic) unsigned roamDur;                    //@synthesize roamDur=_roamDur - In the implementation block
@property (assign,nonatomic) BOOL hasAssocCount; 
@property (assign,nonatomic) unsigned assocCount;                 //@synthesize assocCount=_assocCount - In the implementation block
@property (assign,nonatomic) BOOL hasAssocDur; 
@property (assign,nonatomic) unsigned assocDur;                   //@synthesize assocDur=_assocDur - In the implementation block
@property (assign,nonatomic) BOOL hasPnoBSSIDCount; 
@property (assign,nonatomic) unsigned pnoBSSIDCount;              //@synthesize pnoBSSIDCount=_pnoBSSIDCount - In the implementation block
@property (assign,nonatomic) BOOL hasPnoBSSIDDur; 
@property (assign,nonatomic) unsigned pnoBSSIDDur;                //@synthesize pnoBSSIDDur=_pnoBSSIDDur - In the implementation block
@property (assign,nonatomic) BOOL hasPnoSSIDCount; 
@property (assign,nonatomic) unsigned pnoSSIDCount;               //@synthesize pnoSSIDCount=_pnoSSIDCount - In the implementation block
@property (assign,nonatomic) BOOL hasPnoSSIDDur; 
@property (assign,nonatomic) unsigned pnoSSIDDur;                 //@synthesize pnoSSIDDur=_pnoSSIDDur - In the implementation block
@property (assign,nonatomic) BOOL hasOtherCount; 
@property (assign,nonatomic) unsigned otherCount;                 //@synthesize otherCount=_otherCount - In the implementation block
@property (assign,nonatomic) BOOL hasOtherDur; 
@property (assign,nonatomic) unsigned otherDur;                   //@synthesize otherDur=_otherDur - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)userCount;
-(void)setUserCount:(unsigned)arg1 ;
-(void)setHasUserCount:(BOOL)arg1 ;
-(BOOL)hasUserCount;
-(void)setUserDur:(unsigned)arg1 ;
-(void)setHasUserDur:(BOOL)arg1 ;
-(BOOL)hasUserDur;
-(void)setRoamCount:(unsigned)arg1 ;
-(void)setHasRoamCount:(BOOL)arg1 ;
-(BOOL)hasRoamCount;
-(void)setRoamDur:(unsigned)arg1 ;
-(void)setHasRoamDur:(BOOL)arg1 ;
-(BOOL)hasRoamDur;
-(void)setAssocCount:(unsigned)arg1 ;
-(void)setHasAssocCount:(BOOL)arg1 ;
-(BOOL)hasAssocCount;
-(void)setAssocDur:(unsigned)arg1 ;
-(void)setHasAssocDur:(BOOL)arg1 ;
-(BOOL)hasAssocDur;
-(void)setPnoBSSIDCount:(unsigned)arg1 ;
-(void)setHasPnoBSSIDCount:(BOOL)arg1 ;
-(BOOL)hasPnoBSSIDCount;
-(void)setPnoBSSIDDur:(unsigned)arg1 ;
-(void)setHasPnoBSSIDDur:(BOOL)arg1 ;
-(BOOL)hasPnoBSSIDDur;
-(void)setPnoSSIDCount:(unsigned)arg1 ;
-(void)setHasPnoSSIDCount:(BOOL)arg1 ;
-(BOOL)hasPnoSSIDCount;
-(void)setPnoSSIDDur:(unsigned)arg1 ;
-(void)setHasPnoSSIDDur:(BOOL)arg1 ;
-(BOOL)hasPnoSSIDDur;
-(void)setOtherCount:(unsigned)arg1 ;
-(void)setHasOtherCount:(BOOL)arg1 ;
-(BOOL)hasOtherCount;
-(void)setOtherDur:(unsigned)arg1 ;
-(void)setHasOtherDur:(BOOL)arg1 ;
-(BOOL)hasOtherDur;
-(unsigned)userDur;
-(unsigned)roamCount;
-(unsigned)roamDur;
-(unsigned)assocCount;
-(unsigned)assocDur;
-(unsigned)pnoBSSIDCount;
-(unsigned)pnoBSSIDDur;
-(unsigned)pnoSSIDCount;
-(unsigned)pnoSSIDDur;
-(unsigned)otherCount;
-(unsigned)otherDur;
@end

