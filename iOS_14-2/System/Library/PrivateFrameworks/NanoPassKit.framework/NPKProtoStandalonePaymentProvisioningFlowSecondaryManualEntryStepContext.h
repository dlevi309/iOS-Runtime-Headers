/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandalonePaymentCredentialUnion, NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext, NPKProtoStandalonePaymentRemoteCredential;

@interface NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext : PBCodable <NSCopying> {

	NPKProtoStandalonePaymentCredentialUnion* _credential;
	NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext* _manualEntryStepContext;
	NPKProtoStandalonePaymentRemoteCredential* _remoteCredential;
	BOOL _allowsAddingDifferentCard;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,retain) NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext * manualEntryStepContext;              //@synthesize manualEntryStepContext=_manualEntryStepContext - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteCredential; 
@property (nonatomic,retain) NPKProtoStandalonePaymentRemoteCredential * remoteCredential;                                          //@synthesize remoteCredential=_remoteCredential - In the implementation block
@property (nonatomic,readonly) BOOL hasCredential; 
@property (nonatomic,retain) NPKProtoStandalonePaymentCredentialUnion * credential;                                                 //@synthesize credential=_credential - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsAddingDifferentCard; 
@property (assign,nonatomic) BOOL allowsAddingDifferentCard;                                                                        //@synthesize allowsAddingDifferentCard=_allowsAddingDifferentCard - In the implementation block
-(id)dictionaryRepresentation;
-(NPKProtoStandalonePaymentCredentialUnion *)credential;
-(BOOL)hasCredential;
-(void)mergeFrom:(id)arg1 ;
-(void)setCredential:(NPKProtoStandalonePaymentCredentialUnion *)arg1 ;
-(id)description;
-(void)setRemoteCredential:(NPKProtoStandalonePaymentRemoteCredential *)arg1 ;
-(unsigned long long)hash;
-(NPKProtoStandalonePaymentRemoteCredential *)remoteCredential;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setManualEntryStepContext:(NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *)arg1 ;
-(NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *)manualEntryStepContext;
-(void)setAllowsAddingDifferentCard:(BOOL)arg1 ;
-(BOOL)allowsAddingDifferentCard;
-(BOOL)hasRemoteCredential;
-(void)setHasAllowsAddingDifferentCard:(BOOL)arg1 ;
-(BOOL)hasAllowsAddingDifferentCard;
@end

