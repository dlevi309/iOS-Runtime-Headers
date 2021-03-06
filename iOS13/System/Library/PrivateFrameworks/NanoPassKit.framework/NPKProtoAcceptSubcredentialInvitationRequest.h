/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NPKProtoAcceptSubcredentialInvitationRequest : PBRequest <NSCopying> {

	NSString* _invitationIdentifier;
	NSData* _metadataData;

}

@property (nonatomic,readonly) BOOL hasInvitationIdentifier; 
@property (nonatomic,retain) NSString * invitationIdentifier;              //@synthesize invitationIdentifier=_invitationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadataData; 
@property (nonatomic,retain) NSData * metadataData;                        //@synthesize metadataData=_metadataData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)invitationIdentifier;
-(void)setMetadataData:(NSData *)arg1 ;
-(NSData *)metadataData;
-(void)setInvitationIdentifier:(NSString *)arg1 ;
-(BOOL)hasInvitationIdentifier;
-(BOOL)hasMetadataData;
@end

