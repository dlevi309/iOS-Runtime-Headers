/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIResourceLoaderDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUIChartColumnsView, NSMutableArray, SKUIChartsTemplateViewElement, SKUIResourceLoader, NSString;

@interface SKUIChartsDocumentViewController : SKUIViewController <SKUIResourceLoaderDelegate, SKUIDocumentViewController> {

	SKUIChartColumnsView* _chartsView;
	NSMutableArray* _columnViewControllers;
	SKUIChartsTemplateViewElement* _templateElement;
	SKUIResourceLoader* _resourceLoader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id)_resourceLoader;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(id)contentScrollView;
-(void)documentDidUpdate:(id)arg1 ;
-(void)documentMediaQueriesDidUpdate:(id)arg1 ;
-(void)skui_viewWillAppear:(BOOL)arg1 ;
-(void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2 ;
-(void)resourceLoaderDidBeginLoading:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg1 ;
-(id)_newColumnViewControllersWithReusableViewControllers:(id)arg1 ;
-(long long)_visibleColumnCountForWidth:(double)arg1 ;
-(UIEdgeInsets)_chartInsets;
-(id)_columnViewControllers;
@end

