/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBBulletin;

@interface BLTPBAddBulletinRequest : PBRequest <NSCopying> {

	double _date;
	BLTPBBulletin* _bulletin;
	unsigned _updateType;
	BOOL _shouldPlayLightsAndSirens;
	BOOL _trafficRestricted;
	SCD_Struct_BL4 _has;

}

@property (nonatomic,readonly) BOOL hasBulletin; 
@property (nonatomic,retain) BLTPBBulletin * bulletin;                       //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) BOOL hasShouldPlayLightsAndSirens; 
@property (assign,nonatomic) BOOL shouldPlayLightsAndSirens;                 //@synthesize shouldPlayLightsAndSirens=_shouldPlayLightsAndSirens - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                    //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL hasUpdateType; 
@property (assign,nonatomic) unsigned updateType;                            //@synthesize updateType=_updateType - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficRestricted; 
@property (assign,nonatomic) BOOL trafficRestricted;                         //@synthesize trafficRestricted=_trafficRestricted - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)date;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDate;
-(void)setDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)updateType;
-(void)setUpdateType:(unsigned)arg1 ;
-(void)setBulletin:(BLTPBBulletin *)arg1 ;
-(BLTPBBulletin *)bulletin;
-(void)setHasDate:(BOOL)arg1 ;
-(BOOL)shouldPlayLightsAndSirens;
-(void)setHasUpdateType:(BOOL)arg1 ;
-(BOOL)hasUpdateType;
-(void)setShouldPlayLightsAndSirens:(BOOL)arg1 ;
-(void)setTrafficRestricted:(BOOL)arg1 ;
-(BOOL)hasBulletin;
-(void)setHasShouldPlayLightsAndSirens:(BOOL)arg1 ;
-(BOOL)hasShouldPlayLightsAndSirens;
-(void)setHasTrafficRestricted:(BOOL)arg1 ;
-(BOOL)hasTrafficRestricted;
-(BOOL)trafficRestricted;
@end

