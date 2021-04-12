/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBAWDMetricData.h>

@class NSString;

@interface SBAppBrightnessMetricData : SBAWDMetricData {

	NSString* _appBundleID;
	unsigned long long _brightness;
	unsigned long long _duration;

}

@property (nonatomic,copy) NSString * appBundleID;                       //@synthesize appBundleID=_appBundleID - In the implementation block
@property (assign,nonatomic) unsigned long long brightness;              //@synthesize brightness=_brightness - In the implementation block
@property (assign,nonatomic) unsigned long long duration;                //@synthesize duration=_duration - In the implementation block
-(NSString *)appBundleID;
-(unsigned long long)duration;
-(unsigned long long)brightness;
-(void)setBrightness:(unsigned long long)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setAppBundleID:(NSString *)arg1 ;
@end

