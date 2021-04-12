/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKMuninGestureControllerDelegate <NSObject>
@required
-(void)muninGestureControllerDidStartUserInteraction:(id)arg1;
-(void)muninGestureControllerDidStopUserInteraction:(id)arg1;
-(void)muninGestureController:(id)arg1 didTapLabelMarker:(id)arg2;
-(void)muninGestureController:(id)arg1 didTapAtPoint:(CGPoint)arg2 areaAvailable:(BOOL)arg3;
-(void)muninGestureController:(id)arg1 didZoomWithDirection:(long long)arg2 type:(long long)arg3;
-(void)muninGestureControllerDidPan:(id)arg1;

@end

