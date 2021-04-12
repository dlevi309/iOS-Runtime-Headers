/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <libobjc.A.dylib/IKAppKeyboardDelegate.h>
#import <TVMLKit/_TVStackCollectionViewControllerDelegate.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class UIView, _TVStackCollectionViewController, UISearchController, IKTextFieldElement, IKAppKeyboard, IKViewElement, UIActivityIndicatorView, NSString;

@interface _TVSearchTemplateController_iOS : _TVBgImageLoadingViewController <UISearchResultsUpdating, IKAppKeyboardDelegate, _TVStackCollectionViewControllerDelegate, TVAppTemplateImpressionable> {

	UIView* _nonResultsView;
	_TVStackCollectionViewController* _resultsViewController;
	UISearchController* _searchController;
	IKTextFieldElement* _searchFieldElement;
	IKAppKeyboard* _ikKeyboard;
	IKViewElement* _nonResultsElement;
	IKViewElement* _collectionListElement;
	CGRect _keyboardFrame;
	double _impressionThreshold;
	UIActivityIndicatorView* _spinner;
	UIView* _originalSearchFieldRightView;
	long long _originalSearchFieldRightViewMode;
	IKViewElement* _viewElement;

}

@property (nonatomic,readonly) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(IKViewElement *)viewElement;
-(void)textDidChangeForKeyboard:(id)arg1 ;
-(void)updateNavigationItem:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)_cancelImpressionsUpdate;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)stackCollectionViewController:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(void)_updateImpressions;
-(void)_recordImpressionsForVisibleView;
-(void)_setNonResultsView:(id)arg1 ;
-(void)_updateKeyboardText;
-(BOOL)_isAtWordEnd;
-(void)_updateSearchFieldText;
-(id)_sanitizedText;
@end

