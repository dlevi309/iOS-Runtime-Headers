/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(id)copyWithItems:(id)arg1 ;
-(SFRankingFeedback *)rankingFeedback;
-(id)initWithItems:(id)arg1 rankingFeedback:(id)arg2 supplementalInterestToken:(id)arg3 ;
-(NSObject *)supplementalInterestToken;
-(id)initWithHeadlines:(id)arg1 rankingFeedback:(id)arg2 ;
-(id)initWithFeedItems:(id)arg1 supplementalInterestToken:(id)arg2 ;
-(id)resultsByCombiningWithResults:(id)arg1 ;
@end

