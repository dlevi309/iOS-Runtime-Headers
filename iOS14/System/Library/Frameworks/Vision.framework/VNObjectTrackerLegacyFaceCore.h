/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNTracker.h>

@class FaceCoreDetector, NSDictionary;

@interface VNObjectTrackerLegacyFaceCore : VNTracker {

	FaceCoreDetector* _detector;
	NSDictionary* _detectOptions;
	NSDictionary* _extractOptions;

}
+(id)_convertOptionsToFaceCoreExtractOptions:(id)arg1 ;
+(id)_convertOptionsToFaceCoreDetectOptions:(id)arg1 ;
+(id)_convertOptionsToFaceCoreSetupOptions:(id)arg1 ;
+(Class)trackerObservationClass;
-(BOOL)reset:(id*)arg1 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)isResettable;
-(id)setTrackedObjects:(id)arg1 inFrame:(id)arg2 error:(id*)arg3 ;
-(id)trackInFrame:(id)arg1 error:(id*)arg2 ;
-(id)_detectFacesInImage:(id)arg1 error:(id*)arg2 ;
@end

