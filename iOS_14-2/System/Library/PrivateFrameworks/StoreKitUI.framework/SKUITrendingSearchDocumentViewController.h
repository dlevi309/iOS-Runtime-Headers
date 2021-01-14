/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(SKUITrendingSearchTemplateElement *)template;
-(void)setTemplate:(SKUITrendingSearchTemplateElement *)arg1 ;
-(void)loadView;
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

