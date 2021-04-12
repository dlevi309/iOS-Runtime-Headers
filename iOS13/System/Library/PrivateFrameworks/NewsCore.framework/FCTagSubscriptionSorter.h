/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCTagRanking;
@interface FCTagSubscriptionSorter : NSObject {

	id<FCTagRanking> _tagRanker;

}

@property (nonatomic,readonly) id<FCTagRanking> tagRanker;              //@synthesize tagRanker=_tagRanker - In the implementation block
-(id)initWithTagRanker:(id)arg1 ;
-(id)sortTagSubscriptions:(id)arg1 ;
-(id<FCTagRanking>)tagRanker;
@end

