/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSString, NSDate;

@interface SBAppBrightnessChangeLogger : NSObject {

	NSString* _bundleID;
	long long _brightnessLevel;
	NSDate* _eventTimestamp;

}
+(id)sharedInstance;
-(id)init;
-(void)_screenLocked;
-(void)_publishMetricsIfNeeded;
-(void)_publishMetrics;
-(void)noteApp:(id)arg1 setScreenBrightness:(double)arg2 ;
@end

