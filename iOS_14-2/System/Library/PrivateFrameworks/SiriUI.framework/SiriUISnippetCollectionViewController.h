/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillLayoutSubviews;
-(id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(UICollectionViewLayout *)collectionViewLayout;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
@end

