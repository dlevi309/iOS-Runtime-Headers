/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasPriority;
-(void)setHasPriority:(BOOL)arg1 ;
-(long long)cardType;
-(void)setCardType:(long long)arg1 ;
-(long long)supportedProtocols;
-(void)setSupportedProtocols:(long long)arg1 ;
-(BOOL)hasCardType;
-(void)setHasCardType:(BOOL)arg1 ;
-(void)setHasSupportedProtocols:(BOOL)arg1 ;
-(BOOL)hasSupportedProtocols;
@end

