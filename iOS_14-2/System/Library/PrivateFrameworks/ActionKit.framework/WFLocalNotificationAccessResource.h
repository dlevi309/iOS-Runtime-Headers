/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAccessResource.h>

@interface WFLocalNotificationAccessResource : WFAccessResource {

	unsigned long long _globalLevelStatus;

}

@property (assign,nonatomic) unsigned long long globalLevelStatus;              //@synthesize globalLevelStatus=_globalLevelStatus - In the implementation block
+(void)initialize;
+(BOOL)isSystemResource;
+(void)requestLocalNotificationsAuthorizationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)icon;
-(id)name;
-(void)refreshAvailability;
-(unsigned long long)globalLevelStatus;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1 ;
-(void)setGlobalLevelStatus:(unsigned long long)arg1 ;
@end

