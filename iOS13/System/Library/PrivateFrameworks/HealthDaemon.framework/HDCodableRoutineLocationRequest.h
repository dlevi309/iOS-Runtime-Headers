/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDCodableRoutineLocationRequest : PBRequest <NSCopying> {

	int _locationType;
	SCD_Struct_HD7 _has;

}

@property (assign,nonatomic) BOOL hasLocationType; 
@property (assign,nonatomic) int locationType;                  //@synthesize locationType=_locationType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)locationType;
-(void)setLocationType:(int)arg1 ;
-(void)setHasLocationType:(BOOL)arg1 ;
-(BOOL)hasLocationType;
-(id)locationTypeAsString:(int)arg1 ;
-(int)StringAsLocationType:(id)arg1 ;
@end

