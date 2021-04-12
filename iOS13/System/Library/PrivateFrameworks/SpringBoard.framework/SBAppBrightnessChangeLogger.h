/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSString, NSDate;

@interface SBAppBrightnessChangeLogger : NSObject {

	NSString* _bundleID;
	long long _brightnessLevel;
	NSDate* _eventTimestamp;

}

@property (nonatomic,copy) NSString * bundleID;                      //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) long long brightnessLevel;              //@synthesize brightnessLevel=_brightnessLevel - In the implementation block
@property (nonatomic,copy) NSDate * eventTimestamp;                  //@synthesize eventTimestamp=_eventTimestamp - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(long long)brightnessLevel;
-(void)setBrightnessLevel:(long long)arg1 ;
-(NSDate *)eventTimestamp;
-(void)setEventTimestamp:(NSDate *)arg1 ;
-(void)_screenLocked;
-(void)_publishMetricsIfNeeded;
-(void)_publishMetrics;
-(void)noteApp:(id)arg1 setScreenBrightness:(double)arg2 ;
@end

