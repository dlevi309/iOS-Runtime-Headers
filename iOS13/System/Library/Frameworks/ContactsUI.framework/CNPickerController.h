/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>

@protocol CNPickerControllerDelegate;
@class NSArray, NSString, NSIndexPath, UITextField, UISearchController;

@interface CNPickerController : UITableViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UISearchResultsUpdating, UISearchControllerDelegate, CNPickerControllerDelegate> {

	BOOL _allowsDiscoveredItems;
	BOOL _searchIncludesSupplementalItems;
	BOOL _allowsCustomItems;
	BOOL _searchControllerActive;
	id _selectedItem;
	id<CNPickerControllerDelegate> _delegate;
	NSArray* _discoveredItems;
	NSArray* _promotedItems;
	NSArray* _builtinItems;
	NSArray* _supplementalItems;
	NSArray* _promotedSupplementalItems;
	NSArray* _remainderSupplementalItems;
	NSArray* _customItems;
	NSString* _itemLocalizationKey;
	/*^block*/id _itemLocalizationBlock;
	NSIndexPath* _selectedIndexPath;
	long long _discoveredItemsSection;
	long long _promotedItemsSection;
	long long _builtinItemsSection;
	long long _customItemsSection;
	NSString* _customEditingItem;
	UITextField* _customTextField;
	NSArray* _filterTokens;
	UISearchController* _searchController;
	NSArray* _filteredDiscoveredItems;
	NSArray* _filteredPromotedItems;
	NSArray* _filteredBuiltinItems;
	NSArray* _filteredCustomItems;

}

@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                          //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (assign,nonatomic) long long discoveredItemsSection;                                         //@synthesize discoveredItemsSection=_discoveredItemsSection - In the implementation block
@property (assign,nonatomic) long long promotedItemsSection;                                           //@synthesize promotedItemsSection=_promotedItemsSection - In the implementation block
@property (assign,nonatomic) long long builtinItemsSection;                                            //@synthesize builtinItemsSection=_builtinItemsSection - In the implementation block
@property (assign,nonatomic) long long customItemsSection;                                             //@synthesize customItemsSection=_customItemsSection - In the implementation block
@property (nonatomic,retain) NSString * customEditingItem;                                             //@synthesize customEditingItem=_customEditingItem - In the implementation block
@property (nonatomic,retain) UITextField * customTextField;                                            //@synthesize customTextField=_customTextField - In the implementation block
@property (nonatomic,retain) NSArray * filterTokens;                                                   //@synthesize filterTokens=_filterTokens - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                                    //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,copy) NSArray * filteredDiscoveredItems;                                          //@synthesize filteredDiscoveredItems=_filteredDiscoveredItems - In the implementation block
@property (nonatomic,copy) NSArray * filteredPromotedItems;                                            //@synthesize filteredPromotedItems=_filteredPromotedItems - In the implementation block
@property (nonatomic,copy) NSArray * filteredBuiltinItems;                                             //@synthesize filteredBuiltinItems=_filteredBuiltinItems - In the implementation block
@property (nonatomic,copy) NSArray * filteredCustomItems;                                              //@synthesize filteredCustomItems=_filteredCustomItems - In the implementation block
@property (assign,getter=isSearchControllerActive,nonatomic) BOOL searchControllerActive;              //@synthesize searchControllerActive=_searchControllerActive - In the implementation block
@property (nonatomic,retain) id selectedItem;                                                          //@synthesize selectedItem=_selectedItem - In the implementation block
@property (assign,nonatomic,__weak) id<CNPickerControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * discoveredItems;                                                  //@synthesize discoveredItems=_discoveredItems - In the implementation block
@property (assign,nonatomic) BOOL allowsDiscoveredItems;                                               //@synthesize allowsDiscoveredItems=_allowsDiscoveredItems - In the implementation block
@property (nonatomic,copy) NSArray * promotedItems;                                                    //@synthesize promotedItems=_promotedItems - In the implementation block
@property (nonatomic,copy) NSArray * builtinItems;                                                     //@synthesize builtinItems=_builtinItems - In the implementation block
@property (nonatomic,copy) NSArray * supplementalItems;                                                //@synthesize supplementalItems=_supplementalItems - In the implementation block
@property (nonatomic,copy) NSArray * promotedSupplementalItems;                                        //@synthesize promotedSupplementalItems=_promotedSupplementalItems - In the implementation block
@property (nonatomic,copy) NSArray * remainderSupplementalItems;                                       //@synthesize remainderSupplementalItems=_remainderSupplementalItems - In the implementation block
@property (assign,nonatomic) BOOL searchIncludesSupplementalItems;                                     //@synthesize searchIncludesSupplementalItems=_searchIncludesSupplementalItems - In the implementation block
@property (nonatomic,copy) NSArray * customItems;                                                      //@synthesize customItems=_customItems - In the implementation block
@property (assign,nonatomic) BOOL allowsCustomItems;                                                   //@synthesize allowsCustomItems=_allowsCustomItems - In the implementation block
@property (nonatomic,copy) NSString * itemLocalizationKey;                                             //@synthesize itemLocalizationKey=_itemLocalizationKey - In the implementation block
@property (nonatomic,copy) id itemLocalizationBlock;                                                   //@synthesize itemLocalizationBlock=_itemLocalizationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CNPickerControllerDelegate>)delegate;
-(void)setDelegate:(id<CNPickerControllerDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
-(void)setSelectedItem:(id)arg1 ;
-(id)selectedItem;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)willPresentSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)donePicker:(id)arg1 ;
-(void)cancelPicker:(id)arg1 ;
-(void)picker:(id)arg1 didDeleteItem:(id)arg2 ;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)pickerDidCancel:(id)arg1 ;
-(id)titleForPickerItem:(id)arg1 ;
-(id)titleForAddCustomItem;
-(void)removeCustomItem:(id)arg1 ;
-(void)pickedItem:(id)arg1 ;
-(id)_titleForPickerItem:(id)arg1 ;
-(id)titleForSupplementalItems;
-(void)doneInlineEditing:(id)arg1 ;
-(void)presentExtendedPicker;
-(void)customLabelUpdated:(id)arg1 ;
-(BOOL)isAddCustomItemIndexPath:(id)arg1 ;
-(BOOL)isSupplementalDisclosureItemIndexPath:(id)arg1 ;
-(void)_updateRightButtonItem;
-(void)setFilterTokens:(NSArray *)arg1 ;
-(BOOL)isSearching;
-(unsigned long long)_indexForCustomItemAtIndexPath:(id)arg1 ;
-(id)_itemAtIndexPath:(id)arg1 isPlaceholder:(BOOL*)arg2 ;
-(NSArray *)filteredCustomItems;
-(NSArray *)filteredPromotedItems;
-(NSArray *)filteredDiscoveredItems;
-(NSArray *)filteredBuiltinItems;
-(NSArray *)discoveredItems;
-(void)setDiscoveredItems:(NSArray *)arg1 ;
-(BOOL)allowsDiscoveredItems;
-(void)setAllowsDiscoveredItems:(BOOL)arg1 ;
-(NSArray *)promotedItems;
-(void)setPromotedItems:(NSArray *)arg1 ;
-(NSArray *)builtinItems;
-(void)setBuiltinItems:(NSArray *)arg1 ;
-(NSArray *)supplementalItems;
-(void)setSupplementalItems:(NSArray *)arg1 ;
-(NSArray *)promotedSupplementalItems;
-(void)setPromotedSupplementalItems:(NSArray *)arg1 ;
-(NSArray *)remainderSupplementalItems;
-(void)setRemainderSupplementalItems:(NSArray *)arg1 ;
-(BOOL)searchIncludesSupplementalItems;
-(void)setSearchIncludesSupplementalItems:(BOOL)arg1 ;
-(NSArray *)customItems;
-(void)setCustomItems:(NSArray *)arg1 ;
-(BOOL)allowsCustomItems;
-(void)setAllowsCustomItems:(BOOL)arg1 ;
-(NSString *)itemLocalizationKey;
-(void)setItemLocalizationKey:(NSString *)arg1 ;
-(id)itemLocalizationBlock;
-(void)setItemLocalizationBlock:(id)arg1 ;
-(long long)discoveredItemsSection;
-(void)setDiscoveredItemsSection:(long long)arg1 ;
-(long long)promotedItemsSection;
-(void)setPromotedItemsSection:(long long)arg1 ;
-(long long)builtinItemsSection;
-(void)setBuiltinItemsSection:(long long)arg1 ;
-(long long)customItemsSection;
-(void)setCustomItemsSection:(long long)arg1 ;
-(NSString *)customEditingItem;
-(void)setCustomEditingItem:(NSString *)arg1 ;
-(UITextField *)customTextField;
-(void)setCustomTextField:(UITextField *)arg1 ;
-(NSArray *)filterTokens;
-(void)setFilteredDiscoveredItems:(NSArray *)arg1 ;
-(void)setFilteredPromotedItems:(NSArray *)arg1 ;
-(void)setFilteredBuiltinItems:(NSArray *)arg1 ;
-(void)setFilteredCustomItems:(NSArray *)arg1 ;
-(BOOL)isSearchControllerActive;
-(void)setSearchControllerActive:(BOOL)arg1 ;
@end

