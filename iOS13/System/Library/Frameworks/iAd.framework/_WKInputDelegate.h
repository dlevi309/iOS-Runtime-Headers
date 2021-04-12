/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@protocol _WKInputDelegate <NSObject>
@optional
-(void)_webView:(id)arg1 willSubmitFormValues:(id)arg2 userObject:(id)arg3 submissionHandler:(/*^block*/id)arg4;
-(void)_webView:(id)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id)arg2;
-(void)_webView:(id)arg1 insertTextSuggestion:(id)arg2 inInputSession:(id)arg3;
-(BOOL)_webView:(id)arg1 focusShouldStartInputSession:(id)arg2;
-(long long)_webView:(id)arg1 decidePolicyForFocusedElement:(id)arg2;
-(BOOL)_webView:(id)arg1 focusRequiresStrongPasswordAssistance:(id)arg2;
-(id)_webViewAdditionalContextForStrongPasswordAssistance:(id)arg1;
-(void)_webView:(id)arg1 willStartInputSession:(id)arg2;
-(void)_webView:(id)arg1 didStartInputSession:(id)arg2;
-(BOOL)_webView:(id)arg1 shouldRevealFocusOverlayForInputSession:(id)arg2;
-(double)_webView:(id)arg1 focusedElementContextViewHeightForFittingSize:(CGSize)arg2 inputSession:(id)arg3;
-(id)_webView:(id)arg1 focusedElementContextViewForInputSession:(id)arg2;

@end

