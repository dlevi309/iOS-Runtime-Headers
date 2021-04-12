/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIView, NSMutableArray;

@interface NTKSiderealWaypointsView : UIView {

	NSArray* _waypoints;
	double _orbitDiameter;
	UIView* _orbitContainerView;
	double _waypointDiameter;
	UIView* _waypointContainerView;
	double _dialDiameter;
	UIView* _separatorLinesContainer;
	NSMutableArray* _separatorLines;

}
-(void)setWaypoints:(id)arg1 ;
-(id)_newWaypointView;
-(void)_updateSeparatorLines;
-(id)_newSeparatorLineForWaypoint:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 orbitDiameter:(double)arg2 dialDiameter:(double)arg3 waypoints:(id)arg4 ;
@end

