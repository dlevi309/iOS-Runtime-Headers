/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NPKProtoStandalonePaymentSetupProductPaymentOption : PBCodable <NSCopying> {

	long long _cardType;
	unsigned long long _priority;
	long long _supportedProtocols;
	SCD_Struct_NP3 _has;

}

@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) unsigned long long priority;               //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) BOOL hasCardType; 
@property (assign,nonatomic) long long cardType;                        //@synthesize cardType=_cardType - In the implementation block
@property (assign,nonatomic) BOOL hasSupportedProtocols; 
@property (assign,nonatomic) long long supportedProtocols;              //@synthesize supportedProtocols=_supportedProtocols - In the implementation block
-(id)dictionaryRepresentation;
-(void)setSupportedProtocols:(long long)arg1 ;
-(long long)supportedProtocols;
-(void)setHasPriority:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(long long)cardType;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPriority;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCardType:(long long)arg1 ;
-(unsigned long long)priority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasCardType:(BOOL)arg1 ;
-(BOOL)hasCardType;
-(void)setHasSupportedProtocols:(BOOL)arg1 ;
-(BOOL)hasSupportedProtocols;
@end

