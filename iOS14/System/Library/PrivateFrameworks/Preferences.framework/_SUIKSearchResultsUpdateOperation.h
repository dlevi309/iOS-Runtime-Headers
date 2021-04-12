/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResults:(NSArray *)arg1 ;
-(NSArray *)results;
-(id<SUIKSearchResultsCollectionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SUIKSearchResultsCollectionViewControllerDelegate>)arg1 ;
-(void)main;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(id)initWithResults:(id)arg1 diffableDataSource:(id)arg2 delegate:(id)arg3 ;
@end

