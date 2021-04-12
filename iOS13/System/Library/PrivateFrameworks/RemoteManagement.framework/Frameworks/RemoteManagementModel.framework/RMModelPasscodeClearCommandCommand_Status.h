/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RMModelPayloadBase.h>

@interface RMModelPasscodeClearCommandCommand_Status : RMModelPayloadBase
+(id)build;
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildRequiredOnly;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
@end

