/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentSupport.framework/PromotedContentSupport
*/

#import <libobjc.A.dylib/APStatusConditions_XPC.h>

@interface PCStatusConditionsImpl : NSObject <APStatusConditions_XPC>
-(void)setStatusCondition:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearStatusCondition:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)setupXPCConnection;
-(void)isStatusConditionRegistered:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isConditionRateLimited:(id)arg1 onOperation:(long long)arg2 ;
-(void)initializeRateLimitingBuffer;
-(void)cleanupExpiredConditionsInBuffer;
-(BOOL)operationWithCondition:(id)arg1 forType:(long long)arg2 ;
-(id)capped:(id)arg1 to:(unsigned long long)arg2 ;
@end

