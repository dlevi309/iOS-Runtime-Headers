/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setOwner:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(long long)owner;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(NSData *)friendUUID;
-(void)setFriendUUID:(NSData *)arg1 ;
-(BOOL)hasOwner;
-(void)setHasOwner:(BOOL)arg1 ;
-(NSData *)systemFieldsOnlyRecord;
-(void)setSystemFieldsOnlyRecord:(NSData *)arg1 ;
-(BOOL)hasFriendUUID;
-(BOOL)hasSystemFieldsOnlyRecord;
@end

