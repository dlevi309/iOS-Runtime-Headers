/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFNavigationBarURLButtonDelegate <NSObject>
@required
-(void)navigationBarURLButtonDidReceiveCopyCommand:(id)arg1;
-(void)navigationBarURLButtonDidReceivePasteCommand:(id)arg1;
-(BOOL)navigationBarURLButton:(id)arg1 shouldShowMenuForGestureWithRecognizer:(id)arg2;
-(BOOL)navigationBarURLButtonShouldCopy:(id)arg1;
-(BOOL)navigationBarURLButtonShouldPaste:(id)arg1;
-(BOOL)navigationBarURLButtonIsUsingNarrowLayout:(id)arg1;
-(void)navigationBarURLButtonBeginSuppressingPlaceholder:(id)arg1;
-(void)navigationBarURLButtonEndSuppressingPlaceholder:(id)arg1;
-(BOOL)navigationBarURLButton:(id)arg1 canWriteAtLocation:(CGPoint)arg2;
-(id)textForNavigationBarURLButton:(id)arg1;
-(BOOL)textFieldIsEditableForNavigationBarURLButton:(id)arg1;
-(id)textFieldForNavigationBarURLButton:(id)arg1;
-(void)navigationBarURLButtonDidRequestFocusForPencilInput:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)navigationBarURLButton:(id)arg1 shouldAllowLongPressAtPoint:(CGPoint)arg2;

@end

