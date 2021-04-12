/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDAppBBPower : PBCodable <NSCopying> {

	NSString* _bundleName;
	unsigned _powerMicroWatt;
	int _rAT;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasRAT; 
@property (assign,nonatomic) int rAT;                              //@synthesize rAT=_rAT - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleName; 
@property (nonatomic,retain) NSString * bundleName;                //@synthesize bundleName=_bundleName - In the implementation block
@property (assign,nonatomic) BOOL hasPowerMicroWatt; 
@property (assign,nonatomic) unsigned powerMicroWatt;              //@synthesize powerMicroWatt=_powerMicroWatt - In the implementation block
-(id)dictionaryRepresentation;
-(int)rAT;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)bundleName;
-(id)description;
-(BOOL)hasRAT;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRAT:(int)arg1 ;
-(void)setBundleName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasBundleName;
-(void)setPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasRAT:(BOOL)arg1 ;
-(id)rATAsString:(int)arg1 ;
-(int)StringAsRAT:(id)arg1 ;
-(void)setHasPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasPowerMicroWatt;
-(unsigned)powerMicroWatt;
@end

