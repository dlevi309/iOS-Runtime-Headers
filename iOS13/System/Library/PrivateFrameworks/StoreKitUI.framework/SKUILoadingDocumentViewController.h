/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@protocol OS_dispatch_source;
@class SKUIActivityIndicatorViewElement, SKUIActivityIndicatorView, NSObject, SKUILayoutCache, SKUILoadingTemplateViewElement, SKUIViewElementLayoutContext, NSString;

@interface SKUILoadingDocumentViewController : SKUIViewController <SKUIDocumentViewController> {

	SKUIActivityIndicatorViewElement* _activityIndicatorElement;
	SKUIActivityIndicatorView* _activityIndicatorView;
	NSObject*<OS_dispatch_source> _delayTimer;
	SKUILayoutCache* _layoutCache;
	SKUILoadingTemplateViewElement* _templateElement;
	SKUIViewElementLayoutContext* _viewLayoutContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)_activityIndicator;
-(void)_showActivityIndicator;
-(void)documentDidUpdate:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg1 ;
-(id)initWithActivityIndicatorElement:(id)arg1 ;
-(id)_layoutCache;
-(id)_viewLayoutContext;
-(void)_reloadViewStyling;
-(CGRect)_computedFrameForActivityIndicatorView;
@end

