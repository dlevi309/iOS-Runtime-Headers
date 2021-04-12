/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUViewControllerCollectionViewCell.h>

@class HUQuickControlCollectionViewLayoutAttributes, HUQuickControlCollectionViewCellContainerViewController;

@interface HUQuickControlViewControllerCollectionViewCell : HUViewControllerCollectionViewCell {

	HUQuickControlCollectionViewLayoutAttributes* _activeLayoutAttributes;

}

@property (nonatomic,retain) HUQuickControlCollectionViewLayoutAttributes * activeLayoutAttributes;                 //@synthesize activeLayoutAttributes=_activeLayoutAttributes - In the implementation block
@property (nonatomic,retain) HUQuickControlCollectionViewCellContainerViewController * viewController; 
+(unsigned long long)quickControlSizeForItemSize:(unsigned long long)arg1 ;
-(void)setViewController:(HUQuickControlCollectionViewCellContainerViewController *)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(HUQuickControlCollectionViewLayoutAttributes *)activeLayoutAttributes;
-(void)_updateContentViewControllerForActiveLayoutAttributes;
-(void)setActiveLayoutAttributes:(HUQuickControlCollectionViewLayoutAttributes *)arg1 ;
@end

