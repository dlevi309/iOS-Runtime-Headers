/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
*/

#import <IntentsCore/INCExecutionInfo.h>

@class NSString;

@interface INCUserActivityExecutionInfo : INCExecutionInfo {

	NSString* _userActivityType;

}

@property (nonatomic,copy,readonly) NSString * userActivityType;              //@synthesize userActivityType=_userActivityType - In the implementation block
+(void)initialize;
-(NSString *)userActivityType;
-(id)initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2 ;
-(BOOL)canRunOnLocalDevice;
-(id)_initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2 containingAppBundleURL:(id)arg3 ;
@end

