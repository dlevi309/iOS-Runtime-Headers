/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

