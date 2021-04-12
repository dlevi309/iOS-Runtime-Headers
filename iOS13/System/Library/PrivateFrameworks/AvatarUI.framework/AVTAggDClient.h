/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAggDClient.h>

@protocol AVTAggDClient
@required
-(void)ADClientSetValueForScalarKey:(id)arg1 :(long long)arg2;
-(void)ADClientAddValueForScalarKey:(id)arg1 :(long long)arg2;
-(void)ADClientPushValueForDistributionKey:(id)arg1 :(double)arg2;

@end


@interface AVTAggDClient : NSObject <AVTAggDClient>
-(void)ADClientSetValueForScalarKey:(id)arg1 :(long long)arg2 ;
-(void)ADClientAddValueForScalarKey:(id)arg1 :(long long)arg2 ;
-(void)ADClientPushValueForDistributionKey:(id)arg1 :(double)arg2 ;
@end

