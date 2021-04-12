/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDCodableRoutineLocationVisit : PBCodable <NSCopying> {

	double _entryTime;
	double _exitTime;
	SCD_Struct_HD11 _has;

}

@property (assign,nonatomic) BOOL hasEntryTime; 
@property (assign,nonatomic) double entryTime;               //@synthesize entryTime=_entryTime - In the implementation block
@property (assign,nonatomic) BOOL hasExitTime; 
@property (assign,nonatomic) double exitTime;                //@synthesize exitTime=_exitTime - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(double)exitTime;
-(unsigned long long)hash;
-(double)entryTime;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasExitTime;
-(void)setEntryTime:(double)arg1 ;
-(void)setExitTime:(double)arg1 ;
-(BOOL)hasEntryTime;
-(void)setHasEntryTime:(BOOL)arg1 ;
-(void)setHasExitTime:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

