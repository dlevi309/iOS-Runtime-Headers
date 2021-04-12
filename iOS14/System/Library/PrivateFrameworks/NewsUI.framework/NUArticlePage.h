/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUPage.h>

@protocol NUArticleHostViewControllerFactory, NUArticleActivityFactory, NUActivityProvider, FCOperationCanceling, NUPageable;
@class NSString, FCArticle, NUPageStyle, FCAsyncOnceOperation, UIViewController;

@interface NUArticlePage : NSObject <NUPage> {

	FCArticle* _article;
	id<NUArticleHostViewControllerFactory> _articleHostViewControllerFactory;
	id<NUArticleActivityFactory> _articleActivityFactory;
	NUPageStyle* _pageStyle;
	id<NUActivityProvider> _activityProvider;
	FCAsyncOnceOperation* _asyncOnceOperation;
	id<FCOperationCanceling> _asyncOnceCancelHandler;
	UIViewController*<NUPageable> _articleViewController;
	unsigned long long _pageNextAction;

}

@property (nonatomic,readonly) FCArticle * article;                                                                  //@synthesize article=_article - In the implementation block
@property (nonatomic,readonly) id<NUArticleHostViewControllerFactory> articleHostViewControllerFactory;              //@synthesize articleHostViewControllerFactory=_articleHostViewControllerFactory - In the implementation block
@property (nonatomic,readonly) id<NUArticleActivityFactory> articleActivityFactory;                                  //@synthesize articleActivityFactory=_articleActivityFactory - In the implementation block
@property (nonatomic,retain) NUPageStyle * pageStyle;                                                                //@synthesize pageStyle=_pageStyle - In the implementation block
@property (nonatomic,retain) id<NUActivityProvider> activityProvider;                                                //@synthesize activityProvider=_activityProvider - In the implementation block
@property (nonatomic,retain) FCAsyncOnceOperation * asyncOnceOperation;                                              //@synthesize asyncOnceOperation=_asyncOnceOperation - In the implementation block
@property (nonatomic,retain) id<FCOperationCanceling> asyncOnceCancelHandler;                                        //@synthesize asyncOnceCancelHandler=_asyncOnceCancelHandler - In the implementation block
@property (nonatomic,retain) UIViewController*<NUPageable> articleViewController;                                    //@synthesize articleViewController=_articleViewController - In the implementation block
@property (assign,nonatomic) unsigned long long pageNextAction;                                                      //@synthesize pageNextAction=_pageNextAction - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL allowNeighboringAdvertising; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCArticle *)article;
-(void)unprepare;
-(id)viewController;
-(NSString *)identifier;
-(void)prepare;
-(id)adContextValueForKeyPath:(id)arg1 ;
-(id)contextProvidersForKeyPath:(id)arg1 ;
-(FCAsyncOnceOperation *)asyncOnceOperation;
-(void)setAsyncOnceOperation:(FCAsyncOnceOperation *)arg1 ;
-(id)asyncOnceLoadPageStyle:(/*^block*/id)arg1 ;
-(UIViewController*<NUPageable>)articleViewController;
-(id<NUArticleHostViewControllerFactory>)articleHostViewControllerFactory;
-(void)setArticleViewController:(UIViewController*<NUPageable>)arg1 ;
-(NUPageStyle *)pageStyle;
-(void)pageStyling:(/*^block*/id)arg1 ;
-(id<FCOperationCanceling>)asyncOnceCancelHandler;
-(void)setAsyncOnceCancelHandler:(id<FCOperationCanceling>)arg1 ;
-(id<NUActivityProvider>)activityProvider;
-(id<NUArticleActivityFactory>)articleActivityFactory;
-(void)setActivityProvider:(id<NUActivityProvider>)arg1 ;
-(unsigned long long)pageNextAction;
-(void)setPageStyle:(NUPageStyle *)arg1 ;
-(void)activityProvider:(/*^block*/id)arg1 ;
-(BOOL)allowNeighboringAdvertising;
-(id)initWithArticle:(id)arg1 articleHostViewControllerFactory:(id)arg2 articleActivityFactory:(id)arg3 pageNextAction:(unsigned long long)arg4 ;
-(void)setPageNextAction:(unsigned long long)arg1 ;
@end

