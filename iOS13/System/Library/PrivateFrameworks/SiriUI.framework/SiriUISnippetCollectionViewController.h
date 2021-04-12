/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDragDelegate.h>

@class UICollectionViewLayout, UICollectionView, NSString;

@interface SiriUISnippetCollectionViewController : SiriUISnippetViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDragDelegate> {

	CGRect _previousBounds;
	BOOL _needsToInvalidateCollectionViewLayoutOnViewWillLayoutSubviews;
	UICollectionViewLayout* _collectionViewLayout;
	UICollectionView* _collectionView;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                          //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayout * collectionViewLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(UICollectionView *)collectionView;
-(void)viewWillLayoutSubviews;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UICollectionViewLayout *)collectionViewLayout;
-(id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
@end

