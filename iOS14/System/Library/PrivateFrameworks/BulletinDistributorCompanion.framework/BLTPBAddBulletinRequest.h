/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(BOOL)hasDate;
-(void)mergeFrom:(id)arg1 ;
-(void)setDate:(double)arg1 ;
-(BLTPBBulletin *)bulletin;
-(id)description;
-(unsigned)updateType;
-(BOOL)shouldPlayLightsAndSirens;
-(void)setHasDate:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setUpdateType:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(double)date;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBulletin:(BLTPBBulletin *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
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

