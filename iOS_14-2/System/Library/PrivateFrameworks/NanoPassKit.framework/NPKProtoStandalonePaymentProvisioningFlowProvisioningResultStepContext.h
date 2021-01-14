/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandaloneError;

@interface NPKProtoStandalonePaymentProvisioningFlowProvisioningResultStepContext : PBCodable <NSCopying> {

	NPKProtoStandaloneError* _error;
	BOOL _cardAdded;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasCardAdded; 
@property (assign,nonatomic) BOOL cardAdded;                               //@synthesize cardAdded=_cardAdded - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) NPKProtoStandaloneError * error;              //@synthesize error=_error - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setError:(NPKProtoStandaloneError *)arg1 ;
-(NPKProtoStandaloneError *)error;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCardAdded:(BOOL)arg1 ;
-(BOOL)cardAdded;
-(void)setHasCardAdded:(BOOL)arg1 ;
-(BOOL)hasCardAdded;
@end

