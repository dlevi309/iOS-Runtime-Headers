/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBSectionSlotCostInfo;

@interface NTAggregationBudgetInfo : NSObject <NSCopying> {

	BOOL _respectMinMaxLimit;
	BOOL _allowSectionTitles;
	NTPBSectionSlotCostInfo* _sectionSlotCostInfo;
	unsigned long long _embedsLimit;
	double _slotsLimit;

}

@property (nonatomic,copy) NTPBSectionSlotCostInfo * sectionSlotCostInfo;              //@synthesize sectionSlotCostInfo=_sectionSlotCostInfo - In the implementation block
@property (assign,nonatomic) unsigned long long embedsLimit;                           //@synthesize embedsLimit=_embedsLimit - In the implementation block
@property (assign,nonatomic) BOOL respectMinMaxLimit;                                  //@synthesize respectMinMaxLimit=_respectMinMaxLimit - In the implementation block
@property (assign,nonatomic) double slotsLimit;                                        //@synthesize slotsLimit=_slotsLimit - In the implementation block
@property (assign,nonatomic) BOOL allowSectionTitles;                                  //@synthesize allowSectionTitles=_allowSectionTitles - In the implementation block
-(id)init;
-(void)setSectionSlotCostInfo:(NTPBSectionSlotCostInfo *)arg1 ;
-(void)setSlotsLimit:(double)arg1 ;
-(double)slotsLimit;
-(void)setAllowSectionTitles:(BOOL)arg1 ;
-(void)setEmbedsLimit:(unsigned long long)arg1 ;
-(unsigned long long)embedsLimit;
-(NTPBSectionSlotCostInfo *)sectionSlotCostInfo;
-(BOOL)allowSectionTitles;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRespectMinMaxLimit:(BOOL)arg1 ;
-(BOOL)respectMinMaxLimit;
@end

