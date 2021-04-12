/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/ATXNotificationsRecord.h>

@class NSString;

@interface ATXNotificationsActionPredictionRecord : ATXNotificationsRecord {

	NSString* _actionPredBundleId;

}
-(id)init;
-(BOOL)addEvent:(id)arg1 ;
-(long long)determineEndingInteraction;
-(id)initWithNotificationId:(id)arg1 timestamp:(id)arg2 ;
-(BOOL)isMatchActionPredBundleId:(id)arg1 ;
@end

