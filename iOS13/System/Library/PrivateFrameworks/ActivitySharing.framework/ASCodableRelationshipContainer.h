/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(ASCodableCloudKitRelationship *)relationship;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)setRelationship:(ASCodableCloudKitRelationship *)arg1 ;
-(BOOL)hasRelationship;
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

