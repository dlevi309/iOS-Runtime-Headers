/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface ASCodableCloudKitCompetitionList : PBCodable <NSCopying> {

	long long _type;
	NSMutableArray* _competitions;
	NSData* _friendUUID;
	SCD_Struct_AS1 _has;

}

@property (nonatomic,retain) NSMutableArray * competitions;              //@synthesize competitions=_competitions - In the implementation block
@property (nonatomic,readonly) BOOL hasFriendUUID; 
@property (nonatomic,retain) NSData * friendUUID;                        //@synthesize friendUUID=_friendUUID - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) long long type;                             //@synthesize type=_type - In the implementation block
+(Class)competitionsType;
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
-(NSMutableArray *)competitions;
-(void)setCompetitions:(NSMutableArray *)arg1 ;
-(void)addCompetitions:(id)arg1 ;
-(unsigned long long)competitionsCount;
-(void)clearCompetitions;
-(id)competitionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasFriendUUID;
@end

