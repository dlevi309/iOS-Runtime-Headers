/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDCodableMessageVersion : PBCodable <NSCopying> {

	int _compatibilityVersion;
	int _entityVersion;
	SCD_Struct_HD12 _has;

}

@property (assign,nonatomic) BOOL hasEntityVersion; 
@property (assign,nonatomic) int entityVersion;                         //@synthesize entityVersion=_entityVersion - In the implementation block
@property (assign,nonatomic) BOOL hasCompatibilityVersion; 
@property (assign,nonatomic) int compatibilityVersion;                  //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)compatibilityVersion;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCompatibilityVersion:(int)arg1 ;
-(void)setEntityVersion:(int)arg1 ;
-(void)setHasEntityVersion:(BOOL)arg1 ;
-(BOOL)hasEntityVersion;
-(void)setHasCompatibilityVersion:(BOOL)arg1 ;
-(BOOL)hasCompatibilityVersion;
-(int)entityVersion;
@end

