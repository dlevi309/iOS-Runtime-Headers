/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Foundation/NSOperation.h>

@protocol SUIKSearchResultsCollectionViewControllerDelegate;
@class NSArray, UICollectionViewDiffableDataSource;

@interface _SUIKSearchResultsUpdateOperation : NSOperation {

	NSArray* _results;
	UICollectionViewDiffableDataSource* _diffableDataSource;
	id<SUIKSearchResultsCollectionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSArray * results;                                                           //@synthesize results=_results - In the implementation block
@property (assign,nonatomic,__weak) UICollectionViewDiffableDataSource * diffableDataSource;                     //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SUIKSearchResultsCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SUIKSearchResultsCollectionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SUIKSearchResultsCollectionViewControllerDelegate>)arg1 ;
-(NSArray *)results;
-(void)main;
-(void)setResults:(NSArray *)arg1 ;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(id)initWithResults:(id)arg1 diffableDataSource:(id)arg2 delegate:(id)arg3 ;
@end

