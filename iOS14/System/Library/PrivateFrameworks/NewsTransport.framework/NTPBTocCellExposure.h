/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBFeedCellExposure, NTPBTocCellExposureArticleElement, NSData;

@interface NTPBTocCellExposure : PBCodable <NSCopying> {

	int _displayRank;
	NTPBFeedCellExposure* _feedCellExposure;
	int _rankInSection;
	NTPBTocCellExposureArticleElement* _tocCellExposureArticleElement;
	NSData* _tocCellExposureId;
	int _tocCellSection;
	int _type;
	BOOL _isBadged;
	SCD_Struct_NT11 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasTocCellExposureId; 
@property (nonatomic,retain) NSData * tocCellExposureId;                                                     //@synthesize tocCellExposureId=_tocCellExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasIsBadged; 
@property (assign,nonatomic) BOOL isBadged;                                                                  //@synthesize isBadged=_isBadged - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayRank; 
@property (assign,nonatomic) int displayRank;                                                                //@synthesize displayRank=_displayRank - In the implementation block
@property (assign,nonatomic) BOOL hasRankInSection; 
@property (assign,nonatomic) int rankInSection;                                                              //@synthesize rankInSection=_rankInSection - In the implementation block
@property (assign,nonatomic) BOOL hasTocCellSection; 
@property (assign,nonatomic) int tocCellSection;                                                             //@synthesize tocCellSection=_tocCellSection - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedCellExposure; 
@property (nonatomic,retain) NTPBFeedCellExposure * feedCellExposure;                                        //@synthesize feedCellExposure=_feedCellExposure - In the implementation block
@property (nonatomic,readonly) BOOL hasTocCellExposureArticleElement; 
@property (nonatomic,retain) NTPBTocCellExposureArticleElement * tocCellExposureArticleElement;              //@synthesize tocCellExposureArticleElement=_tocCellExposureArticleElement - In the implementation block
-(int)displayRank;
-(id)dictionaryRepresentation;
-(void)setHasType:(BOOL)arg1 ;
-(void)setDisplayRank:(int)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setFeedCellExposure:(NTPBFeedCellExposure *)arg1 ;
-(NTPBFeedCellExposure *)feedCellExposure;
-(BOOL)hasFeedCellExposure;
-(id)description;
-(void)setHasDisplayRank:(BOOL)arg1 ;
-(BOOL)hasDisplayRank;
-(int)type;
-(unsigned long long)hash;
-(void)setTocCellExposureId:(NSData *)arg1 ;
-(void)setTocCellExposureArticleElement:(NTPBTocCellExposureArticleElement *)arg1 ;
-(BOOL)hasTocCellExposureId;
-(void)setIsBadged:(BOOL)arg1 ;
-(void)setHasIsBadged:(BOOL)arg1 ;
-(BOOL)hasIsBadged;
-(void)setRankInSection:(int)arg1 ;
-(void)setHasRankInSection:(BOOL)arg1 ;
-(BOOL)hasRankInSection;
-(int)tocCellSection;
-(void)setTocCellSection:(int)arg1 ;
-(void)setHasTocCellSection:(BOOL)arg1 ;
-(BOOL)hasTocCellSection;
-(id)tocCellSectionAsString:(int)arg1 ;
-(int)StringAsTocCellSection:(id)arg1 ;
-(NSData *)tocCellExposureId;
-(BOOL)hasTocCellExposureArticleElement;
-(int)rankInSection;
-(NTPBTocCellExposureArticleElement *)tocCellExposureArticleElement;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isBadged;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

