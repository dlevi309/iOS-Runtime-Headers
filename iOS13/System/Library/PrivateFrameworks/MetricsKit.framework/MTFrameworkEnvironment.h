/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@interface MTFrameworkEnvironment : NSObject
+(void)initialize;
+(id)sharedEnvironment;
+(void)setSharedEnvironment:(id)arg1 ;
+(void)withEnvironment:(id)arg1 execute:(/*^block*/id)arg2 ;
-(id)date;
-(id)valueForEntitlement:(id)arg1 ;
-(BOOL)isInternalBuild;
-(BOOL)isStandardEnvironment;
@end

