/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext;

@interface NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryStepContext : PBCodable <NSCopying> {

	NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext* _secondaryManualEntryStepContext;

}

@property (nonatomic,retain) NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext * secondaryManualEntryStepContext;              //@synthesize secondaryManualEntryStepContext=_secondaryManualEntryStepContext - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSecondaryManualEntryStepContext:(NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext *)arg1 ;
-(NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext *)secondaryManualEntryStepContext;
@end

