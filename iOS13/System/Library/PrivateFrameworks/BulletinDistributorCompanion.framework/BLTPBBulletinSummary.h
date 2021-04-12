/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface BLTPBBulletinSummary : PBCodable <NSCopying> {

	unsigned _destinations;
	NSMutableArray* _keys;
	NSString* _publisherBulletinID;
	NSString* _recordID;
	NSString* _sectionID;

}

@property (nonatomic,readonly) BOOL hasPublisherBulletinID; 
@property (nonatomic,retain) NSString * publisherBulletinID;              //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordID; 
@property (nonatomic,retain) NSString * recordID;                         //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * sectionID;                        //@synthesize sectionID=_sectionID - In the implementation block
@property (assign,nonatomic) unsigned destinations;                       //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,retain) NSMutableArray * keys;                       //@synthesize keys=_keys - In the implementation block
+(Class)keyType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)keys;
-(void)setKeys:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)recordID;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)destinations;
-(void)setDestinations:(unsigned)arg1 ;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(void)addKey:(id)arg1 ;
-(void)setRecordID:(NSString *)arg1 ;
-(BOOL)hasRecordID;
-(unsigned long long)keysCount;
-(void)clearKeys;
-(NSString *)publisherBulletinID;
-(void)setPublisherBulletinID:(NSString *)arg1 ;
-(BOOL)hasPublisherBulletinID;
@end

