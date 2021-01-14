/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/


@protocol _WKInputDelegate <NSObject>
@optional
-(BOOL)_webView:(id)arg1 shouldRevealFocusOverlayForInputSession:(id)arg2;
-(double)_webView:(id)arg1 focusedElementContextViewHeightForFittingSize:(CGSize)arg2 inputSession:(id)arg3;
-(id)_webView:(id)arg1 focusedElementContextViewForInputSession:(id)arg2;
-(void)_webView:(id)arg1 willSubmitFormValues:(id)arg2 userObject:(id)arg3 submissionHandler:(/*^block*/id)arg4;
-(void)_webView:(id)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id)arg2;
-(void)_webView:(id)arg1 insertTextSuggestion:(id)arg2 inInputSession:(id)arg3;
-(BOOL)_webView:(id)arg1 focusShouldStartInputSession:(id)arg2;
-(long long)_webView:(id)arg1 decidePolicyForFocusedElement:(id)arg2;
-(BOOL)_webView:(id)arg1 focusRequiresStrongPasswordAssistance:(id)arg2;
-(id)_webViewAdditionalContextForStrongPasswordAssistance:(id)arg1;
-(void)_webView:(id)arg1 willStartInputSession:(id)arg2;
-(void)_webView:(id)arg1 didStartInputSession:(id)arg2;

@end

