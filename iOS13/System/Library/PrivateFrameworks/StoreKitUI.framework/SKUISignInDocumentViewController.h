/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUILayoutCacheDelegate.h>
#import <libobjc.A.dylib/SKUISignInViewDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUIViewElementLayoutContext, SKUISignInTemplateView, UIScrollView, SKUISignInTemplateViewElement, SKUILayoutCache, NSString;

@interface SKUISignInDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUISignInViewDelegate, SKUIDocumentViewController> {

	CGRect _keyboardFrame;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUISignInTemplateView* _loginView;
	UIScrollView* _scrollView;
	SKUISignInTemplateViewElement* _templateElement;
	SKUILayoutCache* _textLayoutCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_backgroundColor;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(id)_layoutContext;
-(void)documentDidUpdate:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)layoutCacheDidFinishBatch:(id)arg1 ;
-(void)_layoutScrollView;
-(void)_reloadPanelViewWithScrollViewSize:(CGSize)arg1 ;
-(void)_reloadContentSize;
-(id)initWithTemplateElement:(id)arg1 ;
-(void)_signInSuccess:(id)arg1 ;
-(void)_signInFailed:(id)arg1 error:(id)arg2 ;
-(void)signInEntryComplete:(id)arg1 accountName:(id)arg2 password:(id)arg3 ;
@end

