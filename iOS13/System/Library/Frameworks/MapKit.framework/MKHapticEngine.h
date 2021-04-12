/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class UINotificationFeedbackGenerator, UIImpactFeedbackGenerator, _UIDragSnappingFeedbackGenerator;

@interface MKHapticEngine : NSObject {

	UINotificationFeedbackGenerator* _notificationGenerator;
	UIImpactFeedbackGenerator* _feedbackGenerator;
	_UIDragSnappingFeedbackGenerator* _dragSnappingGenerator;
	BOOL _isDragging;

}
-(id)init;
-(void)prepare;
-(void)draggedObjectLifted;
-(void)draggedObjectLanded;
-(void)playFailure;
-(void)playSuccess;
@end

