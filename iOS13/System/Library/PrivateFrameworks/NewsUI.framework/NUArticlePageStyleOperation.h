/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsCore/FCOperation.h>

@class FCArticle, NUPageStyle;

@interface NUArticlePageStyleOperation : FCOperation {

	FCArticle* _article;
	unsigned long long _pageNextAction;
	/*^block*/id _completion;
	NUPageStyle* _pageStyle;

}

@property (nonatomic,readonly) FCArticle * article;                            //@synthesize article=_article - In the implementation block
@property (nonatomic,readonly) unsigned long long pageNextAction;              //@synthesize pageNextAction=_pageNextAction - In the implementation block
@property (nonatomic,readonly) id completion;                                  //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NUPageStyle * pageStyle;                          //@synthesize pageStyle=_pageStyle - In the implementation block
-(id)completion;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationDidFinishWithError:(id)arg1 ;
-(FCArticle *)article;
-(NUPageStyle *)pageStyle;
-(unsigned long long)pageNextAction;
-(void)setPageStyle:(NUPageStyle *)arg1 ;
-(id)initWithArticle:(id)arg1 pageNextAction:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
@end

