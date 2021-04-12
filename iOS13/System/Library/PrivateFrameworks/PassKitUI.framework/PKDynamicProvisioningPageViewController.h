/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@class UIImage, PKDynamicProvisioningPageContent, NSString;

@interface PKDynamicProvisioningPageViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKViewControllerPreflightable> {

	UIImage* _heroImage;
	PKDynamicProvisioningPageContent* _page;
	/*^block*/id _primaryButtonAction;
	/*^block*/id _secondaryButtonAction;
	/*^block*/id _bodyButtonAction;
	/*^block*/id _cancelButtonAction;
	/*^block*/id _doneButtonAction;

}

@property (nonatomic,readonly) PKDynamicProvisioningPageContent * page;              //@synthesize page=_page - In the implementation block
@property (nonatomic,copy) id primaryButtonAction;                                   //@synthesize primaryButtonAction=_primaryButtonAction - In the implementation block
@property (nonatomic,copy) id secondaryButtonAction;                                 //@synthesize secondaryButtonAction=_secondaryButtonAction - In the implementation block
@property (nonatomic,copy) id bodyButtonAction;                                      //@synthesize bodyButtonAction=_bodyButtonAction - In the implementation block
@property (nonatomic,copy) id cancelButtonAction;                                    //@synthesize cancelButtonAction=_cancelButtonAction - In the implementation block
@property (nonatomic,copy) id doneButtonAction;                                      //@synthesize doneButtonAction=_doneButtonAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(PKDynamicProvisioningPageContent *)page;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(id)primaryButtonAction;
-(void)setPrimaryButtonAction:(id)arg1 ;
-(id)secondaryButtonAction;
-(void)setSecondaryButtonAction:(id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)explanationViewDidSelectBodyButton:(id)arg1 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(void)explanationViewControllerDidSelectDone:(id)arg1 ;
-(id)initWithPage:(id)arg1 context:(long long)arg2 ;
-(void)setCancelButtonAction:(id)arg1 ;
-(void)setDoneButtonAction:(id)arg1 ;
-(void)setBodyButtonAction:(id)arg1 ;
-(id)bodyButtonAction;
-(id)cancelButtonAction;
-(id)doneButtonAction;
@end

