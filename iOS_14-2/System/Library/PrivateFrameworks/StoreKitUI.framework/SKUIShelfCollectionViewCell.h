/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICollectionViewCell.h>
#import <libobjc.A.dylib/SKUIPerspectiveView.h>

@class UICollectionView, NSString;

@interface SKUIShelfCollectionViewCell : SKUICollectionViewCell <SKUIPerspectiveView> {

	UICollectionView* _collectionView;
	UIEdgeInsets _contentInset;
	BOOL _rendersWithPerspective;
	BOOL _rendersWithParallax;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                      //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) BOOL rendersWithPerspective;                    //@synthesize rendersWithPerspective=_rendersWithPerspective - In the implementation block
@property (assign,nonatomic) BOOL rendersWithParallax;                       //@synthesize rendersWithParallax=_rendersWithParallax - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)maximumPerspectiveHeightForSize:(CGSize)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UIEdgeInsets)contentInset;
-(UICollectionView *)collectionView;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
-(void)setPerspectiveTargetView:(id)arg1 ;
-(BOOL)rendersWithParallax;
-(BOOL)rendersWithPerspective;
-(void)setRendersWithPerspective:(BOOL)arg1 ;
-(void)setRendersWithParallax:(BOOL)arg1 ;
@end

