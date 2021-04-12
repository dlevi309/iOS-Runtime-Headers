/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@protocol SiriUISnippetViewControllerDelegatePrivate <NSObject>
@required
-(void)siriSnippetViewController:(id)arg1 willPresentViewController:(id)arg2;
-(void)siriSnippetViewController:(id)arg1 willDismissViewController:(id)arg2;
-(BOOL)siriViewControllerShouldPreventUserInteraction:(id)arg1;
-(void)siriViewControllerWillBeginEditing:(id)arg1;
-(void)siriViewControllerDidEndEditing:(id)arg1;
-(void)siriViewController:(id)arg1 startCorrectedSpeechRequestWithText:(id)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(id)arg4;
-(void)siriViewControllerRequestTearDownEditingViewController:(id)arg1;
-(id)localeForSiriViewController:(id)arg1;
-(void)siriSnippetViewController:(id)arg1 didPresentViewController:(id)arg2;
-(void)siriSnippetViewController:(id)arg1 didDismissViewController:(id)arg2;
-(void)siriViewController:(id)arg1 speakText:(id)arg2 completion:(/*^block*/id)arg3;
-(void)siriSnippetViewController:(id)arg1 didRequestKeyboardWithVisibility:(BOOL)arg2;
-(void)cancelSpeakingForSiriViewController:(id)arg1;
-(void)removeSiriViewController:(id)arg1;

@end

