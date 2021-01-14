/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, SFRankingFeedback, NSObject;

@interface NTCatchUpOperationResults : NSObject <NSCopying> {

	NSArray* _items;
	SFRankingFeedback* _rankingFeedback;
	NSObject* _supplementalInterestToken;

}

@property (nonatomic,readonly) NSObject * supplementalInterestToken;                  //@synthesize supplementalInterestToken=_supplementalInterestToken - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                                  //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) SFRankingFeedback * rankingFeedback;              //@synthesize rankingFeedback=_rankingFeedback - In the implementation block
-(id)init;
-(NSArray *)items;
-(id)copyWithItems:(id)arg1 ;
-(SFRankingFeedback *)rankingFeedback;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithItems:(id)arg1 rankingFeedback:(id)arg2 supplementalInterestToken:(id)arg3 ;
-(NSObject *)supplementalInterestToken;
-(id)initWithHeadlines:(id)arg1 rankingFeedback:(id)arg2 actionURLsByArticleID:(id)arg3 ;
-(id)initWithFeedItems:(id)arg1 supplementalInterestToken:(id)arg2 ;
-(id)resultsByCombiningWithResults:(id)arg1 ;
@end

