/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/ATXDuetEvent.h>

@class NSString;

@interface ATXAppLaunchDuetEvent : ATXDuetEvent {

	NSString* _bundleId;
	long long _appLaunchState;
	NSString* _launchReason;

}

@property (nonatomic,readonly) NSString * bundleId;                   //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) long long appLaunchState;              //@synthesize appLaunchState=_appLaunchState - In the implementation block
@property (nonatomic,readonly) NSString * launchReason;               //@synthesize launchReason=_launchReason - In the implementation block
+(BOOL)_acceptableLaunchReason:(id)arg1 ;
-(id)description;
-(id)identifier;
-(NSString *)launchReason;
-(NSString *)bundleId;
-(id)initWithDKEvent:(id)arg1 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithBundleId:(id)arg1 appLaunchState:(long long)arg2 launchReason:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(id)initWithBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(long long)appLaunchState;
@end

