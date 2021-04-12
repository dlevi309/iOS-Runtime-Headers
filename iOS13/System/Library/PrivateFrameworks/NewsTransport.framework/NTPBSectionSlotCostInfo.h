/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBSectionSlotCostInfo : PBCodable <NSCopying> {

	double _leadingFirstHeadlineSlotCost;
	double _sectionTitleSlotCost;
	double _standardFirstHeadlineSlotCost;
	double _subsequentHeadlineSlotCost;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasSectionTitleSlotCost; 
@property (assign,nonatomic) double sectionTitleSlotCost;                        //@synthesize sectionTitleSlotCost=_sectionTitleSlotCost - In the implementation block
@property (assign,nonatomic) BOOL hasStandardFirstHeadlineSlotCost; 
@property (assign,nonatomic) double standardFirstHeadlineSlotCost;               //@synthesize standardFirstHeadlineSlotCost=_standardFirstHeadlineSlotCost - In the implementation block
@property (assign,nonatomic) BOOL hasLeadingFirstHeadlineSlotCost; 
@property (assign,nonatomic) double leadingFirstHeadlineSlotCost;                //@synthesize leadingFirstHeadlineSlotCost=_leadingFirstHeadlineSlotCost - In the implementation block
@property (assign,nonatomic) BOOL hasSubsequentHeadlineSlotCost; 
@property (assign,nonatomic) double subsequentHeadlineSlotCost;                  //@synthesize subsequentHeadlineSlotCost=_subsequentHeadlineSlotCost - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSectionTitleSlotCost:(double)arg1 ;
-(void)setHasSectionTitleSlotCost:(BOOL)arg1 ;
-(BOOL)hasSectionTitleSlotCost;
-(void)setStandardFirstHeadlineSlotCost:(double)arg1 ;
-(void)setHasStandardFirstHeadlineSlotCost:(BOOL)arg1 ;
-(BOOL)hasStandardFirstHeadlineSlotCost;
-(void)setLeadingFirstHeadlineSlotCost:(double)arg1 ;
-(void)setHasLeadingFirstHeadlineSlotCost:(BOOL)arg1 ;
-(BOOL)hasLeadingFirstHeadlineSlotCost;
-(void)setSubsequentHeadlineSlotCost:(double)arg1 ;
-(void)setHasSubsequentHeadlineSlotCost:(BOOL)arg1 ;
-(BOOL)hasSubsequentHeadlineSlotCost;
-(double)sectionTitleSlotCost;
-(double)standardFirstHeadlineSlotCost;
-(double)leadingFirstHeadlineSlotCost;
-(double)subsequentHeadlineSlotCost;
@end

