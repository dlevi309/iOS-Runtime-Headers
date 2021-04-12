/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_SFFindOnPageToolbarDelegate.h>
#import <libobjc.A.dylib/_WKFindDelegate.h>
#import <UIKit/UIKeyInput.h>

@protocol _SFFindOnPageViewDelegate;
@class _SFFindOnPageToolbar, NSString, WKWebView, UITextInputPasswordRules;

@interface _SFFindOnPageView : UIView <_SFFindOnPageToolbarDelegate, _WKFindDelegate, UIKeyInput> {

	BOOL _requiresKeyboard;
	BOOL _isShowing;
	_SFFindOnPageToolbar* _toolbar;
	BOOL _usesNarrowLayout;
	BOOL _shouldFocusTextField;
	id<_SFFindOnPageViewDelegate> _delegate;
	NSString* _findString;
	unsigned long long _numberOfFindMatches;
	long long _highlightedMatchIndex;
	WKWebView* _webView;

}

@property (nonatomic,copy) NSString * findString;                                                   //@synthesize findString=_findString - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfFindMatches;                                //@synthesize numberOfFindMatches=_numberOfFindMatches - In the implementation block
@property (assign,nonatomic) long long highlightedMatchIndex;                                       //@synthesize highlightedMatchIndex=_highlightedMatchIndex - In the implementation block
@property (assign,nonatomic,__weak) WKWebView * webView;                                            //@synthesize webView=_webView - In the implementation block
@property (nonatomic,__weak,readonly) id<_SFFindOnPageViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL usesNarrowLayout;                                                 //@synthesize usesNarrowLayout=_usesNarrowLayout - In the implementation block
@property (assign,nonatomic) BOOL shouldFocusTextField;                                             //@synthesize shouldFocusTextField=_shouldFocusTextField - In the implementation block
@property (nonatomic,readonly) BOOL isShowing;                                                      //@synthesize isShowing=_isShowing - In the implementation block
@property (nonatomic,readonly) BOOL isFocused; 
@property (nonatomic,readonly) BOOL shouldDisplayFindNextPreviousInDiscoverabilityHUD; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (nonatomic,readonly) BOOL hasText; 
+(unsigned long long)_undefinedNumberOfMatches;
+(long long)_undefinedMatchIndex;
+(unsigned long long)_maximumNumberOfMatches;
-(id<_SFFindOnPageViewDelegate>)delegate;
-(void)next;
-(void)previous;
-(id)initWithDelegate:(id)arg1 ;
-(void)done;
-(WKWebView *)webView;
-(BOOL)isFocused;
-(id)inputAccessoryView;
-(BOOL)canBecomeFirstResponder;
-(void)didMoveToSuperview;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(id)toolbar;
-(id)keyCommands;
-(BOOL)hasText;
-(BOOL)_requiresKeyboardWhenFirstResponder;
-(BOOL)isShowing;
-(long long)highlightedMatchIndex;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)_webView:(id)arg1 didCountMatches:(unsigned long long)arg2 forString:(id)arg3 ;
-(void)_webView:(id)arg1 didFindMatches:(unsigned long long)arg2 forString:(id)arg3 withMatchIndex:(long long)arg4 ;
-(void)_webView:(id)arg1 didFailToFindString:(id)arg2 ;
-(void)_dismiss:(id)arg1 ;
-(void)setUsesNarrowLayout:(BOOL)arg1 ;
-(BOOL)usesNarrowLayout;
-(void)updateUI;
-(id)findTextField;
-(void)_setFindingInWebViewIfNeeded;
-(void)_advance:(id)arg1 ;
-(void)prepareFindOnPageWithString:(id)arg1 ;
-(BOOL)hideFindOnPage;
-(void)prepareFindOnPage;
-(unsigned long long)_findOptions;
-(void)dismissFindOnPage;
-(id)textForToolbarLabel;
-(void)updateSearchText:(id)arg1 ;
-(BOOL)hasMatches;
-(id)matchLabelText;
-(void)showFindOnPage;
-(void)selectFindOnPageText;
-(void)takeFindStringFromSelection;
-(BOOL)shouldDisplayFindNextPreviousInDiscoverabilityHUD;
-(BOOL)shouldFocusTextField;
-(void)setShouldFocusTextField:(BOOL)arg1 ;
-(NSString *)findString;
-(void)setFindString:(NSString *)arg1 ;
-(unsigned long long)numberOfFindMatches;
-(void)setNumberOfFindMatches:(unsigned long long)arg1 ;
-(void)setHighlightedMatchIndex:(long long)arg1 ;
@end

