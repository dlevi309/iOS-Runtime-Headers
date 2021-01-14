/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NPKProtoAcceptSubcredentialInvitationWithIdentifierRequest : PBRequest <NSCopying> {

	NSString* _invitationIdentifier;
	NSData* _metadataData;

}

@property (nonatomic,readonly) BOOL hasInvitationIdentifier; 
@property (nonatomic,retain) NSString * invitationIdentifier;              //@synthesize invitationIdentifier=_invitationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadataData; 
@property (nonatomic,retain) NSData * metadataData;                        //@synthesize metadataData=_metadataData - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)invitationIdentifier;
-(void)setInvitationIdentifier:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMetadataData:(NSData *)arg1 ;
-(NSData *)metadataData;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasInvitationIdentifier;
-(BOOL)hasMetadataData;
@end

