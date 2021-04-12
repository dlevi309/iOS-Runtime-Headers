/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNTracker.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface VNRectangleTracker : VNTracker {

	NSMutableDictionary* _cornerTrackersImpl;
	NSObject*<OS_dispatch_queue> _rectangleTrackingProcessingQueue;

}
+(id)_trackingRectAroundPoint:(CGPoint)arg1 trackingRectSize:(CGSize)arg2 ;
+(id)trackedCorners;
+(Class)trackerObservationClass;
-(BOOL)reset:(id*)arg1 ;
-(BOOL)isTracking;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)setTrackedObjects:(id)arg1 inFrame:(id)arg2 error:(id*)arg3 ;
-(id)trackInFrame:(id)arg1 error:(id*)arg2 ;
-(id)_parseInputObservations:(id)arg1 imageBuffer:(id)arg2 error:(id*)arg3 ;
-(id)_convertCornerObservationsToRectangleObservation:(id)arg1 error:(id*)arg2 ;
@end

