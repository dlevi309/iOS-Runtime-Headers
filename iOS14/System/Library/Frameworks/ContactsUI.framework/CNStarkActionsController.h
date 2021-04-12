/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNContactQuickActionViewContainer.h>
#import <libobjc.A.dylib/CNContactQuickActionsControllerDelegate.h>
#import <libobjc.A.dylib/CNStarkActionViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol UINavigationControllerDelegate;
@class CNContact, CNContactQuickActionsController, UIViewController, CNStarkActionView, NSArray, UITraitCollection, NSString;

@interface CNStarkActionsController : UIViewController <CNContactQuickActionViewContainer, CNContactQuickActionsControllerDelegate, CNStarkActionViewDelegate, UINavigationControllerDelegate> {

	CNContact* _contact;
	CNContactQuickActionsController* _quickActionsController;
	UIViewController* _disambiguationViewController;
	id<UINavigationControllerDelegate> _phoneNavigationControllerDelegate;
	CNStarkActionView* _messageActionView;
	CNStarkActionView* _callActionView;
	CNStarkActionView* _directionsActionView;
	double _willTransitionToBoundsWidth;
	NSArray* _layoutConstraints;

}

@property (nonatomic,readonly) CNContact * contact;                                                                    //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNContactQuickActionsController * quickActionsController;                               //@synthesize quickActionsController=_quickActionsController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * disambiguationViewController;                                   //@synthesize disambiguationViewController=_disambiguationViewController - In the implementation block
@property (assign,nonatomic,__weak) id<UINavigationControllerDelegate> phoneNavigationControllerDelegate;              //@synthesize phoneNavigationControllerDelegate=_phoneNavigationControllerDelegate - In the implementation block
@property (nonatomic,readonly) CNStarkActionView * messageActionView;                                                  //@synthesize messageActionView=_messageActionView - In the implementation block
@property (nonatomic,readonly) CNStarkActionView * callActionView;                                                     //@synthesize callActionView=_callActionView - In the implementation block
@property (nonatomic,readonly) CNStarkActionView * directionsActionView;                                               //@synthesize directionsActionView=_directionsActionView - In the implementation block
@property (assign,nonatomic) double willTransitionToBoundsWidth;                                                       //@synthesize willTransitionToBoundsWidth=_willTransitionToBoundsWidth - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                                                              //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(void)updateViewConstraints;
-(CNContact *)contact;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForActionType:(id)arg1 ;
-(void)resetLayoutConstraints;
-(void)setupLayoutConstraints;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(void)actionViewTapped:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithContact:(id)arg1 ;
-(CNStarkActionView *)callActionView;
-(void)contactQuickActionsController:(id)arg1 presentDisambiguationViewController:(id)arg2 forActionType:(id)arg3 ;
-(void)contactQuickActionsController:(id)arg1 dismissDisambiguationViewController:(id)arg2 forActionType:(id)arg3 ;
-(void)addForwardingDelegate;
-(void)removeForwardingDelegate;
-(CNContactQuickActionsController *)quickActionsController;
-(void)forwardDelegateForNavigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(UIViewController *)disambiguationViewController;
-(void)setDisambiguationViewController:(UIViewController *)arg1 ;
-(CNStarkActionView *)messageActionView;
-(id<UINavigationControllerDelegate>)phoneNavigationControllerDelegate;
-(void)setPhoneNavigationControllerDelegate:(id<UINavigationControllerDelegate>)arg1 ;
-(CNStarkActionView *)directionsActionView;
-(double)willTransitionToBoundsWidth;
-(void)setWillTransitionToBoundsWidth:(double)arg1 ;
-(void)setupViews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)updateViews;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

