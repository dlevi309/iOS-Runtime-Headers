/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDTaskServer <_HKXPCExportable>
@optional
+(Class)configurationClass;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;
+(id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;

@required
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(id)taskUUID;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end

