/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol WebEditingDelegate <NSObject>
@optional
-(void)webViewDidChange:(id)arg1;
-(id)undoManagerForWebView:(id)arg1;
-(BOOL)webView:(id)arg1 shouldBeginEditingInDOMRange:(id)arg2;
-(void)webViewDidBeginEditing:(id)arg1;
-(BOOL)webView:(id)arg1 shouldEndEditingInDOMRange:(id)arg2;
-(BOOL)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
-(BOOL)webView:(id)arg1 shouldInsertNode:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
-(BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
-(BOOL)webView:(id)arg1 shouldChangeSelectedDOMRange:(id)arg2 toDOMRange:(id)arg3 affinity:(unsigned long long)arg4 stillSelecting:(BOOL)arg5;
-(BOOL)webView:(id)arg1 shouldApplyStyle:(id)arg2 toElementsInDOMRange:(id)arg3;
-(void)webViewDidEndEditing:(id)arg1;
-(BOOL)webView:(id)arg1 shouldChangeTypingStyle:(id)arg2 toStyle:(id)arg3;
-(BOOL)webView:(id)arg1 doCommandBySelector:(SEL)arg2;
-(void)webViewDidChangeTypingStyle:(id)arg1;
-(void)webViewDidChangeSelection:(id)arg1;

@end

