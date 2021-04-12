/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NULoadable.h>

@protocol NULoadingDelegate;
@class FCArticle, NUArticleExcerptTraits, NUArticleExcerptView, NSString;

@interface NUArticleExcerptViewController : UIViewController <NULoadable> {

	id<NULoadingDelegate> _loadingDelegate;
	FCArticle* _article;
	NUArticleExcerptTraits* _traits;
	NUArticleExcerptView* _excerptView;

}

@property (nonatomic,readonly) FCArticle * article;                                     //@synthesize article=_article - In the implementation block
@property (nonatomic,retain) NUArticleExcerptTraits * traits;                           //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) NUArticleExcerptView * excerptView;                      //@synthesize excerptView=_excerptView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NULoadingDelegate> loadingDelegate;              //@synthesize loadingDelegate=_loadingDelegate - In the implementation block
-(NUArticleExcerptTraits *)traits;
-(void)setTraits:(NUArticleExcerptTraits *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(FCArticle *)article;
-(id)initWithArticle:(id)arg1 traits:(id)arg2 ;
-(id<NULoadingDelegate>)loadingDelegate;
-(void)setLoadingDelegate:(id<NULoadingDelegate>)arg1 ;
-(NUArticleExcerptView *)excerptView;
-(void)loadHeadlineImageFromArticle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadExcerptFromArticle:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

