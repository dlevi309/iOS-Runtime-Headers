/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
*/

#import <UIKitCore/UIViewController.h>

@class NSSArticleInternal, NSSArticleView, UIActivityIndicatorView;

@interface NSSArticleViewControllerInternal : UIViewController {

	BOOL _articleLoading;
	NSSArticleInternal* _article;
	NSSArticleView* _articleView;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) NSSArticleView * articleView;                   //@synthesize articleView=_articleView - In the implementation block
@property (assign,nonatomic) BOOL articleLoading;                            //@synthesize articleLoading=_articleLoading - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) NSSArticleInternal * article;                   //@synthesize article=_article - In the implementation block
-(BOOL)prefersStatusBarHidden;
-(void)viewWillLayoutSubviews;
-(UIActivityIndicatorView *)spinner;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSSArticleInternal *)article;
-(void)viewDidLoad;
-(id)initWithNotification:(id)arg1 ;
-(id)initWithSpotlightIdentifier:(id)arg1 ;
-(void)setArticle:(NSSArticleInternal *)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setArticleLoading:(BOOL)arg1 ;
-(void)setArticleView:(NSSArticleView *)arg1 ;
-(NSSArticleView *)articleView;
-(void)_tickleSpinner;
-(void)_tickleArticleView;
-(BOOL)articleLoading;
-(id)initWithArticle:(id)arg1 ;
-(void)presentArticle:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

