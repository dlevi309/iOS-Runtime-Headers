/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCTrendingStoriesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation {

	long long _desiredArticlesCount;

}

@property (assign,nonatomic) long long desiredArticlesCount;              //@synthesize desiredArticlesCount=_desiredArticlesCount - In the implementation block
-(void)performOperation;
-(void)setDesiredArticlesCount:(long long)arg1 ;
-(long long)desiredArticlesCount;
-(id)_filterTrendingHeadlines:(id)arg1 ;
-(void)_performOperation;
@end

