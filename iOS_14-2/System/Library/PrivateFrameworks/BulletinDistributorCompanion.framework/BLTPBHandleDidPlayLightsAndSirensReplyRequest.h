/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BLTPBHandleDidPlayLightsAndSirensReplyRequest : PBRequest <NSCopying> {

	double _date;
	NSString* _phoneSectionID;
	NSString* _publisherMatchID;
	NSString* _replyToken;
	BOOL _didPlayLightsAndSirens;
	SCD_Struct_BL3 _has;

}

@property (assign,nonatomic) BOOL hasDidPlayLightsAndSirens; 
@property (assign,nonatomic) BOOL didPlayLightsAndSirens;                 //@synthesize didPlayLightsAndSirens=_didPlayLightsAndSirens - In the implementation block
@property (nonatomic,readonly) BOOL hasPublisherMatchID; 
@property (nonatomic,retain) NSString * publisherMatchID;                 //@synthesize publisherMatchID=_publisherMatchID - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneSectionID; 
@property (nonatomic,retain) NSString * phoneSectionID;                   //@synthesize phoneSectionID=_phoneSectionID - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL hasReplyToken; 
@property (nonatomic,retain) NSString * replyToken;                       //@synthesize replyToken=_replyToken - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasDate;
-(NSString *)publisherMatchID;
-(void)mergeFrom:(id)arg1 ;
-(void)setDate:(double)arg1 ;
-(id)description;
-(void)setHasDate:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(double)date;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setReplyToken:(NSString *)arg1 ;
-(BOOL)hasReplyToken;
-(NSString *)replyToken;
-(void)setPublisherMatchID:(NSString *)arg1 ;
-(BOOL)didPlayLightsAndSirens;
-(NSString *)phoneSectionID;
-(void)setDidPlayLightsAndSirens:(BOOL)arg1 ;
-(BOOL)hasPublisherMatchID;
-(void)setPhoneSectionID:(NSString *)arg1 ;
-(void)setHasDidPlayLightsAndSirens:(BOOL)arg1 ;
-(BOOL)hasDidPlayLightsAndSirens;
-(BOOL)hasPhoneSectionID;
@end

