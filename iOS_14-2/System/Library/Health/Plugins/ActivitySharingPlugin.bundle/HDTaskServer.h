/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/


@protocol HDTaskServer <_HKXPCExportable>
@optional
+(id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;
+(BOOL)validateClient:(id)arg1 error:(id*)arg2;
+(Class)configurationClass;

@required
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(id)taskUUID;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end

