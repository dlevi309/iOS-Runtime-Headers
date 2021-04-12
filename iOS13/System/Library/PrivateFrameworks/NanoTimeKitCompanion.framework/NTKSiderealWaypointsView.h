/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

