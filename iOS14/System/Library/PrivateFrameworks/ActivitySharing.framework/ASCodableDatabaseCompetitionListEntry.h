/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ASCodableDatabaseCompetitionListEntry : PBCodable <NSCopying> {

	long long _owner;
	long long _type;
	NSData* _friendUUID;
	NSData* _systemFieldsOnlyRecord;
	SCD_Struct_AS4 _has;

}

@property (nonatomic,readonly) BOOL hasFriendUUID; 
@property (nonatomic,retain) NSData * friendUUID;                           //@synthesize friendUUID=_friendUUID - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemFieldsOnlyRecord; 
@property (nonatomic,retain) NSData * systemFieldsOnlyRecord;               //@synthesize systemFieldsOnlyRecord=_systemFieldsOnlyRecord - In the implementation block
@property (assign,nonatomic) BOOL hasOwner; 
@property (assign,nonatomic) long long owner;                               //@synthesize owner=_owner - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasType:(BOOL)arg1 ;
-(long long)owner;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSData *)friendUUID;
-(void)setFriendUUID:(NSData *)arg1 ;
-(id)description;
-(BOOL)hasOwner;
-(void)setOwner:(long long)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasOwner:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasFriendUUID;
-(NSData *)systemFieldsOnlyRecord;
-(void)setSystemFieldsOnlyRecord:(NSData *)arg1 ;
-(BOOL)hasSystemFieldsOnlyRecord;
@end

