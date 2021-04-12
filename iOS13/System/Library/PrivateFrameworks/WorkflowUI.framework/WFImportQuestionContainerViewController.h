/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFGalleryImportQuestionViewDelegate.h>

@protocol WFImportQuestionContainerViewControllerDelegate;
@class OBWelcomeController, NSString;

@interface WFImportQuestionContainerViewController : UIViewController <WFGalleryImportQuestionViewDelegate> {

	BOOL _backButtonHidden;
	id<WFImportQuestionContainerViewControllerDelegate> _delegate;
	OBWelcomeController* _welcomeController;

}

@property (nonatomic,retain) OBWelcomeController * welcomeController;                                          //@synthesize welcomeController=_welcomeController - In the implementation block
@property (assign,nonatomic,__weak) id<WFImportQuestionContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL backButtonHidden;                                                            //@synthesize backButtonHidden=_backButtonHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFImportQuestionContainerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFImportQuestionContainerViewControllerDelegate>)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)backButtonHidden;
-(void)setBackButtonHidden:(BOOL)arg1 ;
-(void)keyboardWillChange:(id)arg1 ;
-(void)didTapCancel;
-(OBWelcomeController *)welcomeController;
-(void)galleryImportQuestionViewDidUpdateContentSize:(id)arg1 ;
-(id)initWithImportQuestion:(id)arg1 isLastQuestion:(BOOL)arg2 backButtonHidden:(BOOL)arg3 ;
-(id)welcomeControllerForImportQuestion:(id)arg1 isLastQuestion:(BOOL)arg2 ;
-(void)didTapBack;
-(void)didTapNext;
-(void)didTapSkip;
-(void)setWelcomeController:(OBWelcomeController *)arg1 ;
@end

