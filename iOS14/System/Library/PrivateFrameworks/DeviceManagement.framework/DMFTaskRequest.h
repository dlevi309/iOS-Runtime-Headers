/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskRequest.h>

@interface DMFTaskRequest : CATTaskRequest
+(BOOL)isPermittedOnUserConnection;
+(BOOL)isPermittedOnPlatform:(unsigned long long)arg1 ;
+(BOOL)isPermittedOnCurrentPlatform;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
@end

