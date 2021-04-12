/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/

#import <IMAssistantCore/IMAssistantCoreTelephonySubscriptionsDataSource.h>

@class NSString;

@interface IMAssistantCoreTelephonySubscriptionsDefaultDataSource : NSObject <IMAssistantCoreTelephonySubscriptionsDataSource>

@property (nonatomic,readonly) BOOL deviceHasMultipleSubscriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)deviceHasMultipleSubscriptions;
-(id)bestSenderIdentityForChatWithHandleIDs:(id)arg1 ;
-(id)handleIDForSenderIdentity:(id)arg1 ;
-(id)simIDForSenderIdentity:(id)arg1 ;
-(id)subscriptionContextForSenderIdentity:(id)arg1 ;
@end

