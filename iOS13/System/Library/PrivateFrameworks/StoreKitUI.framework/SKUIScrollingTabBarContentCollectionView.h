/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewControllerContainerCollectionView.h>

@interface SKUIScrollingTabBarContentCollectionView : SKUIViewControllerContainerCollectionView {

	BOOL _performingLayout;

}

@property (assign,nonatomic) id<SKUIScrollingTabBarContentCollectionViewDelegate> delegate; 
@property (getter=isPerformingLayout,nonatomic,readonly) BOOL performingLayout;                          //@synthesize performingLayout=_performingLayout - In the implementation block
-(void)layoutSubviews;
-(void)_reuseCell:(id)arg1 ;
-(BOOL)isPerformingLayout;
@end

