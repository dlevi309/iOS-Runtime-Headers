/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIEditorTemplateViewDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUIButtonViewElement, SKUIEditorTemplateView, SKUIViewElementLayoutContext, SKUIEditorTemplateViewElement, NSString;

@interface SKUIEditorDocumentViewController : SKUIViewController <SKUIEditorTemplateViewDelegate, SKUIDocumentViewController> {

	SKUIButtonViewElement* _doneButtonElement;
	SKUIEditorTemplateView* _editorView;
	BOOL _isTextChanged;
	CGRect _keyboardFrame;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUIButtonViewElement* _resetButtonElement;
	SKUIEditorTemplateViewElement* _templateElement;
	CGRect _toolbarFrame;

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
-(id)initWithTemplateElement:(id)arg1 ;
-(void)_cancelButtonAction;
-(void)didChangeTextInEditorTemplateView:(id)arg1 ;
-(void)_sendDoneEventAndDismissWithText:(id)arg1 ;
-(void)_updateBiographyWithText:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)_sendCancelEventAndDismiss;
-(void)_updateEditorViewInset;
-(void)_layoutNavigation;
-(void)_layoutEditorView;
-(void)_doneButtonAction;
-(void)_resetButtonAction;
-(void)_resetTextView;
-(void)_authenticateOnCompletion:(/*^block*/id)arg1 ;
-(id)_locateFirstButtonWithType:(long long)arg1 inChildrenOfElement:(id)arg2 ;
@end

