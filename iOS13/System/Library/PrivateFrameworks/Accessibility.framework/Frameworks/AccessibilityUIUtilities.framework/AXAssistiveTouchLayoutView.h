/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray;

@interface AXAssistiveTouchLayoutView : UIView {

	NSArray* _itemConstraints;
	NSMutableArray* _positioningLayoutGuides;

}

@property (nonatomic,retain) NSArray * itemConstraints;                             //@synthesize itemConstraints=_itemConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * positioningLayoutGuides;              //@synthesize positioningLayoutGuides=_positioningLayoutGuides - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutItemsByLocation:(id)arg1 positions:(id)arg2 rows:(id)arg3 columns:(id)arg4 clockwiseOctagonalLocations:(id)arg5 horizontallyCenteredLocation:(id)arg6 ;
-(void)_enableAutoLayoutForAllItems:(id)arg1 ;
-(NSArray *)itemConstraints;
-(void)setItemConstraints:(NSArray *)arg1 ;
-(id)_setUpConstraintsForPreferredPositionsForItems:(id)arg1 positions:(id)arg2 ;
-(id)_setUpConstraintsToAlignItems:(id)arg1 rows:(id)arg2 columns:(id)arg3 ;
-(id)_setUpConstraintsToAvoidCollisions:(id)arg1 rows:(id)arg2 columns:(id)arg3 clockwiseOctagonalLocations:(id)arg4 ;
-(NSMutableArray *)positioningLayoutGuides;
-(void)setPositioningLayoutGuides:(NSMutableArray *)arg1 ;
-(void)_enumerateListsOfLocations:(id)arg1 items:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)centerItems:(id)arg1 withView:(id)arg2 ;
-(void)layoutItemsByLocation:(id)arg1 ;
-(void)centerItems:(id)arg1 ;
@end

