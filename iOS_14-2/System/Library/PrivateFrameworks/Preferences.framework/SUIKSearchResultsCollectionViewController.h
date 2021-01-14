/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResults:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)selectNextSearchResult;
-(id)init;
-(void)selectPreviousSearchResult;
-(void)searchQueryCompleted;
-(void)searchQueryStarted;
-(_SUIKSearchResultsUpdateOperation *)updateOperation;
-(NSObject*<SUIKSearchResultsCollectionViewControllerDelegate>)delegate;
-(void)showSelectedSearchResult;
-(void)setDelegate:(NSObject*<SUIKSearchResultsCollectionViewControllerDelegate>)arg1 ;
-(double)iconWidth;
-(void)viewDidLoad;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(void)searchQueryFoundItems:(id)arg1 ;
-(void)setUpdateOperation:(_SUIKSearchResultsUpdateOperation *)arg1 ;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)_selectAndScrollToIndexPath:(id)arg1 ;
@end

