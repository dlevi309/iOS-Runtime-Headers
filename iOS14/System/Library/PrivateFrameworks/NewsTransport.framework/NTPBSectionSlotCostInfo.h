/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBSectionSlotCostInfo : PBCodable <NSCopying> {

	double _headlineSlotCost;
	double _sectionFooterSlotCost;
	double _sectionTitleSlotCost;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasSectionTitleSlotCost; 
@property (assign,nonatomic) double sectionTitleSlotCost;                //@synthesize sectionTitleSlotCost=_sectionTitleSlotCost - In the implementation block
@property (assign,nonatomic) BOOL hasHeadlineSlotCost; 
@property (assign,nonatomic) double headlineSlotCost;                    //@synthesize headlineSlotCost=_headlineSlotCost - In the implementation block
@property (assign,nonatomic) BOOL hasSectionFooterSlotCost; 
@property (assign,nonatomic) double sectionFooterSlotCost;               //@synthesize sectionFooterSlotCost=_sectionFooterSlotCost - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasHeadlineSlotCost:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHeadlineSlotCost:(double)arg1 ;
-(void)setHasSectionFooterSlotCost:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasSectionFooterSlotCost;
-(void)setSectionFooterSlotCost:(double)arg1 ;
-(void)setSectionTitleSlotCost:(double)arg1 ;
-(double)sectionTitleSlotCost;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(double)headlineSlotCost;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasHeadlineSlotCost;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)sectionFooterSlotCost;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSectionTitleSlotCost;
-(void)setHasSectionTitleSlotCost:(BOOL)arg1 ;
@end

