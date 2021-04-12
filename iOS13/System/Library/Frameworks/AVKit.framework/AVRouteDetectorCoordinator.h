/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@interface AVRouteDetectorCoordinator : NSObject {

	BOOL _routeDetectionEnabled;

}

@property (assign,getter=isRouteDetectionEnabled,nonatomic) BOOL routeDetectionEnabled;              //@synthesize routeDetectionEnabled=_routeDetectionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL multipleRoutesDetected; 
+(BOOL)multipleRoutesDetected;
+(void)endDetectingRoutes;
+(void)beginDetectingRoutes;
+(id)routeDetectorCoordinatorQueue;
+(id)sharedSystemRouteDetector;
+(void)updateMultipleRoutesDetected;
+(void)setMultipleRoutesDetected:(BOOL)arg1 ;
-(void)dealloc;
-(void)setRouteDetectionEnabled:(BOOL)arg1 ;
-(BOOL)multipleRoutesDetected;
-(BOOL)isRouteDetectionEnabled;
@end

