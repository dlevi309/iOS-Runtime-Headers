/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVRouteDetectorInternal;

@interface AVRouteDetector : NSObject {

	AVRouteDetectorInternal* _routeDetectorInternal;

}

@property (getter=isRouteDetectionEnabled) BOOL routeDetectionEnabled; 
@property (readonly) BOOL multipleRoutesDetected; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)setRouteDetectionEnabled:(BOOL)arg1 ;
-(BOOL)multipleRoutesDetected;
-(void)_updateMultipleRoutesDetected;
-(BOOL)isRouteDetectionEnabled;
@end

