/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCStreamingResults.h>

@class FCArticleSearchOperationFeedbackResult;

@interface FCArticleStreamingResults : FCStreamingResults {

	FCArticleSearchOperationFeedbackResult* _feedbackResult;

}

@property (nonatomic,retain) FCArticleSearchOperationFeedbackResult * feedbackResult;              //@synthesize feedbackResult=_feedbackResult - In the implementation block
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 batchSize:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)setFeedbackResult:(FCArticleSearchOperationFeedbackResult *)arg1 ;
-(FCArticleSearchOperationFeedbackResult *)feedbackResult;
@end

