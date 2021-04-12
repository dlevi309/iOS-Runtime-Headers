/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdPlatforms.framework/AdPlatforms
*/

#import <libobjc.A.dylib/ADStatusConditions_XPC.h>

@interface ADStatusConditionsImpl : NSObject <ADStatusConditions_XPC>
-(id)setupXPCConnection;
-(BOOL)isConditionRateLimited:(id)arg1 onOperation:(long long)arg2 ;
-(void)initializeRateLimitingBuffer;
-(void)setStatusCondition:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearStatusCondition:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)isStatusConditionRegistered:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cleanupExpiredConditionsInBuffer;
-(BOOL)operationWithCondition:(id)arg1 forType:(long long)arg2 ;
-(id)capped:(id)arg1 to:(unsigned long long)arg2 ;
@end

