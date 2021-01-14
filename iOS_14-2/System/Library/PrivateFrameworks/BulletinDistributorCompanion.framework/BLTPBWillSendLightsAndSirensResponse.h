/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BLTPBWillSendLightsAndSirensResponse : PBCodable <NSCopying> {

	unsigned _additionalWait;
	BOOL _willSend;
	SCD_Struct_BL3 _has;

}

@property (assign,nonatomic) BOOL hasWillSend; 
@property (assign,nonatomic) BOOL willSend;                        //@synthesize willSend=_willSend - In the implementation block
@property (assign,nonatomic) BOOL hasAdditionalWait; 
@property (assign,nonatomic) unsigned additionalWait;              //@synthesize additionalWait=_additionalWait - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setWillSend:(BOOL)arg1 ;
-(void)setAdditionalWait:(unsigned)arg1 ;
-(void)setHasWillSend:(BOOL)arg1 ;
-(BOOL)hasWillSend;
-(void)setHasAdditionalWait:(BOOL)arg1 ;
-(BOOL)hasAdditionalWait;
-(BOOL)willSend;
-(unsigned)additionalWait;
@end

