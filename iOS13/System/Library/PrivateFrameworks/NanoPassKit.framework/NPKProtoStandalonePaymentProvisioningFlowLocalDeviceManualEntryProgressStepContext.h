/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryProgressStepContext : PBCodable <NSCopying> {

	BOOL _numericEntryPending;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasNumericEntryPending; 
@property (assign,nonatomic) BOOL numericEntryPending;                 //@synthesize numericEntryPending=_numericEntryPending - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setNumericEntryPending:(BOOL)arg1 ;
-(void)setHasNumericEntryPending:(BOOL)arg1 ;
-(BOOL)hasNumericEntryPending;
-(BOOL)numericEntryPending;
@end

