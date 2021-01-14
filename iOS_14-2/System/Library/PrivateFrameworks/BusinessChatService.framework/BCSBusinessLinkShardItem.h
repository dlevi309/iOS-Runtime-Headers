/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface BCSBusinessLinkShardItem : PBCodable <NSCopying> {

	long long _count;
	long long _index;
	long long _ttl;
	NSData* _filter;
	SCD_Struct_BC5 _has;

}

@property (assign,nonatomic) BOOL hasIndex; 
@property (assign,nonatomic) long long index;               //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) long long count;               //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasTtl; 
@property (assign,nonatomic) long long ttl;                 //@synthesize ttl=_ttl - In the implementation block
@property (nonatomic,readonly) BOOL hasFilter; 
@property (nonatomic,retain) NSData * filter;               //@synthesize filter=_filter - In the implementation block
-(id)dictionaryRepresentation;
-(void)setTtl:(long long)arg1 ;
-(void)setCount:(long long)arg1 ;
-(long long)index;
-(void)setFilter:(NSData *)arg1 ;
-(NSData *)filter;
-(void)setIndex:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(long long)count;
-(BOOL)hasIndex;
-(void)setHasCount:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasCount;
-(BOOL)hasTtl;
-(long long)ttl;
-(void)setHasTtl:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasFilter;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasIndex:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

