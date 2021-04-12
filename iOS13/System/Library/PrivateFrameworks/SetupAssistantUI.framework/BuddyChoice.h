/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/


@class UIViewController, NSString, UIAlertController;

@interface BuddyChoice : NSObject {

	UIViewController* _nextController;
	NSString* _title;
	Class _nextControllerClass;
	UIViewController* _choiceController;
	/*^block*/id _condition;
	UIAlertController* _alertController;
	/*^block*/id _confirmationCompletion;

}

@property (nonatomic,copy) id condition;                                              //@synthesize condition=_condition - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                     //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,copy) id confirmationCompletion;                                 //@synthesize confirmationCompletion=_confirmationCompletion - In the implementation block
@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) Class nextControllerClass;                               //@synthesize nextControllerClass=_nextControllerClass - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * choiceController;              //@synthesize choiceController=_choiceController - In the implementation block
-(id)condition;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(void)setCondition:(id)arg1 ;
-(void)setNextControllerClass:(Class)arg1 ;
-(void)_choiceConfirmed:(BOOL)arg1 ;
-(void)setConfirmationCompletion:(id)arg1 ;
-(UIViewController *)choiceController;
-(id)confirmationCompletion;
-(id)initWithTitle:(id)arg1 nextItemClass:(Class)arg2 ;
-(id)confirmationAcceptActionWithTitle:(id)arg1 style:(long long)arg2 action:(/*^block*/id)arg3 ;
-(id)confirmationCancelActionWithTitle:(id)arg1 style:(long long)arg2 action:(/*^block*/id)arg3 ;
-(void)setConfirmationAlert:(id)arg1 condition:(/*^block*/id)arg2 ;
-(void)runConfirmationIfNeededCompletion:(/*^block*/id)arg1 ;
-(Class)nextControllerClass;
-(void)setChoiceController:(UIViewController *)arg1 ;
@end

