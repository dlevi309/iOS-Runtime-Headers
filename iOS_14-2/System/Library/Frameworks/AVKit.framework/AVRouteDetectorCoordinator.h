/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)multipleRoutesDetected;
-(BOOL)isRouteDetectionEnabled;
-(void)setRouteDetectionEnabled:(BOOL)arg1 ;
-(void)dealloc;
@end

