/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoAcceptSubcredentialInvitationRequest : PBRequest <NSCopying> {

	NSData* _invitationData;
	NSData* _metadataData;

}

@property (nonatomic,readonly) BOOL hasInvitationData; 
@property (nonatomic,retain) NSData * invitationData;               //@synthesize invitationData=_invitationData - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadataData; 
@property (nonatomic,retain) NSData * metadataData;                 //@synthesize metadataData=_metadataData - In the implementation block
-(id)dictionaryRepresentation;
-(NSData *)invitationData;
-(void)setInvitationData:(NSData *)arg1 ;
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
-(BOOL)hasInvitationData;
-(BOOL)hasMetadataData;
@end

