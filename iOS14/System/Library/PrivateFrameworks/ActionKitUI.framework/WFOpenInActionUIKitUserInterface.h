/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <WorkflowKit/WFActionUserInterface.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>
#import <libobjc.A.dylib/WFOpenInActionUserInterface.h>

@class UIDocumentInteractionController, NSString;

@interface WFOpenInActionUIKitUserInterface : WFActionUserInterface <UIDocumentInteractionControllerDelegate, WFOpenInActionUserInterface> {

	/*^block*/id _completionHandler;
	UIDocumentInteractionController* _documentController;

}

@property (nonatomic,copy) id completionHandler;                                                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) UIDocumentInteractionController * documentController;              //@synthesize documentController=_documentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1 ;
-(id)excludedActivityTypesForDocumentInteractionController:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)finishWithError:(id)arg1 ;
-(UIDocumentInteractionController *)documentController;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showWithFile:(id)arg1 contentManaged:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setDocumentController:(UIDocumentInteractionController *)arg1 ;
@end

