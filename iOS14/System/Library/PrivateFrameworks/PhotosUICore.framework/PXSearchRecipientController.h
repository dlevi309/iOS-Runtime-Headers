/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/CNAutocompleteResultsTableViewControllerDelegate.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>

@protocol PXSearchRecipientControllerDelegate;
@class PXRecipientSearchDataSourceManager, PXRecipientSearchDataSource, CNAutocompleteResultsTableViewController, CNComposeRecipient, CNContactViewController, UIView, NSString;

@interface PXSearchRecipientController : NSObject <CNAutocompleteResultsTableViewControllerDelegate, PXSectionedDataSourceManagerObserver> {

	SCD_Struct_PX24 _delegateRespondsTo;
	id<PXSearchRecipientControllerDelegate> _delegate;
	PXRecipientSearchDataSourceManager* _searchDataSourceManager;
	long long _searchState;
	unsigned long long _numberOfSearchRecipients;
	PXRecipientSearchDataSource* __searchDataSource;
	CNAutocompleteResultsTableViewController* __searchResultsTableViewController;
	CNComposeRecipient* _suggestedRecipientBeingViewed;
	CNContactViewController* __contactViewController;

}

@property (setter=_setSearchDataSource:,nonatomic,retain) PXRecipientSearchDataSource * _searchDataSource;                //@synthesize _searchDataSource=__searchDataSource - In the implementation block
@property (assign,nonatomic) long long searchState;                                                                       //@synthesize searchState=_searchState - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSearchRecipients;                                                 //@synthesize numberOfSearchRecipients=_numberOfSearchRecipients - In the implementation block
@property (nonatomic,readonly) BOOL _searchHasNoResultsFound; 
@property (nonatomic,readonly) CNAutocompleteResultsTableViewController * _searchResultsTableViewController;              //@synthesize _searchResultsTableViewController=__searchResultsTableViewController - In the implementation block
@property (nonatomic,retain) CNComposeRecipient * suggestedRecipientBeingViewed;                                          //@synthesize suggestedRecipientBeingViewed=_suggestedRecipientBeingViewed - In the implementation block
@property (assign,nonatomic,__weak) CNContactViewController * _contactViewController;                                     //@synthesize _contactViewController=__contactViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PXSearchRecipientControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PXRecipientSearchDataSourceManager * searchDataSourceManager;                              //@synthesize searchDataSourceManager=_searchDataSourceManager - In the implementation block
@property (nonatomic,readonly) UIView * searchResultsView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2 ;
-(id)init;
-(id<PXSearchRecipientControllerDelegate>)delegate;
-(CNContactViewController *)_contactViewController;
-(void)setDelegate:(id<PXSearchRecipientControllerDelegate>)arg1 ;
-(CNAutocompleteResultsTableViewController *)_searchResultsTableViewController;
-(void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(UIView *)searchResultsView;
-(BOOL)_searchHasNoResultsFound;
-(void)_setSearchDataSource:(id)arg1 ;
-(void)setSearchState:(long long)arg1 ;
-(void)setNumberOfSearchRecipients:(unsigned long long)arg1 ;
-(void)disambiguateRecipient:(id)arg1 ;
-(long long)searchState;
-(id)_validationTextColorForSearchResult:(id)arg1 ;
-(id)_contactViewControllerForRecipient:(id)arg1 ;
-(PXRecipientSearchDataSourceManager *)searchDataSourceManager;
-(unsigned long long)numberOfSearchRecipients;
-(PXRecipientSearchDataSource *)_searchDataSource;
-(CNComposeRecipient *)suggestedRecipientBeingViewed;
-(void)setSuggestedRecipientBeingViewed:(CNComposeRecipient *)arg1 ;
-(void)set_contactViewController:(CNContactViewController *)arg1 ;
-(void)_removeRecent;
-(void)autocompleteResultsController:(id)arg1 tintColorForRecipient:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

