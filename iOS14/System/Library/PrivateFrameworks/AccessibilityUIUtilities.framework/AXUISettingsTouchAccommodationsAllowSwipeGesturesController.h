/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
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
-(BOOL)touchAccommodationsAllowsSwipeGesturesToBypass;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)_specifierWithName:(id)arg1 minimumDistance:(double)arg2 ;
-(void)setMinimumDistanceSpecifiers:(NSArray *)arg1 ;
-(BOOL)_shouldShowSwipeMinimumDistanceSpecifier;
-(id)_minimumDistanceSpecifiers;
-(NSArray *)minimumDistanceSpecifiers;
-(void)setTouchAccommodationsSwipeGestureMinimumDistance:(double)arg1 ;
-(void)_setAllowsSwipesToBypass:(id)arg1 specifier:(id)arg2 ;
-(void)setTouchAccommodationsAllowsSwipeGesturesToBypass:(BOOL)arg1 ;
-(id)_allowsSwipesToBypass:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)touchAccommodationsSwipeGestureMinimumDistance;
@end

