/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class AVRouteDetectorInternal;

@interface AVRouteDetector : NSObject {

	AVRouteDetectorInternal* _routeDetectorInternal;

}

@property (getter=isRouteDetectionEnabled) BOOL routeDetectionEnabled; 
@property (readonly) BOOL multipleRoutesDetected; 
+(void)initialize;
-(id)init;
-(BOOL)multipleRoutesDetected;
-(void)_updateMultipleRoutesDetected;
-(BOOL)isRouteDetectionEnabled;
-(void)setRouteDetectionEnabled:(BOOL)arg1 ;
-(void)dealloc;
@end

