/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/RLMNotificationToken.h>

@class RLMRealm;

@interface RLMCancellationToken : RLMNotificationToken {

	NotificationToken* _token;
	RLMRealm* _realm;

}
-(void)invalidate;
-(id)realm;
-(id)initWithToken:(NotificationToken*)arg1 realm:(id)arg2 ;
-(void)suppressNextNotification;
@end

