/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BLTPBCancelBulletinRequest : PBRequest <NSCopying> {

	double _date;
	unsigned _feed;
	NSString* _publisherMatchID;
	NSString* _universalSectionID;
	SCD_Struct_BL3 _has;

}

@property (nonatomic,readonly) BOOL hasUniversalSectionID; 
@property (nonatomic,retain) NSString * universalSectionID;              //@synthesize universalSectionID=_universalSectionID - In the implementation block
@property (nonatomic,readonly) BOOL hasPublisherMatchID; 
@property (nonatomic,retain) NSString * publisherMatchID;                //@synthesize publisherMatchID=_publisherMatchID - In the implementation block
@property (assign,nonatomic) BOOL hasFeed; 
@property (assign,nonatomic) unsigned feed;                              //@synthesize feed=_feed - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                //@synthesize date=_date - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)date;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDate;
-(unsigned)feed;
-(void)setDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasDate:(BOOL)arg1 ;
-(NSString *)universalSectionID;
-(void)setUniversalSectionID:(NSString *)arg1 ;
-(NSString *)publisherMatchID;
-(void)setFeed:(unsigned)arg1 ;
-(BOOL)hasUniversalSectionID;
-(void)setPublisherMatchID:(NSString *)arg1 ;
-(BOOL)hasPublisherMatchID;
-(void)setHasFeed:(BOOL)arg1 ;
-(BOOL)hasFeed;
@end

