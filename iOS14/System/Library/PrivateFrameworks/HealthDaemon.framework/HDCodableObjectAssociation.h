/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HDCodableObjectAssociation : PBCodable <NSCopying> {

	NSData* _associationUuid;
	NSData* _objectUuids;

}

@property (nonatomic,readonly) BOOL hasAssociationUuid; 
@property (nonatomic,retain) NSData * associationUuid;               //@synthesize associationUuid=_associationUuid - In the implementation block
@property (nonatomic,readonly) BOOL hasObjectUuids; 
@property (nonatomic,retain) NSData * objectUuids;                   //@synthesize objectUuids=_objectUuids - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAssociationUUID:(id)arg1 ;
-(void)setObjectUuids:(NSData *)arg1 ;
-(id)decodedAssociationUUID;
-(NSData *)objectUuids;
-(void)setAssociationUuid:(NSData *)arg1 ;
-(BOOL)hasAssociationUuid;
-(BOOL)hasObjectUuids;
-(NSData *)associationUuid;
@end

