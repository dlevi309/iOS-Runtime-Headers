/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MSFlagChangeTriageAction.h>

@class EMMessage;

@interface MSConversationFlagChangeTriageAction : MSFlagChangeTriageAction

@property (nonatomic,readonly) EMMessage * referenceMessage; 
+(long long)conversationNotificationLevel;
-(id)messageFlags;
-(id)_changeAction;
-(EMMessage *)referenceMessage;
-(id)initWithReferenceMessage:(id)arg1 delegate:(id)arg2 reason:(long long)arg3 ;
-(void)_toggleFlagWithBuilder:(id)arg1 ;
@end

