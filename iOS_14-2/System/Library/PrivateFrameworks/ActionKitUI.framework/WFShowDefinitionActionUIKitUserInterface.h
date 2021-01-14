/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <WorkflowKit/WFActionUserInterface.h>
#import <libobjc.A.dylib/WFReferenceLibraryViewControllerDelegate.h>
#import <libobjc.A.dylib/WFShowDefinitionActionUserInterface.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class NSString;

@interface WFShowDefinitionActionUIKitUserInterface : WFActionUserInterface <WFReferenceLibraryViewControllerDelegate, WFShowDefinitionActionUserInterface, UIAdaptivePresentationControllerDelegate> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showWithString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)libraryControllerDidDismiss:(id)arg1 ;
@end

