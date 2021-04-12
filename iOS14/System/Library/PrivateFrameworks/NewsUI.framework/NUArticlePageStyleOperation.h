/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)validateOperation;
-(void)performOperation;
-(FCArticle *)article;
-(void)operationDidFinishWithError:(id)arg1 ;
-(id)completion;
-(NUPageStyle *)pageStyle;
-(unsigned long long)pageNextAction;
-(void)setPageStyle:(NUPageStyle *)arg1 ;
-(id)initWithArticle:(id)arg1 pageNextAction:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
@end

