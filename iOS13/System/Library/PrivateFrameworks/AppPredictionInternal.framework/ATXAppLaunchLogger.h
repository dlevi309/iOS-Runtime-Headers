/*
* Generated on Monday, March 1, 2021 at 2:33:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/ATXNotificationsDatabase.h>
#import <libobjc.A.dylib/ATXPeriodicLoggerSource.h>

@class NSString;

@interface ATXAppLaunchLogger : ATXNotificationsDatabase <ATXPeriodicLoggerSource> {

	BOOL _enabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setEnabled:(BOOL)arg1 ;
-(id)_init;
-(long long)latestVersion;
-(id)getMetrics;
-(id)createCustomSchema;
-(void)logAppLaunchFrom:(unsigned long long)arg1 at:(id)arg2 ;
@end

