/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)bundleName;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBundleName:(NSString *)arg1 ;
-(BOOL)hasBundleName;
-(void)setPowerMicroWatt:(unsigned)arg1 ;
-(void)setRAT:(int)arg1 ;
-(int)rAT;
-(void)setHasRAT:(BOOL)arg1 ;
-(BOOL)hasRAT;
-(id)rATAsString:(int)arg1 ;
-(int)StringAsRAT:(id)arg1 ;
-(void)setHasPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasPowerMicroWatt;
-(unsigned)powerMicroWatt;
@end

