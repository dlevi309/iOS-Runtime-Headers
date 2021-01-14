/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INExecutionInfo.h>

@class NSString;

@interface INUserActivityExecutionInfo : INExecutionInfo {

	NSString* _userActivityType;

}

@property (nonatomic,copy,readonly) NSString * userActivityType;              //@synthesize userActivityType=_userActivityType - In the implementation block
+(void)initialize;
-(NSString *)userActivityType;
-(id)_initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2 containingAppBundleURL:(id)arg3 extensionBundleId:(id)arg4 ;
-(id)initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2 ;
-(BOOL)canRunOnLocalDevice;
@end

