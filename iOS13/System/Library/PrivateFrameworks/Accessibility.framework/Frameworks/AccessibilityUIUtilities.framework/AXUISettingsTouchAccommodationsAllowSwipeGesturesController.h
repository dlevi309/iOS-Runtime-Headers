/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>

@class NSArray;

@interface AXUISettingsTouchAccommodationsAllowSwipeGesturesController : AXUISettingsBaseListController {

	BOOL _touchAccommodationsAllowsSwipeGesturesToBypass;
	double _touchAccommodationsSwipeGestureMinimumDistance;
	NSArray* _minimumDistanceSpecifiers;

}

@property (nonatomic,retain) NSArray * minimumDistanceSpecifiers;                                //@synthesize minimumDistanceSpecifiers=_minimumDistanceSpecifiers - In the implementation block
@property (assign,nonatomic) BOOL touchAccommodationsAllowsSwipeGesturesToBypass;                //@synthesize touchAccommodationsAllowsSwipeGesturesToBypass=_touchAccommodationsAllowsSwipeGesturesToBypass - In the implementation block
@property (assign,nonatomic) double touchAccommodationsSwipeGestureMinimumDistance;              //@synthesize touchAccommodationsSwipeGestureMinimumDistance=_touchAccommodationsSwipeGestureMinimumDistance - In the implementation block
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)touchAccommodationsAllowsSwipeGesturesToBypass;
-(double)touchAccommodationsSwipeGestureMinimumDistance;
-(void)setTouchAccommodationsAllowsSwipeGesturesToBypass:(BOOL)arg1 ;
-(void)setTouchAccommodationsSwipeGestureMinimumDistance:(double)arg1 ;
-(id)specifiers;
-(void)_setAllowsSwipesToBypass:(id)arg1 specifier:(id)arg2 ;
-(id)_allowsSwipesToBypass:(id)arg1 ;
-(id)_minimumDistanceSpecifiers;
-(NSArray *)minimumDistanceSpecifiers;
-(id)_specifierWithName:(id)arg1 minimumDistance:(double)arg2 ;
-(void)setMinimumDistanceSpecifiers:(NSArray *)arg1 ;
-(BOOL)_shouldShowSwipeMinimumDistanceSpecifier;
@end

