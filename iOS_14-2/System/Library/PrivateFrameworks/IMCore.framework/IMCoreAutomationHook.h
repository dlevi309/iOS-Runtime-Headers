/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class IMAccount;

@interface IMCoreAutomationHook : NSObject {

	IMAccount* _imessageAccount;

}

@property (readonly) IMAccount * bestiMessageAccount; 
+(id)stringFromAutomationErrorCode:(long long)arg1 ;
-(IMAccount *)bestiMessageAccount;
-(id)chatForHandles:(id)arg1 error:(id*)arg2 results:(id)arg3 ;
-(id)handlesFromStrings:(id)arg1 error:(id*)arg2 results:(id)arg3 ;
-(id)existingChatForGroupID:(id)arg1 error:(id*)arg2 results:(id)arg3 ;
@end

