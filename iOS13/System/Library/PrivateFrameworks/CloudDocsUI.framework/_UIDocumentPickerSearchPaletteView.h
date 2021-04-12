/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UISearchBarDelegate.h>

@class UISearchController, _UIDocumentSearchListController, NSLayoutConstraint, NSString;

@interface _UIDocumentPickerSearchPaletteView : UIView <UISearchBarDelegate> {

	UISearchController* _searchController;
	_UIDocumentSearchListController* _resultsController;
	NSLayoutConstraint* _searchFieldLeftConstraint;
	NSLayoutConstraint* _searchFieldRightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * searchFieldLeftConstraint;                   //@synthesize searchFieldLeftConstraint=_searchFieldLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * searchFieldRightConstraint;                  //@synthesize searchFieldRightConstraint=_searchFieldRightConstraint - In the implementation block
@property (nonatomic,retain) _UIDocumentSearchListController * resultsController;              //@synthesize resultsController=_resultsController - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                            //@synthesize searchController=_searchController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(_UIDocumentSearchListController *)resultsController;
-(void)setResultsController:(_UIDocumentSearchListController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 resultsController:(id)arg2 ;
-(void)searchCanceled:(id)arg1 ;
-(NSLayoutConstraint *)searchFieldLeftConstraint;
-(void)setSearchFieldLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)searchFieldRightConstraint;
-(void)setSearchFieldRightConstraint:(NSLayoutConstraint *)arg1 ;
@end

