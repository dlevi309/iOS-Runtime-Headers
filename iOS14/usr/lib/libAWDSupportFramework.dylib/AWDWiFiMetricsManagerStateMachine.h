/*
* Generated on Thursday, January 14, 2021 at 2:29:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerStateMachine : PBCodable <NSCopying> {

	unsigned long long _stateDuration;
	unsigned _stateChanges;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasStateChanges; 
@property (assign,nonatomic) unsigned stateChanges;                         //@synthesize stateChanges=_stateChanges - In the implementation block
@property (assign,nonatomic) BOOL hasStateDuration; 
@property (assign,nonatomic) unsigned long long stateDuration;              //@synthesize stateDuration=_stateDuration - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasStateChanges;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasStateDuration:(BOOL)arg1 ;
-(void)setHasStateChanges:(BOOL)arg1 ;
-(id)description;
-(unsigned)stateChanges;
-(BOOL)hasStateDuration;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)stateDuration;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStateChanges:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStateDuration:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

