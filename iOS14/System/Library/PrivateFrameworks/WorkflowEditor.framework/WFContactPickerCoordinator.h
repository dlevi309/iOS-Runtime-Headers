/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
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
-(WFAlertPresentationSource *)presentationSource;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(UIViewController *)presentingViewController;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setPresentationSource:(WFAlertPresentationSource *)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(id)supportedContactProperties;
-(NSSet *)supportedPersonProperties;
-(void)setSupportedPersonProperties:(NSSet *)arg1 ;
-(void)presentHandlePickerForContact:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)presentContactPickerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dismissPersonViewController;
-(void)finishWithContact:(id)arg1 ;
-(id)contactWithMatchingPropertyAndMultivalueIndex:(id)arg1 ;
@end

