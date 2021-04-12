/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PKPassPersonalizationCellDelegate.h>
#import <libobjc.A.dylib/PKPassPersonalizationFooterViewDelegate.h>
#import <libobjc.A.dylib/PKPassPersonalizationTermsViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>

@protocol PKPassPersonalizationViewControllerDelegate;
@class PKPassPersonalizationHeaderView, PKPassPersonalizationFooterView, UIBarButtonItem, UIButton, PKPass, NSString, PKContact, NSArray;

@interface PKPassPersonalizationViewController : UITableViewController <PKPassPersonalizationCellDelegate, PKPassPersonalizationFooterViewDelegate, PKPassPersonalizationTermsViewControllerDelegate, PKPaymentSetupViewControllerDelegate> {

	PKPassPersonalizationHeaderView* _headerView;
	PKPassPersonalizationFooterView* _footerView;
	UIBarButtonItem* _personalizeNowButton;
	UIButton* _personalizeLaterButton;
	PKPass* _pass;
	NSString* _personalizationToken;
	PKContact* _contact;
	NSArray* _cellContexts;
	unsigned long long _personalizationSource;
	BOOL _hasScrolledToCells;
	BOOL _termsAndConditionsAccepted;
	id<PKPassPersonalizationViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<PKPassPersonalizationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PKPassPersonalizationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPassPersonalizationViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)passPersonalizationFooterViewPrivacyLinkPressed:(id)arg1 ;
-(BOOL)personalizationCellShouldBeginEditing:(id)arg1 ;
-(BOOL)personalizationCellShouldReturn:(id)arg1 ;
-(void)personalizationCellDidChangeValue:(id)arg1 ;
-(void)_personalizeNowButtonPressed:(id)arg1 ;
-(void)_personalizeLaterButtonPressed:(id)arg1 ;
-(BOOL)_contactReadyForPersonalization;
-(void)_configureHeaderViewForState:(unsigned long long)arg1 ;
-(void)_configureFooterView;
-(void)_positionFooterView;
-(void)_scrollToCellsIfNeeded;
-(id)_nextCellForIndexPath:(id)arg1 ;
-(void)_personalizePass;
-(void)_presentPersonalizationErrorAlert;
-(void)passPersonalizationTermsViewControllerDidAcceptTerms:(id)arg1 ;
-(void)passPersonalizationTermsViewControllerDidDeclineTerms:(id)arg1 ;
-(id)initWithPass:(id)arg1 personalizationToken:(id)arg2 personalizationSource:(unsigned long long)arg3 ;
@end

