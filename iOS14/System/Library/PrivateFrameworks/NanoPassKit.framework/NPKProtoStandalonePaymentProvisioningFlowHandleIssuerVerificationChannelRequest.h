/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandaloneRequestHeader, NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowHandleIssuerVerificationChannelRequest : PBRequest <NSCopying> {

	NPKProtoStandaloneRequestHeader* _requestHeader;
	NSString* _selectedVerificationChannelIdentifier;

}

@property (nonatomic,retain) NPKProtoStandaloneRequestHeader * requestHeader;               //@synthesize requestHeader=_requestHeader - In the implementation block
@property (nonatomic,readonly) BOOL hasSelectedVerificationChannelIdentifier; 
@property (nonatomic,retain) NSString * selectedVerificationChannelIdentifier;              //@synthesize selectedVerificationChannelIdentifier=_selectedVerificationChannelIdentifier - In the implementation block
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
-(void)setSelectedVerificationChannelIdentifier:(NSString *)arg1 ;
-(BOOL)hasSelectedVerificationChannelIdentifier;
-(NSString *)selectedVerificationChannelIdentifier;
@end

