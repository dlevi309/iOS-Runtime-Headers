/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSDictionary;

@interface VUIPerfMetricsAppLaunchController : NSObject {

	NSDictionary* _appLaunchData;

}

@property (nonatomic,copy) NSDictionary * appLaunchData;              //@synthesize appLaunchData=_appLaunchData - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)_setAppLaunchFieldWithData:(id)arg1 ;
-(NSDictionary *)appLaunchData;
-(void)setAppLaunchData:(NSDictionary *)arg1 ;
-(void)recordAppLaunchEventWithEventType:(id)arg1 ;
@end

