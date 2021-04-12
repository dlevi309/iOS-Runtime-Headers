/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NUIContainerView;

@interface NUICollectionViewContainerCell : UICollectionViewCell {

	NUIContainerView* _containerView;

}

@property (nonatomic,readonly) NUIContainerView * containerView;              //@synthesize containerView=_containerView - In the implementation block
+(Class)_contentViewClass;
+(Class)containerViewClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(NUIContainerView *)containerView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
@end

