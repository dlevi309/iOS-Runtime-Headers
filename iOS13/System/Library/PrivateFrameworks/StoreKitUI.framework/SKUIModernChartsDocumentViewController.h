/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIResourceLoaderDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>
#import <libobjc.A.dylib/SKUIModalSourceViewProvider.h>

@class SKUIActivityIndicatorView, SKUIModernChartsView, NSMutableArray, SKUILayoutCache, SKUIChartsTemplateViewElement, SKUIViewElementLayoutContext, SKUIResourceLoader, NSString;

@interface SKUIModernChartsDocumentViewController : SKUIViewController <SKUIResourceLoaderDelegate, SKUIDocumentViewController, SKUIModalSourceViewProvider> {

	SKUIActivityIndicatorView* _activityIndicatorView;
	SKUIModernChartsView* _chartsView;
	NSMutableArray* _columnViewControllers;
	SKUILayoutCache* _layoutCache;
	SKUIChartsTemplateViewElement* _templateElement;
	SKUIViewElementLayoutContext* _viewLayoutContext;
	SKUIResourceLoader* _resourceLoader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(UIEdgeInsets)_contentInset;
-(id)contentScrollView;
-(id)_resourceLoader;
-(void)_showActivityIndicator;
-(void)documentDidUpdate:(id)arg1 ;
-(void)documentMediaQueriesDidUpdate:(id)arg1 ;
-(void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2 ;
-(void)resourceLoaderDidBeginLoading:(id)arg1 ;
-(void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithTemplateElement:(id)arg1 ;
-(id)_layoutCache;
-(id)_viewLayoutContext;
-(id)_newColumnViewControllersWithReusableViewControllers:(id)arg1 ;
-(CGRect)_computedFrameForActivityIndicatorView;
-(void)_reloadWithTemplateElement:(id)arg1 ;
-(void)_hideActivityIndicator;
@end

