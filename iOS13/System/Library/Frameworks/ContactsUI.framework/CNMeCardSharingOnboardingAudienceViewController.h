/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNMeCardSharingOnboardingViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol CNMeCardSharingOnboardingAudienceViewControllerDelegate;
@class CNMeCardSharingAudienceDataSource, CNMeCardSharingOnboardingHeaderViewController, NSString;

@interface CNMeCardSharingOnboardingAudienceViewController : CNMeCardSharingOnboardingViewController <UITableViewDelegate, UITableViewDataSource> {

	id<CNMeCardSharingOnboardingAudienceViewControllerDelegate> _delegate;
	CNMeCardSharingAudienceDataSource* _sharingAudienceDataSource;
	CNMeCardSharingOnboardingHeaderViewController* _headerViewController;

}

@property (nonatomic,retain) CNMeCardSharingAudienceDataSource * sharingAudienceDataSource;                            //@synthesize sharingAudienceDataSource=_sharingAudienceDataSource - In the implementation block
@property (nonatomic,retain) CNMeCardSharingOnboardingHeaderViewController * headerViewController;                     //@synthesize headerViewController=_headerViewController - In the implementation block
@property (assign,nonatomic,__weak) id<CNMeCardSharingOnboardingAudienceViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)headerText;
-(void)dealloc;
-(id<CNMeCardSharingOnboardingAudienceViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNMeCardSharingOnboardingAudienceViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(CNMeCardSharingOnboardingHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(CNMeCardSharingOnboardingHeaderViewController *)arg1 ;
-(CNMeCardSharingAudienceDataSource *)sharingAudienceDataSource;
-(id)initWithSelectedSharingAudience:(unsigned long long)arg1 ;
-(void)handleConfirmButtonTapped;
-(void)setSharingAudienceDataSource:(CNMeCardSharingAudienceDataSource *)arg1 ;
@end

