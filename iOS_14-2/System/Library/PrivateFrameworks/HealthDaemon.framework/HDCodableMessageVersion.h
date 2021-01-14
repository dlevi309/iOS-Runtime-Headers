/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDCodableMessageVersion : PBCodable <NSCopying> {

	int _compatibilityVersion;
	int _entityVersion;
	SCD_Struct_HD11 _has;

}

@property (assign,nonatomic) BOOL hasEntityVersion; 
@property (assign,nonatomic) int entityVersion;                         //@synthesize entityVersion=_entityVersion - In the implementation block
@property (assign,nonatomic) BOOL hasCompatibilityVersion; 
@property (assign,nonatomic) int compatibilityVersion;                  //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
-(int)compatibilityVersion;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setCompatibilityVersion:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEntityVersion:(int)arg1 ;
-(void)setHasEntityVersion:(BOOL)arg1 ;
-(BOOL)hasEntityVersion;
-(void)setHasCompatibilityVersion:(BOOL)arg1 ;
-(BOOL)hasCompatibilityVersion;
-(int)entityVersion;
@end

