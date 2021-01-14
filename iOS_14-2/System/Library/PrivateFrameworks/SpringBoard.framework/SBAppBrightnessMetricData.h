/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAppBundleID:(NSString *)arg1 ;
-(NSString *)appBundleID;
-(void)setDuration:(unsigned long long)arg1 ;
-(unsigned long long)brightness;
-(unsigned long long)duration;
-(void)setBrightness:(unsigned long long)arg1 ;
@end

