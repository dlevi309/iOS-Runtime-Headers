/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/


@protocol IMAssistantCoreTelephonySubscriptionsDataSource <NSObject>
@property (nonatomic,readonly) BOOL deviceHasMultipleSubscriptions; 
@required
-(BOOL)deviceHasMultipleSubscriptions;
-(id)bestSenderIdentityForChatWithHandleIDs:(id)arg1;
-(id)handleIDForSenderIdentity:(id)arg1;
-(id)simIDForSenderIdentity:(id)arg1;

@end

