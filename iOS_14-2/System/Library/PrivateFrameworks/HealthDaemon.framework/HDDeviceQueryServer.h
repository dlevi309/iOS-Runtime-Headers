/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>

@interface HDDeviceQueryServer : HDQueryServer
+(Class)queryClass;
-(void)_queue_start;
-(id)deviceQueryClientProxy;
-(void)_deliverErrorToClient:(id)arg1 ;
@end

