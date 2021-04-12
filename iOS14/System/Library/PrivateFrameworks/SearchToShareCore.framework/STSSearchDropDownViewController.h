/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/STSCategorySelectionDelegate.h>
#import <libobjc.A.dylib/STSSuggestionSelectionDelegate.h>
#import <libobjc.A.dylib/STSSearchModelUpdateDelegate.h>
#import <libobjc.A.dylib/PopUpPresentationDelegate.h>
#import <libobjc.A.dylib/PopUpLegalDelegate.h>
#import <libobjc.A.dylib/STSKeyCommandDelegate.h>

@protocol PopUpPlugin, STSSearchDropDownViewControllerDelegate, PopUpSearchViewDelegate;
@class NSString, STSSearchModel, CategoriesDataSource, SuggestionsDataSource, STSDropDownRootView;

@interface STSSearchDropDownViewController : UIViewController <STSCategorySelectionDelegate, STSSuggestionSelectionDelegate, STSSearchModelUpdateDelegate, PopUpPresentationDelegate, PopUpLegalDelegate, STSKeyCommandDelegate> {

	NSString* _currentQuery;
	BOOL _didSendCategoryResultFeedback;
	unsigned long long _popUpShowing;
	BOOL _sendFeedbackOnViewDidAppear;
	id<PopUpPlugin> _popUpPlugin;
	NSString* _query;
	STSSearchModel* _searchModel;
	id<STSSearchDropDownViewControllerDelegate> _delegate;
	id<PopUpSearchViewDelegate> _locationDelegate;
	NSString* _sceneIdentifier;
	CategoriesDataSource* _categoriesDataSource;
	SuggestionsDataSource* _suggestionsDataSource;

}

@property (nonatomic,retain) STSDropDownRootView * view; 
@property (nonatomic,retain) CategoriesDataSource * categoriesDataSource;                              //@synthesize categoriesDataSource=_categoriesDataSource - In the implementation block
@property (nonatomic,retain) SuggestionsDataSource * suggestionsDataSource;                            //@synthesize suggestionsDataSource=_suggestionsDataSource - In the implementation block
@property (nonatomic,retain) id<PopUpPlugin> popUpPlugin;                                              //@synthesize popUpPlugin=_popUpPlugin - In the implementation block
@property (nonatomic,retain) NSString * query;                                                         //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) BOOL sendFeedbackOnViewDidAppear;                                         //@synthesize sendFeedbackOnViewDidAppear=_sendFeedbackOnViewDidAppear - In the implementation block
@property (nonatomic,readonly) STSSearchModel * searchModel;                                           //@synthesize searchModel=_searchModel - In the implementation block
@property (assign,nonatomic,__weak) id<STSSearchDropDownViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PopUpSearchViewDelegate> locationDelegate;                      //@synthesize locationDelegate=_locationDelegate - In the implementation block
@property (nonatomic,copy) NSString * sceneIdentifier;                                                 //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)query;
-(void)setSceneIdentifier:(NSString *)arg1 ;
-(NSString *)sceneIdentifier;
-(id<STSSearchDropDownViewControllerDelegate>)delegate;
-(STSSearchModel *)searchModel;
-(void)close;
-(SuggestionsDataSource *)suggestionsDataSource;
-(void)setSuggestionsDataSource:(SuggestionsDataSource *)arg1 ;
-(void)setDelegate:(id<STSSearchDropDownViewControllerDelegate>)arg1 ;
-(void)showSuggestions;
-(id)initWithSearchModel:(id)arg1 ;
-(void)_updateSuggestions;
-(void)setQuery:(NSString *)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchModelUpdated;
-(void)sendVisibleResultsFeedback;
-(void)categoryViewController:(id)arg1 didSelectCategory:(id)arg2 suggested:(BOOL)arg3 ;
-(void)categoryViewController:(id)arg1 didSelectRecent:(id)arg2 ;
-(BOOL)sendFeedbackOnViewDidAppear;
-(void)setSendFeedbackOnViewDidAppear:(BOOL)arg1 ;
-(void)categoryViewControllerDidSelectClearRecentsButton:(id)arg1 ;
-(void)clearRecents;
-(void)didPressReturnKey:(id)arg1 ;
-(void)didPressDownKey;
-(void)didPressUpKey;
-(void)didRequestClose;
-(void)_showLegalNotice;
-(void)showCategories;
-(void)showPickerAndPerformQuery:(id)arg1 requestType:(long long)arg2 ;
-(void)suggestionViewController:(id)arg1 didSelectSuggestion:(id)arg2 suggested:(BOOL)arg3 ;
-(void)didCloseDropDown;
-(BOOL)shouldShowLegalNotice;
-(void)showSuggestionsIfNeccessary;
-(void)dropDownContentViewControllerShouldDismiss;
-(void)searchModelWillFetchQuerySuggestionsCompletions:(id)arg1 ;
-(void)searchModelUpdatedQuerySuggestions:(id)arg1 ;
-(id<PopUpPlugin>)popUpPlugin;
-(void)setPopUpPlugin:(id<PopUpPlugin>)arg1 ;
-(id<PopUpSearchViewDelegate>)locationDelegate;
-(void)setLocationDelegate:(id<PopUpSearchViewDelegate>)arg1 ;
-(CategoriesDataSource *)categoriesDataSource;
-(void)setCategoriesDataSource:(CategoriesDataSource *)arg1 ;
@end

