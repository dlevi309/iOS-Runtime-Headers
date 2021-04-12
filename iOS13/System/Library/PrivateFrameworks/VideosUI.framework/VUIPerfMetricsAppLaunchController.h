/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

