/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/DDRemoteActionViewService.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>

@protocol DDRemoteActionPresenter;
@class DDAction, CNContactViewController, NSString;

@interface DDAddToContactsViewController : UINavigationController <DDRemoteActionViewService, CNContactViewControllerDelegate> {

	id<DDRemoteActionPresenter> _proxy;
	DDAction* _action;
	CNContactViewController* _personViewController;
	BOOL _contactBeingAdded;

}

@property (retain) DDAction * action;                               //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
+(id)alternateNameForContact:(id)arg1 ;
-(void)setCancellable:(BOOL)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(DDAction *)action;
-(void)setAction:(DDAction *)arg1 ;
-(CGSize)preferredContentSize;
-(void)contactViewControllerForUnknownContactDidBeginAddingToContacts:(id)arg1 ;
-(void)contactViewControllerForUnknownContactDidEndAddingToContacts:(id)arg1 ;
-(void)cancelPressed:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)adaptForPresentationInPopover:(BOOL)arg1 ;
-(void)prepareForAction:(id)arg1 ;
-(void)setCancelButtonVisible:(BOOL)arg1 ;
-(void)doneWithAddingContactShouldDismiss:(BOOL)arg1 ;
@end

