/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKProtobufCloudStoreZoneInvitation;

@interface PKProtobufCloudStoreZoneInvitationRequest : PBRequest <NSCopying> {

	PKProtobufCloudStoreZoneInvitation* _invitation;
	unsigned _version;

}

@property (assign,nonatomic) unsigned version;                                             //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasInvitation; 
@property (nonatomic,retain) PKProtobufCloudStoreZoneInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(PKProtobufCloudStoreZoneInvitation *)invitation;
-(void)setInvitation:(PKProtobufCloudStoreZoneInvitation *)arg1 ;
-(unsigned)version;
-(BOOL)hasInvitation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

