/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/IKAppKeyboardDelegate.h>
#import <TVMLKit/_TVStackCollectionViewControllerDelegate.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class IKViewElement, IKTextFieldElement, IKAppKeyboard, UISearchController, _TVStackCollectionViewController, UIView, UIActivityIndicatorView, NSString;

@interface _TVSearchTemplateController : _TVBgImageLoadingViewController <UISearchResultsUpdating, UISearchBarDelegate, IKAppKeyboardDelegate, _TVStackCollectionViewControllerDelegate, TVAppTemplateImpressionable> {

	IKViewElement* _viewElement;
	IKTextFieldElement* _searchFieldElement;
	IKAppKeyboard* _ikKeyboard;
	IKViewElement* _collectionListElement;
	double _impressionThreshold;
	IKViewElement* _nonResultsElement;
	UISearchController* _searchController;
	_TVStackCollectionViewController* _resultsViewController;
	UIView* _nonResultsView;
	CGRect _keyboardFrame;
	UIActivityIndicatorView* _spinner;
	UIView* _originalSearchFieldRightView;
	long long _originalSearchFieldRightViewMode;

}

@property (nonatomic,readonly) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(id)init;
-(id)collectionView;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(IKViewElement *)viewElement;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)updateNavigationItem:(id)arg1 ;
-(void)textDidChangeForKeyboard:(id)arg1 ;
-(void)_cancelImpressionsUpdate;
-(void)stackCollectionViewController:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(void)_updateImpressions;
-(void)_recordImpressionsForVisibleView;
-(void)_updateKeyboardText;
-(void)_setNonResultsView:(id)arg1 ;
-(BOOL)_searchBarContainsFocus;
-(void)_updateSearchFieldText;
-(BOOL)_isAtWordEnd;
-(id)_sanitizedText;
-(void)_scrollToTopAnimated:(BOOL)arg1 ;
@end

