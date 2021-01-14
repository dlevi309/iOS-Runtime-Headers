/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSData *)friendUUID;
-(void)setFriendUUID:(NSData *)arg1 ;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasFriendUUID;
-(NSMutableArray *)competitions;
-(void)setCompetitions:(NSMutableArray *)arg1 ;
-(void)addCompetitions:(id)arg1 ;
-(unsigned long long)competitionsCount;
-(void)clearCompetitions;
-(id)competitionsAtIndex:(unsigned long long)arg1 ;
@end

