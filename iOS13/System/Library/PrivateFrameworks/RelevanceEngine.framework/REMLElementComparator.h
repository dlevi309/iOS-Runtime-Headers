/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class REMLModel, NSArray;

@interface REMLElementComparator : NSObject <NSCopying> {

	REMLModel* _model;
	NSArray* _filteringRules;
	NSArray* _rankingRules;

}

@property (nonatomic,copy) NSArray * filteringRules;                             //@synthesize filteringRules=_filteringRules - In the implementation block
@property (nonatomic,copy) NSArray * rankingRules;                               //@synthesize rankingRules=_rankingRules - In the implementation block
@property (nonatomic,readonly) unsigned long long comparisonLevels; 
+(id)comparatorWithFilteringRules:(id)arg1 rankingRules:(id)arg2 model:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)model;
-(id)initWithModel:(id)arg1 ;
-(unsigned long long)comparisonLevels;
-(long long)compareElement:(id)arg1 toElement:(id)arg2 level:(unsigned long long)arg3 ;
-(BOOL)shouldHideElement:(id)arg1 ;
-(NSArray *)filteringRules;
-(NSArray *)rankingRules;
-(void)setFilteringRules:(NSArray *)arg1 ;
-(void)setRankingRules:(NSArray *)arg1 ;
@end

