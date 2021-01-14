/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUILayoutCacheDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class UIImageView, SKUIViewElementLayoutContext, SKUIMetricsImpressionSession, SKUIPanelView, SKUILayoutCache, UIScrollView, SKUIPanelTemplateViewElement, NSString;

@interface SKUIPanelDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUIDocumentViewController> {

	UIImageView* _backgroundImageView;
	BOOL _didAttemptBecomeFirstResponder;
	CGRect _keyboardFrame;
	long long _lastContentWidth;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUIMetricsImpressionSession* _metricsImpressionSession;
	SKUIPanelView* _panelView;
	SKUILayoutCache* _textLayoutCache;
	UIScrollView* _scrollView;
	SKUIPanelTemplateViewElement* _templateElement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_layoutScrollView;
-(void)_layoutBackgroundImageView;
-(id)_activeBackgroundColor;
-(id)_layoutContext;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(id)contentScrollView;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(void)_keyboardWillChangeNotification:(id)arg1 ;
-(void)documentDidUpdate:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)impressionableViewElements;
-(void)layoutCacheDidFinishBatch:(id)arg1 ;
-(void)_keyboardHideNotification:(id)arg1 ;
-(id)_templateBackgroundColor;
-(void)_reloadBackgroundImageView;
-(void)_reloadPanelViewWithScrollViewSize:(CGSize)arg1 ;
-(void)_reloadContentSize;
-(id)_imageForBackgroundImageElement:(id)arg1 ;
-(void)_requestPanelViewLayoutWithContentWidth:(long long)arg1 forced:(BOOL)arg2 ;
-(id)initWithTemplateElement:(id)arg1 ;
@end

