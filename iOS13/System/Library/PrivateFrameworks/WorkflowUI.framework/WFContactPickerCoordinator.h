/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class NSSet, WFAlertPresentationSource, UIViewController, NSString;

@interface WFContactPickerCoordinator : NSObject <CNContactPickerDelegate, CNContactViewControllerDelegate, UIPopoverPresentationControllerDelegate> {

	NSSet* _supportedPersonProperties;
	WFAlertPresentationSource* _presentationSource;
	UIViewController* _presentingViewController;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSSet * supportedPersonProperties;                                 //@synthesize supportedPersonProperties=_supportedPersonProperties - In the implementation block
@property (nonatomic,retain) WFAlertPresentationSource * presentationSource;                  //@synthesize presentationSource=_presentationSource - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)setPresentationSource:(WFAlertPresentationSource *)arg1 ;
-(WFAlertPresentationSource *)presentationSource;
-(id)supportedContactProperties;
-(void)presentContactPickerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentHandlePickerForContact:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)presentViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dismissPersonViewController;
-(void)finishWithContact:(id)arg1 ;
-(id)contactWithMatchingPropertyAndMultivalueIndex:(id)arg1 ;
-(NSSet *)supportedPersonProperties;
-(void)setSupportedPersonProperties:(NSSet *)arg1 ;
@end

