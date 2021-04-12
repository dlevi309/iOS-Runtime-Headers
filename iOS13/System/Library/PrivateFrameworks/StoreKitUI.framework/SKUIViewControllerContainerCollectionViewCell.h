/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class SKUIViewControllerContainerView, NSIndexPath, UIViewController, UIView;

@interface SKUIViewControllerContainerCollectionViewCell : UICollectionViewCell {

	SKUIViewControllerContainerView* _viewControllerContainerView;
	BOOL _managesViewControllerContainerViewLayout;
	double _maximumContentWidth;
	NSIndexPath* _indexPath;

}

@property (assign,nonatomic) double maximumContentWidth;                                 //@synthesize maximumContentWidth=_maximumContentWidth - In the implementation block
@property (nonatomic,retain) UIViewController * viewController; 
@property (nonatomic,readonly) UIView * viewControllerContainerView; 
@property (assign,nonatomic) BOOL managesViewControllerContainerViewLayout;              //@synthesize managesViewControllerContainerViewLayout=_managesViewControllerContainerViewLayout - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                  //@synthesize indexPath=_indexPath - In the implementation block
-(NSIndexPath *)indexPath;
-(void)setViewController:(UIViewController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIViewController *)viewController;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setMaximumContentWidth:(double)arg1 ;
-(double)maximumContentWidth;
-(void)setManagesViewControllerContainerViewLayout:(BOOL)arg1 ;
-(UIView *)viewControllerContainerView;
-(BOOL)managesViewControllerContainerViewLayout;
@end

