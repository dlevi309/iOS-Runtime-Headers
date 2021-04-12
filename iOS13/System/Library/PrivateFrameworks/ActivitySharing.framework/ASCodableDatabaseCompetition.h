/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ASCodableCloudKitCompetition, NSData;

@interface ASCodableDatabaseCompetition : PBCodable <NSCopying> {

	long long _type;
	ASCodableCloudKitCompetition* _competition;
	NSData* _friendUUID;
	SCD_Struct_AS1 _has;

}

@property (nonatomic,readonly) BOOL hasFriendUUID; 
@property (nonatomic,retain) NSData * friendUUID;                                     //@synthesize friendUUID=_friendUUID - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) long long type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasCompetition; 
@property (nonatomic,retain) ASCodableCloudKitCompetition * competition;              //@synthesize competition=_competition - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(NSData *)friendUUID;
-(void)setFriendUUID:(NSData *)arg1 ;
-(BOOL)hasFriendUUID;
-(void)setCompetition:(ASCodableCloudKitCompetition *)arg1 ;
-(BOOL)hasCompetition;
-(ASCodableCloudKitCompetition *)competition;
@end
