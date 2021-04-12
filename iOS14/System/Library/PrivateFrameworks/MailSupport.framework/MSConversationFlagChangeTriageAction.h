/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MSFlagChangeTriageAction.h>

@class EMMessage;

@interface MSConversationFlagChangeTriageAction : MSFlagChangeTriageAction

@property (nonatomic,readonly) EMMessage * referenceMessage; 
+(long long)conversationNotificationLevel;
-(id)_changeAction;
-(id)messageFlags;
-(EMMessage *)referenceMessage;
-(id)initWithReferenceMessage:(id)arg1 delegate:(id)arg2 reason:(long long)arg3 ;
-(void)_toggleFlagWithBuilder:(id)arg1 ;
@end

