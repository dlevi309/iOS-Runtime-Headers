/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol CNComposeRecipientTextViewDelegate <CNComposeHeaderViewDelegate>
@optional
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
-(void)composeRecipientView:(id)arg1 didReplaceRecipients:(id)arg2 withRecipients:(id)arg3;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
-(void)composeRecipientView:(id)arg1 didSelectRecipients:(id)arg2;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2;
-(void)recipientViewDidBecomeFirstResponder:(id)arg1;
-(void)recipientViewDidResignFirstResponder:(id)arg1;
-(BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1;
-(void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
-(void)composeRecipientView:(id)arg1 disambiguateRecipientForAtom:(id)arg2;
-(void)composeRecipientView:(id)arg1 showPersonCardForRecipient:(id)arg2;
-(void)composeRecipientView:(id)arg1 showCorecipients:(id)arg2;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
-(id)composeRecipientView:(id)arg1 composeRecipientForContact:(id)arg2;
-(unsigned long long)presentationOptionsForRecipient:(id)arg1;
-(void)composeRecipientViewReturnPressed:(id)arg1;
-(void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
-(BOOL)composeRecipientViewShowingSearchResults:(id)arg1;
-(BOOL)presentSearchResultsForComposeRecipientView:(id)arg1;
-(void)dismissSearchResultsForComposeRecipientView:(id)arg1;
-(void)selectNextSearchResultForComposeRecipientView:(id)arg1;
-(void)selectPreviousSearchResultForComposeRecipientView:(id)arg1;
-(BOOL)chooseSelectedSearchResultForComposeRecipientView:(id)arg1;

@end

