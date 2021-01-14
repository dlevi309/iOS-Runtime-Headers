/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/RLMNotificationToken.h>

@class RLMRealm;

@interface RLMCancellationToken : RLMNotificationToken {

	NotificationToken* _token;
	RLMRealm* _realm;

}
-(id)realm;
-(void)invalidate;
-(id)initWithToken:(NotificationToken*)arg1 realm:(id)arg2 ;
-(void)suppressNextNotification;
@end

