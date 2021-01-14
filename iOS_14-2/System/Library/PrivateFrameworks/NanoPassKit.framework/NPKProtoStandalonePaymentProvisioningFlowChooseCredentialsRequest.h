/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NPKProtoStandaloneRequestHeader;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsRequest : PBRequest <NSCopying> {

	NSMutableArray* _chosenPaymentCredentialIdentifiers;
	NPKProtoStandaloneRequestHeader* _requestHeader;

}

@property (nonatomic,retain) NPKProtoStandaloneRequestHeader * requestHeader;                  //@synthesize requestHeader=_requestHeader - In the implementation block
@property (nonatomic,retain) NSMutableArray * chosenPaymentCredentialIdentifiers;              //@synthesize chosenPaymentCredentialIdentifiers=_chosenPaymentCredentialIdentifiers - In the implementation block
+(Class)chosenPaymentCredentialIdentifiersType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NPKProtoStandaloneRequestHeader *)requestHeader;
-(void)setRequestHeader:(NPKProtoStandaloneRequestHeader *)arg1 ;
-(void)addChosenPaymentCredentialIdentifiers:(id)arg1 ;
-(unsigned long long)chosenPaymentCredentialIdentifiersCount;
-(void)clearChosenPaymentCredentialIdentifiers;
-(id)chosenPaymentCredentialIdentifiersAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)chosenPaymentCredentialIdentifiers;
-(void)setChosenPaymentCredentialIdentifiers:(NSMutableArray *)arg1 ;
@end

