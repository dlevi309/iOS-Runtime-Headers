/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(unsigned long long)focusableVariantCount;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setupCollectionView;
-(NSArray *)recentInputStrings;
-(void)setRecentInputStrings:(NSArray *)arg1 ;
-(void)refreshSelectedRecent;
-(id)selectedRecentInputString;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UICollectionViewFlowLayout *)flowLayout;
-(void)displayLayer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)setRecentInputs:(id)arg1 ;
-(void)setVerticalLayout:(BOOL)arg1 ;
-(void)scrollViewDidChangeContentSize:(id)arg1 ;
-(void)dealloc;
-(void)setFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
@end

