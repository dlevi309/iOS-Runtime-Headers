/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUILayoutCacheDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUIContentUnavailableView, SKUIViewElementLayoutContext, SKUIContentUnavailableTemplateElement, SKUILayoutCache, NSString;

@interface SKUIContentUnavailableDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUIDocumentViewController> {

	SKUIContentUnavailableView* _contentUnavailableView;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUIContentUnavailableTemplateElement* _templateElement;
	SKUILayoutCache* _textLayoutCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(id)_layoutContext;
-(void)viewDidLoad;
-(UIEdgeInsets)_contentInsets;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)dealloc;
-(void)documentDidUpdate:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)layoutCacheDidFinishBatch:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg1 ;
-(void)_reloadContentUnavailableView:(id)arg1 width:(double)arg2 ;
@end

