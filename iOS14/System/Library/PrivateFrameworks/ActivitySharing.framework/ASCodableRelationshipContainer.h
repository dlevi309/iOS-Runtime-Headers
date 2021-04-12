/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ASCodableCloudKitRelationship, NSData;

@interface ASCodableRelationshipContainer : PBCodable <NSCopying> {

	long long _version;
	ASCodableCloudKitRelationship* _relationship;
	NSData* _relationshipShareID;
	NSData* _remoteActivityShareID;
	NSData* _remoteRelationshipShareID;
	NSData* _systemFieldsOnlyRecord;
	SCD_Struct_AS1 _has;

}

@property (nonatomic,readonly) BOOL hasRelationship; 
@property (nonatomic,retain) ASCodableCloudKitRelationship * relationship;              //@synthesize relationship=_relationship - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;                                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemFieldsOnlyRecord; 
@property (nonatomic,retain) NSData * systemFieldsOnlyRecord;                           //@synthesize systemFieldsOnlyRecord=_systemFieldsOnlyRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasRelationshipShareID; 
@property (nonatomic,retain) NSData * relationshipShareID;                              //@synthesize relationshipShareID=_relationshipShareID - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteRelationshipShareID; 
@property (nonatomic,retain) NSData * remoteRelationshipShareID;                        //@synthesize remoteRelationshipShareID=_remoteRelationshipShareID - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteActivityShareID; 
@property (nonatomic,retain) NSData * remoteActivityShareID;                            //@synthesize remoteActivityShareID=_remoteActivityShareID - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(ASCodableCloudKitRelationship *)relationship;
-(void)mergeFrom:(id)arg1 ;
-(void)setRelationship:(ASCodableCloudKitRelationship *)arg1 ;
-(BOOL)hasRelationship;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)systemFieldsOnlyRecord;
-(NSData *)remoteRelationshipShareID;
-(void)setRemoteRelationshipShareID:(NSData *)arg1 ;
-(void)setRelationshipShareID:(NSData *)arg1 ;
-(void)setSystemFieldsOnlyRecord:(NSData *)arg1 ;
-(NSData *)relationshipShareID;
-(void)setRemoteActivityShareID:(NSData *)arg1 ;
-(NSData *)remoteActivityShareID;
-(BOOL)hasSystemFieldsOnlyRecord;
-(BOOL)hasRelationshipShareID;
-(BOOL)hasRemoteRelationshipShareID;
-(BOOL)hasRemoteActivityShareID;
@end

