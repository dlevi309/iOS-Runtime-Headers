/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFFormMetadataObserver <NSObject>
@required
-(void)autoFillDidFinishWithUpdatedFormMetadata:(id)arg1 inFrame:(id)arg2 shouldSubmit:(BOOL)arg3;
-(void)didFillGeneratedPasswordInForm:(id)arg1 inFrame:(id)arg2;
-(void)didRemoveAutomaticStrongPasswordInForm:(id)arg1 inputSessionUserObject:(id)arg2 inFrame:(id)arg3;
-(void)textDidChangeInTextField:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3;
-(void)didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2;
-(void)didUpdateUnsubmittedForm:(id)arg1 inFrame:(id)arg2;
-(void)didCollectFormMetadataForPreFilling:(id)arg1 atURL:(id)arg2 ancestorFramesOfFormToPreFill:(id)arg3;
-(void)willNavigateFrame:(id)arg1 withUnsubmittedForm:(id)arg2;

@end

