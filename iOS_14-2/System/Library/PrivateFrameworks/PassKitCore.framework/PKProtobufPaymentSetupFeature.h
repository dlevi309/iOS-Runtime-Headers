/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKProtobufPaymentSetupFeature : PBCodable <NSCopying> {

	unsigned long long _state;
	unsigned long long _type;
	SCD_Struct_PK7 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasState;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)description;
-(void)setHasState:(BOOL)arg1 ;
-(unsigned long long)type;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)state;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

