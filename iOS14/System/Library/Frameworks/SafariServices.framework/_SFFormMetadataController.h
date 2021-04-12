/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariShared/WBSFormMetadataController.h>
#import <libobjc.A.dylib/WKWebProcessPlugInFormDelegatePrivate.h>

@protocol SFFormMetadataObserver;
@class WKWebProcessPlugInScriptWorld, _SFWebProcessPlugInPageController, NSDictionary, WBSFormMetadata, WKWebProcessPlugInFrame, NSString;

@interface _SFFormMetadataController : WBSFormMetadataController <WKWebProcessPlugInFormDelegatePrivate> {

	WKWebProcessPlugInScriptWorld* _scriptWorld;
	_SFWebProcessPlugInPageController* _pageController;
	id<SFFormMetadataObserver> _observer;
	NSDictionary* _assistedNodeMetadata;
	BOOL _shouldListenForFormChanges;
	WBSFormMetadata* _unsubmittedForm;
	WKWebProcessPlugInFrame* _unsubmittedFormFrame;
	BOOL _autoFillInProgress;
	BOOL _focusingFormForStreamlinedLogin;

}

@property (nonatomic,readonly) WKWebProcessPlugInScriptWorld * scriptWorld; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPageController:(id)arg1 ;
-(void)focusFormForStreamlinedLogin:(double)arg1 inFrame:(id)arg2 ;
-(void)_willNavigateFrameWithUnsubmittedForm:(id)arg1 ;
-(void)collectFormMetadataForPreFilling;
-(id)_webProcessPlugInBrowserContextController:(id)arg1 willSubmitForm:(id)arg2 toFrame:(id)arg3 fromFrame:(id)arg4 withValues:(id)arg5 ;
-(id)_observer;
-(void)collectMetadataForTextField:(id)arg1 inFrame:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)clearField:(id)arg1 inFrame:(id)arg2 ;
-(BOOL)shouldIncludeNonEmptyFields;
-(id)formAutoFillNodeForJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(BOOL)_webProcessPlugInBrowserContextControllerShouldNotifyOnFormChanges:(id)arg1 ;
-(void)creditCardFieldFocused:(id)arg1 inFrame:(id)arg2 ;
-(void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(BOOL)arg3 setAutoFilled:(BOOL)arg4 focusFieldAfterFilling:(BOOL)arg5 fieldToFocus:(id)arg6 submitForm:(BOOL)arg7 ;
-(void)didFindSearchURLTemplateString:(id)arg1 inFrame:(id)arg2 pageController:(id)arg3 ;
-(WKWebProcessPlugInScriptWorld *)scriptWorld;
-(void)_webProcessPlugInBrowserContextController:(id)arg1 textDidChangeInTextField:(id)arg2 inFrame:(id)arg3 initiatedByUserTyping:(BOOL)arg4 ;
-(BOOL)_formContainsAutoFilledElements:(id)arg1 ;
-(void)didSameDocumentNavigation:(long long)arg1 inFrame:(id)arg2 ;
-(void)_collectFormMetadataForPreFilling:(BOOL)arg1 ;
-(id)_webProcessPlugInBrowserContextController:(id)arg1 willBeginInputSessionForElement:(id)arg2 inFrame:(id)arg3 userIsInteracting:(BOOL)arg4 ;
-(void)collectURLsForPreFilling;
-(void)removeAutomaticPasswordVisualTreatmentInFrame:(id)arg1 passwordControlUniqueIDs:(id)arg2 ;
-(void)_webProcessPlugInBrowserContextController:(id)arg1 willSendSubmitEventToForm:(id)arg2 inFrame:(id)arg3 targetFrame:(id)arg4 values:(id)arg5 ;
-(void)clearScriptWorld;
-(void)invalidate;
-(void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2 isPasswordFieldForUserCredentials:(BOOL)arg3 ;
-(void)finishedAutoFillingForm:(id)arg1 inFrame:(id)arg2 shouldSubmit:(BOOL)arg3 ;
-(void)didStartProvisionalLoadForFrame:(id)arg1 ;
-(id)fillForm:(double)arg1 inFrame:(id)arg2 withPassword:(id)arg3 focusedFieldControlID:(id)arg4 ;
-(id)_assistedNodeMetadataWithPasswordField:(id)arg1 passwordFieldMetadata:(id)arg2 formMetadata:(id)arg3 inFrame:(id)arg4 ;
-(void)removeAutomaticPasswordElementsInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2 passwordControlUniqueIDs:(id)arg3 blurAfterRemoval:(BOOL)arg4 ;
-(void)usernameFieldFocused:(id)arg1 fieldMetadata:(id)arg2 inForm:(id)arg3 inFrame:(id)arg4 ;
-(void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(BOOL)arg3 setAutoFilled:(BOOL)arg4 selectFieldAfterFilling:(id)arg5 ;
-(void)dealloc;
@end

