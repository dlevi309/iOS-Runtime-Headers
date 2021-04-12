/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUITrendingSearchView, SKUITrendingSearchTemplateElement, UIViewController, NSString;

@interface SKUITrendingSearchDocumentViewController : SKUIViewController <SKUIDocumentViewController> {

	SKUITrendingSearchView* _resultsView;
	SKUITrendingSearchTemplateElement* _template;
	UIViewController* _privacyViewController;

}

@property (nonatomic,retain) SKUITrendingSearchView * resultsView;                      //@synthesize resultsView=_resultsView - In the implementation block
@property (nonatomic,retain) SKUITrendingSearchTemplateElement * template;              //@synthesize template=_template - In the implementation block
@property (nonatomic,retain) UIViewController * privacyViewController;                  //@synthesize privacyViewController=_privacyViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setTemplate:(SKUITrendingSearchTemplateElement *)arg1 ;
-(SKUITrendingSearchTemplateElement *)template;
-(void)documentDidUpdate:(id)arg1 ;
-(id)impressionableViewElements;
-(id)initWithTemplateElement:(id)arg1 ;
-(void)_reloadResultsView;
-(SKUITrendingSearchView *)resultsView;
-(UIEdgeInsets)_resultsViewContentInset;
-(void)resultsViewTapRecognized:(id)arg1 ;
-(void)searchResultButtonTapped:(id)arg1 ;
-(void)setResultsView:(SKUITrendingSearchView *)arg1 ;
-(UIViewController *)privacyViewController;
-(void)setPrivacyViewController:(UIViewController *)arg1 ;
@end

