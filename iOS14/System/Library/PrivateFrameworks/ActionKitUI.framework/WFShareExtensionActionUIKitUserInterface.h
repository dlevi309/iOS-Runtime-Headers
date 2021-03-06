/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <WorkflowKit/WFActionUserInterface.h>

@interface WFShareExtensionActionUIKitUserInterface : WFActionUserInterface {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performActionWithInput:(id)arg1 inputConfiguration:(id)arg2 socialServiceType:(id)arg3 extensionBundleIdentifier:(id)arg4 extensionUserInfo:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)addContentToShareController:(id)arg1 withInput:(id)arg2 inputConfiguration:(id)arg3 extensionUserInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)contentItemClassesFromInputConfiguration:(id)arg1 ;
-(id)inputContentItemClassesFromInputConfiguration:(id)arg1 ;
-(void)finishWithContentCollection:(id)arg1 error:(id)arg2 ;
@end

