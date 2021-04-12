/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class UICollectionView, NSArray, UICollectionViewFlowLayout, NSString;

@interface UIKBRecentInputsView : UIKBKeyView <UICollectionViewDataSource, UICollectionViewDelegate> {

	BOOL _verticalLayout;
	UICollectionView* _collectionView;
	NSArray* _recentInputStrings;
	UICollectionViewFlowLayout* _flowLayout;

}

@property (nonatomic,retain) UICollectionViewFlowLayout * flowLayout;              //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                    //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSArray * recentInputStrings;                         //@synthesize recentInputStrings=_recentInputStrings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)displayLayer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
-(UICollectionViewFlowLayout *)flowLayout;
-(void)setRecentInputs:(id)arg1 ;
-(void)scrollViewDidChangeContentSize:(id)arg1 ;
-(unsigned long long)focusableVariantCount;
-(void)setupCollectionView;
-(NSArray *)recentInputStrings;
-(void)setRecentInputStrings:(NSArray *)arg1 ;
-(void)setVerticalLayout:(BOOL)arg1 ;
-(void)refreshSelectedRecent;
-(id)selectedRecentInputString;
@end

