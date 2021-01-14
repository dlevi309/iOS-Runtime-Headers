/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFFormAutoFiller <NSObject>
@required
-(void)focusFormForStreamlinedLogin:(long long)arg1 inFrame:(id)arg2;
-(void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2;
-(void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
-(void)automaticPasswordSheetDimissedInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2;
-(void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 selectFieldAfterFilling:(id)arg4;
-(void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 fieldToFocus:(id)arg5;
-(void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 fieldToFocus:(id)arg5 submitForm:(BOOL)arg6;
-(void)collectURLsForPrefillingAtURL:(id)arg1;
-(void)clearAutoFillMetadata;
-(void)collectFormMetadataForPrefillingAtURL:(id)arg1;
-(void)collectMetadataForTextField:(id)arg1 inFrame:(id)arg2 atURL:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:(id)arg1 formID:(long long)arg2 focusedPasswordControlUniqueID:(id)arg3 passwordControlUniqueIDs:(id)arg4 automaticPassword:(id)arg5 blurAfterSubstitution:(BOOL)arg6 completionHandler:(/*^block*/id)arg7;
-(void)removeAutomaticPasswordElementsInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2 passwordControlUniqueIDs:(id)arg3;
-(void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
-(void)removeAutomaticPasswordVisualTreatmentInFrame:(id)arg1 passwordControlUniqueIDs:(id)arg2;
-(void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 andClearField:(id)arg3 inFrame:(id)arg4;
-(void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3;
-(void)autoFillOneTimeCodeFieldsInFrame:(id)arg1 withValue:(id)arg2;

@end

