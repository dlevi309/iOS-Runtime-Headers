/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNContactInlineActionsViewControllerDelegate_Internal.h>
#import <libobjc.A.dylib/CNUIObjectViewControllerDelegate.h>
#import <libobjc.A.dylib/CNGroupIdentityActionItemDelegate.h>

@class CNGroupIdentity, CNContactInlineActionsViewController, CNGroupIdentityInlineActionsViewConfiguration, NSString;

@interface CNGroupIdentityInlineActionsViewController : UIViewController <CNContactInlineActionsViewControllerDelegate_Internal, CNUIObjectViewControllerDelegate, CNGroupIdentityActionItemDelegate> {

	CNGroupIdentity* _group;
	CNContactInlineActionsViewController* _inlineActionsViewController;
	CNGroupIdentityInlineActionsViewConfiguration* _configuration;

}

@property (nonatomic,retain) CNGroupIdentity * group;                                                         //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) CNContactInlineActionsViewController * inlineActionsViewController;              //@synthesize inlineActionsViewController=_inlineActionsViewController - In the implementation block
@property (nonatomic,readonly) CNGroupIdentityInlineActionsViewConfiguration * configuration;                 //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) long long style; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(void)setGroup:(CNGroupIdentity *)arg1 ;
-(CNGroupIdentity *)group;
-(id)hostingViewControllerForController:(id)arg1 ;
-(BOOL)contactInlineActionsViewController:(id)arg1 shouldPresentDisambiguationUIForActionOfType:(id)arg2 ;
-(void)contactInlineActionsViewController:(id)arg1 didSelectActionOfType:(id)arg2 ;
-(BOOL)contactInlineActionsViewController:(id)arg1 canPerformGroupActionOfType:(id)arg2 ;
-(id)contactInlineActionsViewController:(id)arg1 overrideImageForActionOfType:(id)arg2 ;
-(id)contactInlineActionsViewController:(id)arg1 overrideTitleForActionOfType:(id)arg2 ;
-(BOOL)contactInlineActionsViewController:(id)arg1 shouldOverrideEnabledStateForActionOfType:(id)arg2 ;
-(BOOL)contactInlineActionsViewController:(id)arg1 overrideEnabledStateForActionOfType:(id)arg2 ;
-(void)groupIdentityActionItem:(id)arg1 didUpdateOverrideEnabledState:(BOOL)arg2 ;
-(double)actionsViewHeightThatFits:(CGSize)arg1 ;
-(void)groupIdentityActionItem:(id)arg1 didUpdateActionBlock:(/*^block*/id)arg2 ;
-(CNContactInlineActionsViewController *)inlineActionsViewController;
-(void)updateActionsViewForUpdatedActionItem:(id)arg1 ;
-(void)setInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 ;
-(id)actionsContainerView;
-(CNGroupIdentityInlineActionsViewConfiguration *)configuration;
-(id)actionsView;
-(id)initWithGroupIdentity:(id)arg1 actionsViewConfiguration:(id)arg2 ;
-(void)setupActionsView;
-(id)viewForActionAtIndex:(unsigned long long)arg1 ;
-(void)viewDidLoad;
-(long long)style;
@end

