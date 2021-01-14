/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NPKProtoStandalonePaymentApplication : PBCodable <NSCopying> {

	int _state;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                  //@synthesize state=_state - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasState;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasState:(BOOL)arg1 ;
-(void)setState:(int)arg1 ;
-(unsigned long long)hash;
-(int)state;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)stateAsString:(int)arg1 ;
-(int)StringAsState:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

