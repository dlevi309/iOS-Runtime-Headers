/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSubserver.h>
#import <libobjc.A.dylib/HDNotificationServerInterface.h>

@class HDNotificationManager, NSString;

@interface HDNotificationServer : HDSubserver <HDNotificationServerInterface> {

	HDNotificationManager* _notificationManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)remote_badgeForDomain:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setBadge:(id)arg1 forDomain:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_postNotificationWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_postCompanionUserNotificationOfType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithParentServer:(id)arg1 ;
@end

