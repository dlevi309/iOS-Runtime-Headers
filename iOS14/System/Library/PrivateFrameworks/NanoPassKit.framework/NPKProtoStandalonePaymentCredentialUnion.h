/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandaloneCreditAccountCredential, NSString, NPKProtoStandalonePaymentRemoteCredential;

@interface NPKProtoStandalonePaymentCredentialUnion : PBCodable <NSCopying> {

	NPKProtoStandaloneCreditAccountCredential* _creditAccountCredential;
	NSString* _flowIdentifier;
	NPKProtoStandalonePaymentRemoteCredential* _remoteCredential;

}

@property (nonatomic,readonly) BOOL hasFlowIdentifier; 
@property (nonatomic,retain) NSString * flowIdentifier;                                                        //@synthesize flowIdentifier=_flowIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteCredential; 
@property (nonatomic,retain) NPKProtoStandalonePaymentRemoteCredential * remoteCredential;                     //@synthesize remoteCredential=_remoteCredential - In the implementation block
@property (nonatomic,readonly) BOOL hasCreditAccountCredential; 
@property (nonatomic,retain) NPKProtoStandaloneCreditAccountCredential * creditAccountCredential;              //@synthesize creditAccountCredential=_creditAccountCredential - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)flowIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)setFlowIdentifier:(NSString *)arg1 ;
-(id)description;
-(void)setRemoteCredential:(NPKProtoStandalonePaymentRemoteCredential *)arg1 ;
-(unsigned long long)hash;
-(NPKProtoStandalonePaymentRemoteCredential *)remoteCredential;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasRemoteCredential;
-(void)setCreditAccountCredential:(NPKProtoStandaloneCreditAccountCredential *)arg1 ;
-(BOOL)hasFlowIdentifier;
-(BOOL)hasCreditAccountCredential;
-(NPKProtoStandaloneCreditAccountCredential *)creditAccountCredential;
@end

