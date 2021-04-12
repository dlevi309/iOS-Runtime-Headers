/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setViewController:(UIViewController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSIndexPath *)indexPath;
-(void)setMaximumContentWidth:(double)arg1 ;
-(double)maximumContentWidth;
-(void)layoutSubviews;
-(UIViewController *)viewController;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setManagesViewControllerContainerViewLayout:(BOOL)arg1 ;
-(UIView *)viewControllerContainerView;
-(BOOL)managesViewControllerContainerViewLayout;
@end

