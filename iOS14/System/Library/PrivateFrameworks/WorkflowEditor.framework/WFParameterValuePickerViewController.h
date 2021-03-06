/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/WFParameterEventObserver.h>

@protocol WFParameterValuePickable, WFParameterValuePickerViewControllerDelegate, WFVariableProvider, WFVariableUIDelegate;
@class UIBarButtonItem, WFParameter, NSString, WFVariableSubstitutableParameterState, UISearchController, NSMutableDictionary, INObjectCollection, WFParameterValuePickerDataSource, WFDebouncer, NSSet, UIView, UISearchBar, UILabel;

@interface WFParameterValuePickerViewController : UITableViewController <UISearchResultsUpdating, UISearchBarDelegate, WFParameterEventObserver> {

	BOOL _allowsMultipleSelection;
	UIBarButtonItem* _doneBarButtonItem;
	UIBarButtonItem* _removeItemBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;
	WFParameter*<WFParameterValuePickable> _parameter;
	NSString* _sizeClass;
	WFVariableSubstitutableParameterState* _currentState;
	id<WFParameterValuePickerViewControllerDelegate> _delegate;
	UISearchController* _searchController;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	NSString* _noOptionAvailableTitle;
	NSString* _removeItemButtonTitle;
	NSMutableDictionary* _cachedResults;
	NSMutableDictionary* _cachedPrompts;
	INObjectCollection* _defaultResults;
	NSString* _defaultPrompt;
	WFParameterValuePickerDataSource* _dataSource;
	WFDebouncer* _inputDebouncer;
	NSSet* _allowedVariableTypes;
	long long _maximumSelectableItemsCount;
	UIView* _errorMessageView;
	UISearchBar* _searchBar;
	UILabel* _errorTitleLabel;
	UILabel* _errorMessageLabel;

}

@property (nonatomic,retain) NSMutableDictionary * cachedResults;                                           //@synthesize cachedResults=_cachedResults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedPrompts;                                           //@synthesize cachedPrompts=_cachedPrompts - In the implementation block
@property (nonatomic,retain) INObjectCollection * defaultResults;                                           //@synthesize defaultResults=_defaultResults - In the implementation block
@property (nonatomic,retain) NSString * defaultPrompt;                                                      //@synthesize defaultPrompt=_defaultPrompt - In the implementation block
@property (nonatomic,retain) WFVariableSubstitutableParameterState * currentState;                          //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain) WFParameterValuePickerDataSource * dataSource;                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) WFDebouncer * inputDebouncer;                                                  //@synthesize inputDebouncer=_inputDebouncer - In the implementation block
@property (nonatomic,copy) NSSet * allowedVariableTypes;                                                    //@synthesize allowedVariableTypes=_allowedVariableTypes - In the implementation block
@property (assign,nonatomic) long long maximumSelectableItemsCount;                                         //@synthesize maximumSelectableItemsCount=_maximumSelectableItemsCount - In the implementation block
@property (nonatomic,retain) UIView * errorMessageView;                                                     //@synthesize errorMessageView=_errorMessageView - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                                         //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                                       //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) UILabel * errorTitleLabel;                                                     //@synthesize errorTitleLabel=_errorTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * errorMessageLabel;                                                   //@synthesize errorMessageLabel=_errorMessageLabel - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * doneBarButtonItem;                                         //@synthesize doneBarButtonItem=_doneBarButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * removeItemBarButtonItem;                                   //@synthesize removeItemBarButtonItem=_removeItemBarButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * cancelBarButtonItem;                                       //@synthesize cancelBarButtonItem=_cancelBarButtonItem - In the implementation block
@property (nonatomic,readonly) WFParameter*<WFParameterValuePickable> parameter;                            //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,readonly) NSString * sizeClass;                                                        //@synthesize sizeClass=_sizeClass - In the implementation block
@property (assign,nonatomic,__weak) id<WFParameterValuePickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider;                                //@synthesize variableProvider=_variableProvider - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate;                            //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (assign,nonatomic) BOOL allowsMultipleSelection;                                                  //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
@property (nonatomic,copy) NSString * noOptionAvailableTitle;                                               //@synthesize noOptionAvailableTitle=_noOptionAvailableTitle - In the implementation block
@property (nonatomic,copy) NSString * removeItemButtonTitle;                                                //@synthesize removeItemButtonTitle=_removeItemButtonTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentState:(WFVariableSubstitutableParameterState *)arg1 ;
-(BOOL)allowsMultipleSelection;
-(UISearchBar *)searchBar;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)setSearchController:(UISearchController *)arg1 ;
-(UISearchController *)searchController;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(WFVariableSubstitutableParameterState *)currentState;
-(id<WFParameterValuePickerViewControllerDelegate>)delegate;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(WFParameterValuePickerDataSource *)dataSource;
-(NSString *)sizeClass;
-(UIBarButtonItem *)doneBarButtonItem;
-(void)setDelegate:(id<WFParameterValuePickerViewControllerDelegate>)arg1 ;
-(void)setDataSource:(WFParameterValuePickerDataSource *)arg1 ;
-(WFParameter*<WFParameterValuePickable>)parameter;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setCachedResults:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedResults;
-(BOOL)accessibilityPerformEscape;
-(void)loadView;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(UIBarButtonItem *)cancelBarButtonItem;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)parameterAttributesDidChange:(id)arg1 ;
-(id<WFVariableProvider>)variableProvider;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(UILabel *)errorTitleLabel;
-(void)setErrorTitleLabel:(UILabel *)arg1 ;
-(UILabel *)errorMessageLabel;
-(void)setErrorMessageLabel:(UILabel *)arg1 ;
-(void)displayError:(id)arg1 ;
-(void)setAllowedVariableTypes:(NSSet *)arg1 ;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(void)setNoOptionAvailableTitle:(NSString *)arg1 ;
-(id)initWithParameter:(id)arg1 widgetSizeClass:(id)arg2 allowsVariables:(BOOL)arg3 initialCollection:(id)arg4 currentState:(id)arg5 delegate:(id)arg6 ;
-(void)setRemoveItemButtonTitle:(NSString *)arg1 ;
-(UIBarButtonItem *)removeItemBarButtonItem;
-(void)configureCell:(id)arg1 forState:(id)arg2 ;
-(void)configureCell:(id)arg1 forVariable:(id)arg2 ;
-(void)reloadNavigationBarButtonItems;
-(id)extractIntentsExecutionErrorFromError:(id)arg1 ;
-(void)displayNoOptionsAvailableMessageIfNeeded;
-(BOOL)currentSelectedValuesContainsState:(id)arg1 ;
-(void)validateCurrentStateWithCollection:(id)arg1 ;
-(void)reloadDisplayingValuesWithCollection:(id)arg1 searchTerm:(id)arg2 validateCurrentState:(BOOL)arg3 animatingDifferences:(BOOL)arg4 ;
-(void)performSearchWithUserInput:(id)arg1 ;
-(void)updateSearchResultsFromCurrentUserInput;
-(void)finishPickingValue;
-(void)cancelPickingValue;
-(void)requestRemovingItem;
-(NSString *)noOptionAvailableTitle;
-(NSString *)removeItemButtonTitle;
-(NSMutableDictionary *)cachedPrompts;
-(void)setCachedPrompts:(NSMutableDictionary *)arg1 ;
-(INObjectCollection *)defaultResults;
-(void)setDefaultResults:(INObjectCollection *)arg1 ;
-(NSString *)defaultPrompt;
-(void)setDefaultPrompt:(NSString *)arg1 ;
-(WFDebouncer *)inputDebouncer;
-(void)setInputDebouncer:(WFDebouncer *)arg1 ;
-(long long)maximumSelectableItemsCount;
-(void)setMaximumSelectableItemsCount:(long long)arg1 ;
-(UIView *)errorMessageView;
-(void)setErrorMessageView:(UIView *)arg1 ;
@end

