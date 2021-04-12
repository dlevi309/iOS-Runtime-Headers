/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFFormMetadataObserver <NSObject>
@required
-(void)didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2;
-(void)didCollectFormMetadataForPreFilling:(id)arg1 atURL:(id)arg2 ancestorFramesOfFormToPreFill:(id)arg3;
-(void)textDidChangeInTextField:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3;
-(void)didFillGeneratedPasswordInForm:(id)arg1 inFrame:(id)arg2;
-(void)willNavigateFrame:(id)arg1 withUnsubmittedForm:(id)arg2;
-(void)autoFillDidFinishWithUpdatedFormMetadata:(id)arg1 inFrame:(id)arg2 shouldSubmit:(BOOL)arg3;
-(void)didUpdateUnsubmittedForm:(id)arg1 inFrame:(id)arg2;
-(void)didRemoveAutomaticStrongPasswordInForm:(id)arg1 inputSessionUserObject:(id)arg2 inFrame:(id)arg3;

@end

