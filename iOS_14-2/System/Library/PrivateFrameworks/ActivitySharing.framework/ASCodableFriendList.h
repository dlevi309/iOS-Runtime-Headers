/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ASCodableFriendList : PBCodable <NSCopying> {

	NSMutableArray* _friends;

}

@property (nonatomic,retain) NSMutableArray * friends;              //@synthesize friends=_friends - In the implementation block
+(Class)friendType;
-(NSMutableArray *)friends;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setFriends:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addFriend:(id)arg1 ;
-(unsigned long long)friendsCount;
-(void)clearFriends;
-(id)friendAtIndex:(unsigned long long)arg1 ;
@end

