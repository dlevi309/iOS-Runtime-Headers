/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

