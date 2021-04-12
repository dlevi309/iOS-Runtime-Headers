/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/PSKeyboardNavigationSearchResultsController.h>

@protocol SUIKSearchResultsCollectionViewControllerDelegate;
@class NSObject, UICollectionViewDiffableDataSource, _SUIKSearchResultsUpdateOperation;

@interface SUIKSearchResultsCollectionViewController : UICollectionViewController <PSKeyboardNavigationSearchResultsController> {

	NSObject*<SUIKSearchResultsCollectionViewControllerDelegate> _delegate;
	UICollectionViewDiffableDataSource* _diffableDataSource;
	_SUIKSearchResultsUpdateOperation* _updateOperation;

}

@property (nonatomic,retain) UICollectionViewDiffableDataSource * diffableDataSource;                                   //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (nonatomic,retain) _SUIKSearchResultsUpdateOperation * updateOperation;                                       //@synthesize updateOperation=_updateOperation - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<SUIKSearchResultsCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(NSObject*<SUIKSearchResultsCollectionViewControllerDelegate>)delegate;
-(void)setDelegate:(NSObject*<SUIKSearchResultsCollectionViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setResults:(id)arg1 ;
-(void)selectNextSearchResult;
-(void)selectPreviousSearchResult;
-(double)iconWidth;
-(void)showSelectedSearchResult;
-(void)searchQueryStarted;
-(void)searchQueryFoundItems:(id)arg1 ;
-(void)searchQueryCompleted;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(_SUIKSearchResultsUpdateOperation *)updateOperation;
-(void)setUpdateOperation:(_SUIKSearchResultsUpdateOperation *)arg1 ;
-(void)_selectAndScrollToIndexPath:(id)arg1 ;
@end

