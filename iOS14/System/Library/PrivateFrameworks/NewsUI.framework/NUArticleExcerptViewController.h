/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/NULoadable.h>
#import <libobjc.A.dylib/NUBarCompressible.h>

@protocol NULoadingDelegate, FCHeadlineProviding, FCContentContext;
@class UIScrollView, NUArticleExcerptTraits, NUArticleExcerptView, NSString;

@interface NUArticleExcerptViewController : UIViewController <UIScrollViewDelegate, WKNavigationDelegate, NULoadable, NUBarCompressible> {

	id<NULoadingDelegate> _loadingDelegate;
	id<FCHeadlineProviding> _headline;
	id<FCContentContext> _contentContext;
	NUArticleExcerptTraits* _traits;
	NUArticleExcerptView* _excerptView;
	double _currentScrollStartPosition;

}

@property (nonatomic,readonly) id<FCHeadlineProviding> headline;                        //@synthesize headline=_headline - In the implementation block
@property (nonatomic,readonly) id<FCContentContext> contentContext;                     //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,retain) NUArticleExcerptTraits * traits;                           //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) NUArticleExcerptView * excerptView;                      //@synthesize excerptView=_excerptView - In the implementation block
@property (assign,nonatomic) double currentScrollStartPosition;                         //@synthesize currentScrollStartPosition=_currentScrollStartPosition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NULoadingDelegate> loadingDelegate;              //@synthesize loadingDelegate=_loadingDelegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
-(NUArticleExcerptTraits *)traits;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(id<FCHeadlineProviding>)headline;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id<FCContentContext>)contentContext;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)setTraits:(NUArticleExcerptTraits *)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(id<NULoadingDelegate>)loadingDelegate;
-(void)setLoadingDelegate:(id<NULoadingDelegate>)arg1 ;
-(id)initWithHeadline:(id)arg1 contentContext:(id)arg2 traits:(id)arg3 ;
-(NUArticleExcerptView *)excerptView;
-(void)handleReadMoreTapped;
-(void)loadHeadlineImageFromHeadline:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadExcerptFromHeadline:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCurrentScrollStartPosition:(double)arg1 ;
-(double)currentScrollStartPosition;
-(void)openSafariViewWithURL:(id)arg1 ;
-(BOOL)_handleNavigationToURL:(id)arg1 fromURL:(id)arg2 ;
-(void)presentFailedOpenSafariViewWithURL:(id)arg1 ;
@end

