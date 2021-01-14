/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCArticleStreamingResults, FCArticleSearchOperationFeedbackResult;

@interface FCArticleSearchOperationResult : NSObject {

	FCArticleStreamingResults* _articles;
	FCArticleSearchOperationFeedbackResult* _feedBack;

}

@property (nonatomic,retain) FCArticleStreamingResults * articles;                           //@synthesize articles=_articles - In the implementation block
@property (nonatomic,retain) FCArticleSearchOperationFeedbackResult * feedBack;              //@synthesize feedBack=_feedBack - In the implementation block
-(FCArticleSearchOperationFeedbackResult *)feedBack;
-(FCArticleStreamingResults *)articles;
-(void)setFeedBack:(FCArticleSearchOperationFeedbackResult *)arg1 ;
-(void)setArticles:(FCArticleStreamingResults *)arg1 ;
@end

