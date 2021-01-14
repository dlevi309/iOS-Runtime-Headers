/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface PKProtobufCloudStoreZoneInvitation : PBCodable <NSCopying> {

	double _dateCreated;
	NSString* _containerIdentifier;
	NSData* _shareInvitationToken;
	NSString* _shareURL;
	unsigned _version;
	NSString* _zoneName;
	SCD_Struct_PK13 _has;

}

@property (assign,nonatomic) unsigned version;                            //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasShareURL; 
@property (nonatomic,retain) NSString * shareURL;                         //@synthesize shareURL=_shareURL - In the implementation block
@property (nonatomic,readonly) BOOL hasShareInvitationToken; 
@property (nonatomic,retain) NSData * shareInvitationToken;               //@synthesize shareInvitationToken=_shareInvitationToken - In the implementation block
@property (nonatomic,readonly) BOOL hasContainerIdentifier; 
@property (nonatomic,retain) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneName; 
@property (nonatomic,retain) NSString * zoneName;                         //@synthesize zoneName=_zoneName - In the implementation block
@property (assign,nonatomic) BOOL hasDateCreated; 
@property (assign,nonatomic) double dateCreated;                          //@synthesize dateCreated=_dateCreated - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)shareURL;
-(double)dateCreated;
-(NSString *)zoneName;
-(void)setShareURL:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDateCreated:(double)arg1 ;
-(BOOL)hasDateCreated;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(id)description;
-(BOOL)hasShareURL;
-(BOOL)hasZoneName;
-(BOOL)hasShareInvitationToken;
-(BOOL)hasContainerIdentifier;
-(void)setHasDateCreated:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)shareInvitationToken;
-(void)setShareInvitationToken:(NSData *)arg1 ;
-(void)setZoneName:(NSString *)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

