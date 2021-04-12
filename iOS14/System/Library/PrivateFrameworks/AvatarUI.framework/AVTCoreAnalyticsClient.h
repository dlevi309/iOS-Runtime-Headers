/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTCoreAnalyticsClient.h>

@protocol AVTCoreAnalyticsClient
@required
-(void)sendEventForKey:(id)arg1 payload:(id)arg2;

@end


@interface AVTCoreAnalyticsClient : NSObject <AVTCoreAnalyticsClient>
-(void)sendEventForKey:(id)arg1 payload:(id)arg2 ;
-(void)ADClientSetValueForScalarKey:(id)arg1 :(long long)arg2 ;
-(void)ADClientAddValueForScalarKey:(id)arg1 :(long long)arg2 ;
-(void)ADClientPushValueForDistributionKey:(id)arg1 :(double)arg2 ;
@end

