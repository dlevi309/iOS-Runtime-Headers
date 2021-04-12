/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/

#import <Security/SFAnalytics.h>

@interface PCSAnalytics : SFAnalytics
+(id)databasePath;
+(id)logger;
-(void)logUnrecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3 ;
-(void)logSuccessForEvent:(id)arg1 ;
-(id)dateOfLastSuccessForEvent:(id)arg1 ;
-(void)noteEvent:(id)arg1 ;
-(void)logRecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3 ;
@end

