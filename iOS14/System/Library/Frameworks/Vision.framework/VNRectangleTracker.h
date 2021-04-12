/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)trackedCorners;
+(id)_trackingRectAroundPoint:(CGPoint)arg1 trackingRectSize:(CGSize)arg2 ;
+(Class)trackerObservationClass;
-(BOOL)isTracking;
-(BOOL)reset:(id*)arg1 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)_parseInputObservations:(id)arg1 imageBuffer:(id)arg2 error:(id*)arg3 ;
-(id)_convertCornerObservationsToRectangleObservation:(id)arg1 error:(id*)arg2 ;
-(id)setTrackedObjects:(id)arg1 inFrame:(id)arg2 error:(id*)arg3 ;
-(id)trackInFrame:(id)arg1 error:(id*)arg2 ;
@end

