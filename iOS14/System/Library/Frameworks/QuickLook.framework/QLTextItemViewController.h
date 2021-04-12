/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/QLPrintingProtocol.h>

@class UITextView, NSAttributedString, NSLayoutConstraint, UISimpleTextPrintFormatter, UIPrintPageRenderer, NSString;

@interface QLTextItemViewController : QLItemViewController <UITextViewDelegate, QLPrintingProtocol> {

	UITextView* _textView;
	NSAttributedString* _content;
	NSLayoutConstraint* _leftConstraint;
	NSLayoutConstraint* _rightConstraint;
	UISimpleTextPrintFormatter* _printFormatter;
	UIPrintPageRenderer* _pageRenderer;

}

@property (readonly) UISimpleTextPrintFormatter * printFormatter;              //@synthesize printFormatter=_printFormatter - In the implementation block
@property (readonly) UIPrintPageRenderer * pageRenderer;                       //@synthesize pageRenderer=_pageRenderer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)preferredWhitePointAdaptivityStyle;
-(id)printer;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateConstraintConstants:(BOOL)arg1 ;
-(void)_setupTextViewColorsWithDocumentAttributes:(id)arg1 ;
-(BOOL)_documentAttributesContainTextColors:(id)arg1 ;
-(id)registeredKeyCommands;
-(UIPrintPageRenderer *)pageRenderer;
-(BOOL)shouldRecognizeGestureRecognizer:(id)arg1 ;
-(BOOL)canToggleFullScreen;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canPinchToDismiss;
-(id)scrollView;
-(UISimpleTextPrintFormatter *)printFormatter;
-(BOOL)canSwipeToDismiss;
-(void)numberOfPagesWithSize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareForDrawingPages:(NSRange)arg1 ofSize:(CGSize)arg2 ;
-(void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)provideCurrentPageAndVisibleRectWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)automaticallyUpdateScrollViewContentOffset;
-(BOOL)automaticallyUpdateScrollViewContentInset;
-(BOOL)automaticallyUpdateScrollViewIndicatorInset;
-(BOOL)canClickToToggleFullscreen;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
@end

