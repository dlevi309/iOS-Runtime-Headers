/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/

#import <Security/SFAnalytics.h>

@interface PCSAnalytics : SFAnalytics
+(id)databasePath;
+(id)logger;
-(void)logSuccessForEvent:(id)arg1 ;
-(void)logRecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3 ;
-(void)logUnrecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3 ;
-(void)noteEvent:(id)arg1 ;
-(id)dateOfLastSuccessForEvent:(id)arg1 ;
@end

