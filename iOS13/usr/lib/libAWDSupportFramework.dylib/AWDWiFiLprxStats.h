/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiLprxStats : PBCodable <NSCopying> {

	unsigned long long _phyActiveDuration;
	unsigned long long _phySearchDuration;
	unsigned long long _timestamp;
	unsigned _lprxEnterCnt;
	unsigned _lprxExitCnt;
	unsigned _phyActiveCount;
	unsigned _phySearchCount;
	SCD_Struct_AW17 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasPhySearchDuration; 
@property (assign,nonatomic) unsigned long long phySearchDuration;              //@synthesize phySearchDuration=_phySearchDuration - In the implementation block
@property (assign,nonatomic) BOOL hasPhySearchCount; 
@property (assign,nonatomic) unsigned phySearchCount;                           //@synthesize phySearchCount=_phySearchCount - In the implementation block
@property (assign,nonatomic) BOOL hasPhyActiveDuration; 
@property (assign,nonatomic) unsigned long long phyActiveDuration;              //@synthesize phyActiveDuration=_phyActiveDuration - In the implementation block
@property (assign,nonatomic) BOOL hasPhyActiveCount; 
@property (assign,nonatomic) unsigned phyActiveCount;                           //@synthesize phyActiveCount=_phyActiveCount - In the implementation block
@property (assign,nonatomic) BOOL hasLprxEnterCnt; 
@property (assign,nonatomic) unsigned lprxEnterCnt;                             //@synthesize lprxEnterCnt=_lprxEnterCnt - In the implementation block
@property (assign,nonatomic) BOOL hasLprxExitCnt; 
@property (assign,nonatomic) unsigned lprxExitCnt;                              //@synthesize lprxExitCnt=_lprxExitCnt - In the implementation block
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
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setPhySearchDuration:(unsigned long long)arg1 ;
-(void)setHasPhySearchDuration:(BOOL)arg1 ;
-(BOOL)hasPhySearchDuration;
-(void)setPhySearchCount:(unsigned)arg1 ;
-(void)setHasPhySearchCount:(BOOL)arg1 ;
-(BOOL)hasPhySearchCount;
-(void)setPhyActiveDuration:(unsigned long long)arg1 ;
-(void)setHasPhyActiveDuration:(BOOL)arg1 ;
-(BOOL)hasPhyActiveDuration;
-(void)setPhyActiveCount:(unsigned)arg1 ;
-(void)setHasPhyActiveCount:(BOOL)arg1 ;
-(BOOL)hasPhyActiveCount;
-(void)setLprxEnterCnt:(unsigned)arg1 ;
-(void)setHasLprxEnterCnt:(BOOL)arg1 ;
-(BOOL)hasLprxEnterCnt;
-(void)setLprxExitCnt:(unsigned)arg1 ;
-(void)setHasLprxExitCnt:(BOOL)arg1 ;
-(BOOL)hasLprxExitCnt;
-(unsigned long long)phySearchDuration;
-(unsigned)phySearchCount;
-(unsigned long long)phyActiveDuration;
-(unsigned)phyActiveCount;
-(unsigned)lprxEnterCnt;
-(unsigned)lprxExitCnt;
@end

