/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/PKAddressSearchModelDelegate.h>
#import <libobjc.A.dylib/PKAddressEditorViewControllerDelegate.h>

@protocol PKAddressSearcherViewControllerDelegate;
@class NSArray, PKContactFormatValidator, UISearchBar, UITableView, _UINavigationControllerPalette, PKAddressSearchModel, CNPostalAddress, NSString;

@interface PKAddressSearcherViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, PKAddressSearchModelDelegate, PKAddressEditorViewControllerDelegate> {

	id<PKAddressSearcherViewControllerDelegate> _delegate;
	NSArray* _requiredKeys;
	PKContactFormatValidator* _contactFormatValidator;
	UISearchBar* _searchBar;
	UITableView* _tableView;
	_UINavigationControllerPalette* _palette;
	PKAddressSearchModel* _searchModel;
	long long _style;
	CNPostalAddress* _selectedAddress;
	NSArray* _completionSearchResults;
	NSArray* _contactsSearchResults;

}

@property (nonatomic,retain) UISearchBar * searchBar;                                                  //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) _UINavigationControllerPalette * palette;                                 //@synthesize palette=_palette - In the implementation block
@property (nonatomic,retain) PKAddressSearchModel * searchModel;                                       //@synthesize searchModel=_searchModel - In the implementation block
@property (assign,nonatomic) long long style;                                                          //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) CNPostalAddress * selectedAddress;                                        //@synthesize selectedAddress=_selectedAddress - In the implementation block
@property (nonatomic,retain) NSArray * completionSearchResults;                                        //@synthesize completionSearchResults=_completionSearchResults - In the implementation block
@property (nonatomic,retain) NSArray * contactsSearchResults;                                          //@synthesize contactsSearchResults=_contactsSearchResults - In the implementation block
@property (assign,nonatomic,__weak) id<PKAddressSearcherViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * requiredKeys;                                                   //@synthesize requiredKeys=_requiredKeys - In the implementation block
@property (nonatomic,retain) PKContactFormatValidator * contactFormatValidator;                        //@synthesize contactFormatValidator=_contactFormatValidator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(UISearchBar *)searchBar;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(_UINavigationControllerPalette *)palette;
-(id<PKAddressSearcherViewControllerDelegate>)delegate;
-(PKAddressSearchModel *)searchModel;
-(UITableView *)tableView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_showAddressEditorWithContact:(id)arg1 withContactErrors:(id)arg2 ;
-(void)setRequiredKeys:(NSArray *)arg1 ;
-(void)addressEditorViewController:(id)arg1 selectedContact:(id)arg2 ;
-(void)addressEditorViewControllerDidCancel:(id)arg1 ;
-(void)setSearchModel:(PKAddressSearchModel *)arg1 ;
-(void)setCompletionSearchResults:(NSArray *)arg1 ;
-(void)setContactsSearchResults:(NSArray *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<PKAddressSearcherViewControllerDelegate>)arg1 ;
-(NSArray *)requiredKeys;
-(void)setSelectedAddress:(CNPostalAddress *)arg1 ;
-(CNPostalAddress *)selectedAddress;
-(void)contactsSearchUpdated:(id)arg1 ;
-(void)selectedAddress:(id)arg1 withError:(id)arg2 ;
-(void)mapSearchUpdated:(id)arg1 ;
-(NSArray *)contactsSearchResults;
-(NSArray *)completionSearchResults;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setPalette:(_UINavigationControllerPalette *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)loadView;
-(BOOL)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(PKContactFormatValidator *)contactFormatValidator;
-(void)setContactFormatValidator:(PKContactFormatValidator *)arg1 ;
-(long long)style;
@end

