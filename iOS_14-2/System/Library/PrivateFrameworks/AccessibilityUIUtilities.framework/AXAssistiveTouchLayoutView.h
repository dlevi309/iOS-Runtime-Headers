/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray;

@interface AXAssistiveTouchLayoutView : UIView {

	NSArray* _itemConstraints;
	NSMutableArray* _positioningLayoutGuides;

}

@property (nonatomic,retain) NSArray * itemConstraints;                             //@synthesize itemConstraints=_itemConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * positioningLayoutGuides;              //@synthesize positioningLayoutGuides=_positioningLayoutGuides - In the implementation block
+(id)labelFont;
+(id)labelMinimumContentSizeCategory;
+(id)labelMaximumContentSizeCategory;
+(id)_preferredContentSizeCategoryCappedByMinimumContentSizeCategory:(id)arg1 maximumContentSizeCategory:(id)arg2 ;
+(double)_layoutViewSideLengthScaledFromDefaultLength:(double)arg1 labelContentSizeCategory:(id)arg2 ;
+(id)_imageMaximumContentSizeCategoryIndependentOfLabel;
+(double)defaultSideLength;
+(id)imageMinimumContentSizeCategory;
+(id)_traitCollectionForMinimumContentSizeCategory:(id)arg1 maximumContentSizeCategory:(id)arg2 ;
+(id)imageMaximumContentSizeCategory;
+(id)traitCollectionForLabelPreferredContentSizeCategory;
+(id)fontMetrics;
+(double)layoutViewSideLengthScaledFromDefaultLength:(double)arg1 ;
+(id)traitCollectionForImagePreferredContentSizeCategory;
+(double)minimumOuterPadding;
-(NSArray *)itemConstraints;
-(void)layoutItemsByLocation:(id)arg1 positions:(id)arg2 rows:(id)arg3 columns:(id)arg4 clockwiseOctagonalLocations:(id)arg5 horizontallyCenteredLocation:(id)arg6 ;
-(void)_enableAutoLayoutForAllItems:(id)arg1 ;
-(void)setItemConstraints:(NSArray *)arg1 ;
-(id)_setUpConstraintsForPreferredPositionsForItems:(id)arg1 positions:(id)arg2 ;
-(id)_setUpConstraintsToAlignItems:(id)arg1 rows:(id)arg2 columns:(id)arg3 ;
-(id)_setUpConstraintsToAvoidCollisions:(id)arg1 rows:(id)arg2 columns:(id)arg3 clockwiseOctagonalLocations:(id)arg4 ;
-(NSMutableArray *)positioningLayoutGuides;
-(void)setPositioningLayoutGuides:(NSMutableArray *)arg1 ;
-(void)_enumerateListsOfLocations:(id)arg1 items:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)centerItems:(id)arg1 withView:(id)arg2 ;
-(void)layoutItemsByLocation:(id)arg1 hasBackButton:(BOOL)arg2 ;
-(void)centerItems:(id)arg1 ;
@end

