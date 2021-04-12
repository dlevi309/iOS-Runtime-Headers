/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStateDuration:(unsigned long long)arg1 ;
-(void)setHasStateDuration:(BOOL)arg1 ;
-(BOOL)hasStateDuration;
-(unsigned long long)stateDuration;
-(void)setStateChanges:(unsigned)arg1 ;
-(void)setHasStateChanges:(BOOL)arg1 ;
-(BOOL)hasStateChanges;
-(unsigned)stateChanges;
@end

