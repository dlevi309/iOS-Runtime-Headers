/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewControllerContainerCollectionView.h>

@interface SKUIScrollingSegmentedControllerCollectionView : SKUIViewControllerContainerCollectionView {

	BOOL _performingLayout;

}

@property (assign,nonatomic) id<SKUIScrollingSegmentedControllerCollectionViewDelegate> delegate; 
@property (getter=isPerformingLayout,nonatomic,readonly) BOOL performingLayout;                                //@synthesize performingLayout=_performingLayout - In the implementation block
-(void)layoutSubviews;
-(BOOL)isPerformingLayout;
@end

