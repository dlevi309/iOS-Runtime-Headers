/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NUIContainerView;

@interface NUICollectionViewContainerCell : UICollectionViewCell {

	NUIContainerView* _containerView;

}

@property (nonatomic,readonly) NUIContainerView * containerView;              //@synthesize containerView=_containerView - In the implementation block
+(Class)containerViewClass;
+(Class)_contentViewClass;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NUIContainerView *)containerView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

