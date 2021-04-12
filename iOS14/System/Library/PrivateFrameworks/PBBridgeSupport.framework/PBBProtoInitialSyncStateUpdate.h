/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBBProtoInitialSyncStateUpdate : PBCodable <NSCopying> {

	double _progress;
	unsigned _state;
	SCD_Struct_PB1 _has;

}

@property (assign,nonatomic) BOOL hasProgress; 
@property (assign,nonatomic) double progress;               //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) unsigned state;                //@synthesize state=_state - In the implementation block
-(id)dictionaryRepresentation;
-(double)progress;
-(BOOL)hasState;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasState:(BOOL)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setState:(unsigned)arg1 ;
-(unsigned long long)hash;
-(unsigned)state;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasProgress;
-(void)setHasProgress:(BOOL)arg1 ;
@end

