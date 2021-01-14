/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCTagSearchOperationResult, FCArticleSearchOperationResult;

@interface FCSearchResult : NSObject {

	FCTagSearchOperationResult* _tagSearchResult;
	FCArticleSearchOperationResult* _articleSearchResult;

}

@property (nonatomic,retain) FCTagSearchOperationResult * tagSearchResult;                      //@synthesize tagSearchResult=_tagSearchResult - In the implementation block
@property (nonatomic,retain) FCArticleSearchOperationResult * articleSearchResult;              //@synthesize articleSearchResult=_articleSearchResult - In the implementation block
-(FCTagSearchOperationResult *)tagSearchResult;
-(void)setTagSearchResult:(FCTagSearchOperationResult *)arg1 ;
-(FCArticleSearchOperationResult *)articleSearchResult;
-(void)setArticleSearchResult:(FCArticleSearchOperationResult *)arg1 ;
@end

