/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NPKProtoStandalonePaymentRemoteCredential *)remoteCredential;
-(void)setRemoteCredential:(NPKProtoStandalonePaymentRemoteCredential *)arg1 ;
-(NSString *)flowIdentifier;
-(void)setFlowIdentifier:(NSString *)arg1 ;
-(BOOL)hasRemoteCredential;
-(void)setCreditAccountCredential:(NPKProtoStandaloneCreditAccountCredential *)arg1 ;
-(BOOL)hasFlowIdentifier;
-(BOOL)hasCreditAccountCredential;
-(NPKProtoStandaloneCreditAccountCredential *)creditAccountCredential;
@end

