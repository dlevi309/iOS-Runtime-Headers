/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol PXGadgetCollectionViewLayoutDelegate;
@class PXGadgetSpec, NSString;

@interface PXGadgetCollectionViewLayout : UICollectionViewFlowLayout <UICollectionViewDelegateFlowLayout> {

	BOOL _prefersPagingEnabled;
	BOOL _isPageFullColumnnWidth;
	PXGadgetSpec* _spec;
	id<PXGadgetCollectionViewLayoutDelegate> _delegate;
	long long _pageSizeClass;
	double _columnWidth;
	double _interSectionSpacing;

}

@property (nonatomic,retain) PXGadgetSpec * spec;                                                   //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetCollectionViewLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL prefersPagingEnabled;                                             //@synthesize prefersPagingEnabled=_prefersPagingEnabled - In the implementation block
@property (assign,nonatomic) long long pageSizeClass;                                               //@synthesize pageSizeClass=_pageSizeClass - In the implementation block
@property (assign,nonatomic) BOOL isPageFullColumnnWidth;                                           //@synthesize isPageFullColumnnWidth=_isPageFullColumnnWidth - In the implementation block
@property (assign,nonatomic) double columnWidth;                                                    //@synthesize columnWidth=_columnWidth - In the implementation block
@property (assign,nonatomic) double interSectionSpacing;                                            //@synthesize interSectionSpacing=_interSectionSpacing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpec:(PXGadgetSpec *)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(BOOL)_disablesDoubleSidedAnimations;
-(void)setPrefersPagingEnabled:(BOOL)arg1 ;
-(id<PXGadgetCollectionViewLayoutDelegate>)delegate;
-(id)_titleForGadget:(id)arg1 ;
-(unsigned long long)_buttonTypeForGadget:(id)arg1 ;
-(BOOL)isPageFullColumnnWidth;
-(BOOL)prefersPagingEnabled;
-(BOOL)_shouldShowSectionHeaderForGadget:(id)arg1 ;
-(unsigned long long)_sectionHeaderStyleForGadget:(id)arg1 ;
-(void)setPageSizeClass:(long long)arg1 ;
-(double)interSectionSpacing;
-(double)columnWidth;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)_updateMinimumLineSpacing;
-(void)setInterSectionSpacing:(double)arg1 ;
-(BOOL)_hasButtonForGadget:(id)arg1 ;
-(void)setColumnWidth:(double)arg1 ;
-(PXGadgetSpec *)spec;
-(void)setScrollDirection:(long long)arg1 ;
-(void)setDelegate:(id<PXGadgetCollectionViewLayoutDelegate>)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(long long)pageSizeClass;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(void)setIsPageFullColumnnWidth:(BOOL)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
@end

