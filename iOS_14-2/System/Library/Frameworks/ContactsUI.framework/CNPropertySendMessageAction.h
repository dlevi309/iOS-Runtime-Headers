/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyAction.h>
#import <libobjc.A.dylib/CNContactActionsControllerDelegate.h>

@class UIAlertController, CNContactActionsController, CNUIUserActionListDataSource, NSString;

@interface CNPropertySendMessageAction : CNPropertyAction <CNContactActionsControllerDelegate> {

	UIAlertController* _alertController;
	CNContactActionsController* _actionsController;
	CNUIUserActionListDataSource* _actionsDataSource;

}

@property (nonatomic,retain) UIAlertController * alertController;                           //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) CNContactActionsController * actionsController;                //@synthesize actionsController=_actionsController - In the implementation block
@property (nonatomic,retain) CNUIUserActionListDataSource * actionsDataSource;              //@synthesize actionsDataSource=_actionsDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performActionWithSender:(id)arg1 ;
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(CNContactActionsController *)actionsController;
-(UIAlertController *)alertController;
-(id)initWithContact:(id)arg1 propertyItems:(id)arg2 actionDataSource:(id)arg3 ;
-(void)contactActionsController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)setActionsController:(CNContactActionsController *)arg1 ;
-(CNUIUserActionListDataSource *)actionsDataSource;
-(void)setActionsDataSource:(CNUIUserActionListDataSource *)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)presentDisambiguationAlertWithSender:(id)arg1 ;
@end

