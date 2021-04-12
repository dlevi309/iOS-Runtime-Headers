/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDXPCListenerDelegate <NSObject>
@optional
-(void)connectionConfiguredForListener:(id)arg1 client:(id)arg2 exportedObject:(id)arg3;

@required
-(id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3;

@end

